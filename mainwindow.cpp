#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "configmanager.h"

#include <QDebug>
#include <QElapsedTimer>
#include <QSharedPointer>
#include <QThread>
#include <QTime>
#include <QUrl>
#include <QtCore/QDateTime>
#include <QRegularExpression>

// Jika qcustomplot butuh include spesifik, sudah di header

// =============================================================================
// Application lifecycle
// =============================================================================
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug() << "Begin Setup";

    initSocketIO();
    initUtility();
}

// -----------------------------------------------------------------------------
MainWindow::~MainWindow()
{


    if (client) {
        client->deleteLater();
        client = nullptr;
    }

    if (m_worker) {
        m_worker->deleteLater();
        m_worker = nullptr;
    }


    delete ui;
}

// =============================================================================
// Socket.IO and event worker
// =============================================================================
void MainWindow::initSocketIO()
{
    client = new SocketIOClient();

    connect(client, &SocketIOClient::eventReceived, this, &MainWindow::onSocketEventReceived);

    // connect(client, &SocketIOClient::deviceready,
    //         this,   &SocketIOClient:sendDeviceReady);

    // Worker setup
    m_workerThread = new QThread(this);
    m_worker = new SocketEventWorker();
    m_worker->moveToThread(m_workerThread);

    connect(m_workerThread, &QThread::started, m_worker, &SocketEventWorker::process);





    // Wifi
#ifdef Q_OS_LINUX
    connect(m_worker, &SocketEventWorker::wifiOn, this, &MainWindow::onWifiOnRequest);   // Async
    connect(m_worker, &SocketEventWorker::wifiOff, this, &MainWindow::onWifiOffRequest); // Async
    connect(m_worker,
            &SocketEventWorker::wifiScanSsidReqReceived,
            this,
            &MainWindow::onwifiScanSsidReqReceived); // Async

    // connect(m_worker, &SocketEventWorker::wifiGetSsid,
    //         this, &MainWindow::onWifiGetSsidRequest);  //Async
    connect(m_worker, &SocketEventWorker::wifiGetSsid, this, &MainWindow::onWifiGetSsidRequest); // Async
    connect(m_worker,
            &SocketEventWorker::wifiSsidListComplete,
            this,
            &MainWindow::onWifiSsidListRequestComplete); // Async
    connect(m_worker, &SocketEventWorker::wifiForget, this, &MainWindow::onWifiForgetRequest);
    connect(m_worker, &SocketEventWorker::wifiConnect, this, &MainWindow::onWifiConnectRequest); // Async
    connect(m_worker,
            &SocketEventWorker::wifiDisconnectCurrentSsid,
            this,
            &MainWindow::onWifiDisconnectRequest); // Async

    // Utility
    connect(m_worker, &SocketEventWorker::rpiRestart, this, &MainWindow::onRpiRestart);
    connect(m_worker, &SocketEventWorker::rpiShutdown, this, &MainWindow::onRpiShutdown);
    connect(m_worker, &SocketEventWorker::tzSetReq, this, &MainWindow::onTzSetReq);
    connect(m_worker, &SocketEventWorker::tzGetReq, this, &MainWindow::onTzGetReq);


#endif

    m_workerThread->start();

    QString serverIpDns = ConfigManager::getServerIpDNS();
    QString serverIp = ConfigManager::getServerIp(); //"203.194.114.21"; ////"https://elderly-care-socket-io-server.online";
    int serverPort = ConfigManager::getServerPort(); // 4000;//

    qDebug() << "Server IP DNS:" << serverIpDns;
    qDebug() << "Server IP:" << serverIp;
    qDebug() << "Server Port:" << serverPort;

    // client->connectToServer("192.168.1.27", 3000);
    // client->connectToServer(serverIp);//, serverPort);
    //if(serverIpDns == ""){
       client->connectToServer(serverIpDns, serverIp, serverPort);
    //}else{
    //    client->connectToServer(serverIpDns, serverIp, serverPort);
    //}


#ifdef Q_OS_LINUX
    connect(client, &SocketIOClient::connected, this, &MainWindow::onCurrentSSidRequest);
#endif
}


// -----------------------------------------------------------------------------
QString MainWindow::runCommand(const QString &cmd)
{
    QProcess process;
    process.start("bash", QStringList() << "-c" << cmd);
    process.waitForFinished();
    //  connect(proc, &QProcess::finished, proc, &QObject::deleteLater);

    QString output = process.readAllStandardOutput();
    QString error = process.readAllStandardError();

    if (!error.isEmpty()) {
        qDebug() << "Error:" << error;
    }

    return output.trimmed();
}


// -----------------------------------------------------------------------------
void MainWindow::onSocketEventReceived(const QString &eventName, const QJsonValue &data)
{
    qDebug() << "UI received event:" << eventName << "data:" << data;
    // m_eventQueue.enqueue(qMakePair(eventName, data));

    qDebug() << "UI received event:" << eventName << "data:" << data;
    m_worker->enqueue(eventName, data);
}

// -----------------------------------------------------------------------------
void MainWindow::onDeviceReadyConnected(int vol, int bright) {}


#ifdef Q_OS_LINUX
// =============================================================================
// Wi-Fi and Raspberry Pi controls
// =============================================================================
void MainWindow::onWifiOnRequest()
{
    m_utility->nmcliWifiOn();
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiOffRequest()
{
    m_utility->nmcliWifiOff();
}

// -----------------------------------------------------------------------------
void MainWindow::onwifiScanSsidReqReceived()
{
    if (!client || !client->isConnected())
        return;

    QString isoMs = QDateTime::currentDateTimeUtc().toString(Qt::ISODateWithMs);

    QJsonObject obj;
    obj["timestamp"] = isoMs;

    client->enqueueEvent("WIFI_SCAN_STARTED", obj);

    qDebug() << "masuk cuk";

    m_utility->nmcliGetWifiListComplete();
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiGetSsidRequest()
{
    //if (client->isConnected()) {
        // m_utility->nmcliGetSSID();
        qDebug() << "Get current wifi ssid status";
        m_utility->nmcliGetCurrentWifiInfo();
        // qDebug() << "wifiCurrent ";
        // client->enqueueEvent("SSID_GET",wifiCurrent);
    //} else {
    //    qDebug() << "Socket DC";
    //}
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiSsidListRequest()
{
    //if (client->isConnected()) {
        // QStringList wifiList = m_utility->nmcliGetWifiList();
        m_utility->nmcliGetWifiListSSid();

        // qDebug() << "Wifi List " << wifiList;
        // QJsonObject obj;
        // obj["ssids"] = QJsonArray::fromStringList(wifiList);
        // client->enqueueEvent("SSID_LIST",obj);
    //} else {
    //    qDebug() << "Socket DC";
    //}
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiSsidListRequestComplete()
{
    //if (client->isConnected()) {
        // QStringList wifiList = m_utility->nmcliGetWifiList();
        m_utility->nmcliGetWifiListComplete();

        // qDebug() << "Wifi List " << wifiList;
        // QJsonObject obj;
        // obj["ssids"] = QJsonArray::fromStringList(wifiList);
        // client->enqueueEvent("SSID_LIST",obj);
   // } else {
        qDebug() << "Socket DC";
   // }
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiSSidListReady(QStringList ssidList)
{
    //if (client->isConnected()) {
        // QStringList wifiList = m_utility->nmcliGetWifiList();

        qDebug() << "Wifi List " << ssidList;
        QJsonObject obj;
        obj["ssids"] = QJsonArray::fromStringList(ssidList);
        client->enqueueEvent("SSID_LIST", obj);
    //} else {
    //    qDebug() << "Socket DC";
    //}
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiSSidListReadyComplete(QList<WifiAP> wifiList)
{
    if (!client || !client->isConnected())
        return;

    // QJsonArray array;
    int ssidCountFound = 0;

    for (const WifiAP &ap : wifiList) {
        QJsonObject obj;
        obj["ssid"] = ap.ssid;
        obj["signal"] = ap.signalDbm;
        obj["secured"] = true; // ap.security;
        obj["channel"] = ap.channel;
        obj["frequency"] = ap.band;

        client->enqueueEvent("WIFI_NETWORK_FOUND", obj);

        ssidCountFound++;
        // array.append(obj);
    }

    // QString isoMs = QDateTime::currentDateTimeUtc().toString(Qt::ISODateWithMs);

    qint64 isoMs = QDateTime::currentMSecsSinceEpoch();

    QJsonObject obj;
    obj["total"] = ssidCountFound;
    obj["timestamp"] = isoMs;

    client->enqueueEvent("WIFI_SCAN_COMPLETED", obj);
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiSSidListReadyCompleteRequest(QList<WifiAP> wifiList)
{
    if (!client || !client->isConnected())
        return;

    m_utility->nmcliGetWifiListComplete();
}

// -----------------------------------------------------------------------------
void MainWindow::onCurrentSSidRequest()
{
    qDebug() << "reconnect, get current ssid.... ";
    m_worker->wifiGetSsid();
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiConnectRequest(const QString &ssid, const QString &pwd)
{
    if (client->isConnected()) {
        QJsonObject obj;
        obj["ssid"] = ssid;
        // obj["password"] = pwd;
        obj["status"] = "connecting";
        client->enqueueEvent("WIFI_CONNECTING", obj);
        qDebug() << "NMCLI connect wifi ssid " << ssid << " pwd " << pwd;
        m_utility->nmcliConnectToWiFi(ssid, pwd);
    } else {
        qDebug() << "Socket DC";
        QJsonObject obj;
        obj["message"] = "socketio_closed";
        client->enqueueEvent("WIFI_CONNECTION_FAILED", obj);
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiForgetRequest(const QString &ssid)
{
    if (client->isConnected()) {
        m_utility->nmcliForgetConnection(ssid);
    } else {
        qDebug() << "Socket DC";
        QJsonObject obj;
        obj["ssid"] = ssid;
        client->enqueueEvent("SIO DC", obj);
    }
}

/*
// -----------------------------------------------------------------------------
void MainWindow::onSsidReady(QString ssid){
    qDebug() << "SSID aktif:" << ssid;

    // kirim ke socket di sini
    if (client->isConnected()) {
        client->enqueueEvent("wifi_status",ssid);
    } else {
        qDebug() << "Socket DC";
    }
}*/

// -----------------------------------------------------------------------------
void MainWindow::onCurrentWifiInfoReady(QJsonObject obj)
{
    if (!client || !client->isConnected())
        return;

    client->enqueueEvent("WIFI_STATUS", obj);
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiConnected(bool success, const QString &ssid, const QString &ip, const QString gateway)
{
    if (!success) {
        QJsonObject obj;
        obj["error"] = ssid;
        client->enqueueEvent("WIFI_CONNECTION_FAILED", obj);
        return;
    }

    // QString msg = QString("%1 (%2)").arg(ssid, ip);

    if (client->isConnected()) {
        QJsonObject obj;
        obj["ssid"] = ssid;
        obj["ip"] = ip;
        obj["gateway"] = gateway;
        client->enqueueEvent("WIFI_CONNECTED", obj);
    } else {
        qDebug() << "Socket DC";
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiDisconnectRequest()
{
    if (client->isConnected()) {
        qDebug() << "DC current SSid Request";
        m_utility->nmcliDisconnectCurrentWifi();
    } else {
        qDebug() << "Socket DC";
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onwifiDisconnectResult(bool success, QString ssid, QString message)
{
    if (success) {
        qDebug() << "WiFi disconnected:" << ssid;
        if (client->isConnected()) {
            QJsonObject obj;
            obj["ssid"] = ssid;
            obj["disconnectedBy"] = "user";
            client->enqueueEvent("WIFI_DISCONNECTED", obj);
        }
    } else {
        qDebug() << "Disconnect failed:" << message;
        if (client->isConnected()) {
            QJsonObject obj;
            client->enqueueEvent("WIFI_DISCONNECTED", obj);
        }
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiEnabled(bool on)
{
    if (on) {
        qDebug() << "Wifi Enable OK";
        QJsonObject obj;
        client->enqueueEvent("WIFI_ENABLED_SUCCESS", obj);
    } else {
        qDebug() << "Wifi Enable Fail";
        QJsonObject obj;
        client->enqueueEvent("WIFI_ENABLED_FAIL", obj);
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiDeleted(bool success, QString ssid, QString message)
{
    if (success) {
        qDebug() << "SSID deleted " << ssid;
        QJsonObject obj;
        obj["ssid"] = ssid;
        obj["message"] = "ok";
        client->enqueueEvent("SSID_DELETED_OK", obj);
    } else {
        qDebug() << "Wifi Enable Fail";
        QJsonObject obj;
        obj["ssid"] = ssid;
        obj["message"] = "fail";
        client->enqueueEvent("SSID_DELETED_FAIL", obj);
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiProgress(int state, QString stateText)
{
    qDebug() << "WiFi State:" << state << stateText;

    if (client->isConnected()) {
        int percent = 0;
        QString progressText = m_utility->deviceStateToString(state);

        switch (state) {
            case 30:
                percent = 0;
                break;
            case 40:
                percent = 10;
                break;
            case 50:
                percent = 25;
                break;
            case 60:
                percent = 40;
                break;
            case 70:
                percent = 60;
                break;
            case 80:
                percent = 75;
                break;
            case 90:
                percent = 90;
                break;
            case 100:
                percent = 100;
                progressText = "connected";
                break;

            case 120: // Failed
                percent = 0;
                progressText = "failed";
                break;

            default:
                percent = 0;
                break;
        }

        // kirim ke frontend

        QJsonObject obj;
        obj["stage"] = progressText;
        obj["progress"] = percent;

        client->enqueueEvent("WIFI_CONNECTION_PROGRESS", obj);
        if (state == 100) {
            qDebug() << "new wifi ssid, recon app....";

            QString serverIpDns = ConfigManager::getServerIpDNS();
            QString serverIp = ConfigManager::getServerIp(); //"203.194.114.21"; ////"https://elderly-care-socket-io-server.online";
            int serverPort = ConfigManager::getServerPort(); // 4000;//

            qDebug() << "Server IP DNS:" << serverIpDns;
            qDebug() << "Server IP:" << serverIp;
            qDebug() << "Server Port:" << serverPort;

            //if(serverIpDns == ""){
               client->connectToServer(serverIpDns, serverIp, serverPort);
            //}else{
            //    client->connectToServer(serverIpDns, serverIp, serverPort);
            //}
        }
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onWifiConnectFinished(bool success, QString ssid, QString ip, QString gateway)
{
    QJsonObject obj;

    obj["success"] = success;
    obj["ssid"] = ssid;
    obj["ip"] = ip;
    obj["gateway"] = gateway;

    if (client->isConnected()) {
        client->enqueueEvent("WIFI_CONNECT_RESULT", obj);
    }

    if (success)
        qDebug() << "Connected to" << ssid << "IP:" << ip << "GW:" << gateway;
    else
        qDebug() << "WiFi Connect Failed";
}

// -----------------------------------------------------------------------------
void MainWindow::onMonitorWlan0Connected() {}

// -----------------------------------------------------------------------------
void MainWindow::onMonitorWlan0Disconnected()
{
    if (client->isConnected()) {
        QJsonObject obj;
        obj["error"] = "Wlan0 Disconnected";
        client->enqueueEvent("WIFI_CONNECTION_FAILED", obj);
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onMonitorWlan0WifiSignalLost()
{
    if (client->isConnected()) {
        QJsonObject obj;
        obj["error"] = "signal lost";
        client->enqueueEvent("WIFI_CONNECTION_FAILED", obj);
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onMonitorWlan0networkInterfaceDown()
{
    if (client->isConnected()) {
        QJsonObject obj;
        obj["error"] = "NetworkInterfaceDown";
        client->enqueueEvent("WIFI_CONNECTION_FAILED", obj);
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onMonitorWlan0ipAddressChanged(QString ip)
{
    if (client->isConnected()) {
        QJsonObject obj;
        obj["error"] = ip;
        client->enqueueEvent("WIFI_CONNECTION_FAILED", obj);
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onRpiRestart()
{
    if (client->isConnected()) {
        QString timestamp = QDateTime::currentDateTime().toString("dd/MM/yyyy HH:mm:ss");
        QJsonObject obj;
        obj["datetime"] = timestamp;
        client->enqueueEvent("DEVICE_RESTART", obj);
        m_utility->rpiRestart();
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onRpiShutdown()
{
    if (client->isConnected()) {
        QString timestamp = QDateTime::currentDateTime().toString("dd/MM/yyyy HH:mm:ss");
        QJsonObject obj;
        obj["datetime"] = timestamp;
        client->enqueueEvent("DEVICE_OFF", obj);
        m_utility->rpiShutdown();
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onTzSetReq(QString tz)
{
    if (m_utility->setTimezone(tz)) {
        // if(m_utility->setTimezone("Europe/Stockholm")){
        qDebug() << "Set TZ to SW OK";
        if (client->isConnected()) {
            QJsonObject obj;
            obj["timezone"] = tz;
            client->enqueueEvent("TIMEZONE", obj);
            m_utility->rpiShutdown();
        }
    } else {
        qDebug() << "Set TZ to SW Fail";
    }
}

// -----------------------------------------------------------------------------
void MainWindow::onTzGetReq()
{
    QString tz = m_utility->getTimeZone();
    // if(m_utility->setTimezone("Europe/Stockholm")){
    if (tz != "") {
        qDebug() << "Set TZ to SW OK";
        if (client->isConnected()) {
            QJsonObject obj;
            obj["timezone"] = tz;
            client->enqueueEvent("TIMEZONE", obj);
            m_utility->getTimeZone();
        }
    } else {
        qDebug() << "TZ N/A";
    }
}
#endif


#ifdef Q_OS_LINUX
// -----------------------------------------------------------------------------
void MainWindow::on_btnScanWifiList_clicked()
{
    qDebug() << "SSID List ";
    m_utility->nmcliGetWifiListSSid();
}

// -----------------------------------------------------------------------------
void MainWindow::on_btnGetSSID_clicked()
{
    qDebug() << "SSID get ";
    m_utility->nmcliGetSSID();
}

// -----------------------------------------------------------------------------
void MainWindow::on_btnWifiCon_clicked()
{
    m_utility->nmcliConnectToWiFi("Parametrik 5G-01", "tabassam");
    //    qDebug() << "Sukses";
    //}else{
    //    qDebug() << "Gagal ";
    //}
}

// -----------------------------------------------------------------------------
void MainWindow::on_btnWifiOff_clicked()
{
    m_utility->nmcliWifiOff();
}

// -----------------------------------------------------------------------------
void MainWindow::on_btnWifiOn_clicked()
{
    m_utility->nmcliWifiOn();
}

// -----------------------------------------------------------------------------
void MainWindow::on_btnForget_clicked()
{
    m_utility->nmcliForgetConnection("Parametrik 5G-01");
}

// -----------------------------------------------------------------------------
void MainWindow::on_btnRestart_clicked()
{
    m_utility->rpiRestart();
}

// -----------------------------------------------------------------------------
void MainWindow::on_btnShutdown_clicked()
{
    m_utility->rpiShutdown();
}

// -----------------------------------------------------------------------------
void MainWindow::on_btnSetTZ_clicked()
{
    if (m_utility->setTimezone("Asia/Jakarta")) {
        // if(m_utility->setTimezone("Europe/Stockholm")){
        qDebug() << "Set TZ to SW OK";
    } else {
        qDebug() << "Set TZ to SW Fail";
    }
}
#endif

// -----------------------------------------------------------------------------
void MainWindow::on_btnEmitEvenwAck_clicked()
{
    QJsonObject data;
    data["username"] = "wahyu";
    data["password"] = "123456";

    client->emitEventWithAck(
        "login",
        data,
        [](bool ok, QJsonValue response) {
            if (!ok) {
                qDebug() << "ACK timeout or error:" << response;
                return;
            }

            qDebug() << "ACK received:" << response;

            if (response.isObject()) {
                QJsonObject obj = response.toObject();
                qDebug() << "Server message:" << obj;
            }
        },
        5000 // timeout 5 detik
    );
}

// -----------------------------------------------------------------------------
void MainWindow::on_btnEmitListeningOn_clicked()
{
    if (client->isConnected()) {
        // QString timestamp = QDateTime::currentDateTime().toString("dd/MM/yyyy HH:mm:ss");
        // QJsonObject obj;
        // obj["datetime"] = timestamp;
        QString msg = "ON";
        QJsonObject obj;
        obj["msg"] = msg;
        client->enqueueEvent("LISTENING", obj);
    } else {
        qDebug() << " Socket DC";
    }
}






// -----------------------------------------------------------------------------
void MainWindow::stopAllThreads()
{
    QList<QThread *> threads = qApp->findChildren<QThread *>();

    for (QThread *thread : threads) {
        if (thread == QThread::currentThread())
            continue;

        qDebug() << "Stopping thread:" << thread;

        thread->requestInterruption();
        thread->quit();

        if (!thread->wait(3000)) {
            qWarning() << "Thread not stopped:" << thread;
        }
    }
}

// -----------------------------------------------------------------------------
void MainWindow::stopAllProcesses()
{
    QList<QProcess *> processes = qApp->findChildren<QProcess *>();

    for (QProcess *p : processes) {
        p->terminate();

        if (!p->waitForFinished(3000))
            p->kill();
    }
}

// -----------------------------------------------------------------------------
void MainWindow::restartApp()
{
    stopAllProcesses();
    stopAllThreads();

    QString app = QCoreApplication::applicationFilePath();

    QProcess::startDetached(app);

    qApp->quit();
}

// -----------------------------------------------------------------------------
void MainWindow::initUtility()
{
#ifdef Q_OS_LINUX

    m_utility = new utilities();

    connect(m_utility, &utilities::wifiConnectResult, this, &MainWindow::onWifiConnected);
    connect(m_utility, &utilities::wifiRadioChanged, this, &MainWindow::onWifiEnabled);
    connect(m_utility, &utilities::wifiForgetResult, this, &MainWindow::onWifiDeleted);
    connect(m_utility, &utilities::wifiListReadyComplete, this, &MainWindow::onWifiSSidListReadyComplete);
    connect(m_utility, &utilities::wifiCurrentInfoReady, this, &MainWindow::onCurrentWifiInfoReady);
    connect(m_utility, &utilities::wifiDisconnectResult, this, &MainWindow::onwifiDisconnectResult);

    connect(m_utility, &utilities::wifiConnectProgress, this, &MainWindow::onWifiProgress);
    connect(m_utility, &utilities::wifiConnectResult, this, &MainWindow::onWifiConnectFinished);

    qDebug() << "Start monitoring";
    systemdymon = new systemdmonitorqt("ssh.service", this);
    connect(systemdymon, &systemdmonitorqt::serviceStarted, []() {
        qDebug() << "SSH STARTED";
    });

    connect(systemdymon, &systemdmonitorqt::serviceStopped, []() {
        qDebug() << "SSH STOPPED";
    });

    connect(systemdymon, &systemdmonitorqt::serviceFailed, []() {
        qDebug() << "SSH FAILED";
    });

    qDebug() << "End Monitoring setup ";
    //m_gpio->setColor(COLOR_WHITE);
#endif
}











