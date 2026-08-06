#include "appcontroller.h"
#include "configmanager.h"

#include <QDateTime>
#include <QDebug>
#include <QJsonArray>
#include <QThread>

AppController::AppController(QObject *parent)
    : QObject(parent)
{
    qDebug() << "Begin Setup (console/headless)";
    initSocketIO();
    initUtility();
}

AppController::~AppController()
{
    if (m_worker) {
        m_worker->stop();
    }

    if (m_workerThread && m_workerThread->isRunning()) {
        m_workerThread->quit();
        if (!m_workerThread->wait(3000)) {
            qWarning() << "Socket event worker thread did not stop within timeout";
        }
    }

    m_worker = nullptr;
}

void AppController::initSocketIO()
{
    client = new SocketIOClient(this);

    connect(client, &SocketIOClient::eventReceived, this, &AppController::onSocketEventReceived);

    // connect(client, &SocketIOClient::deviceready,
    //         this,   &SocketIOClient:sendDeviceReady);

    // Worker setup
    m_workerThread = new QThread(this);
    m_worker = new SocketEventWorker();
    connect(m_workerThread, &QThread::finished, m_worker, &QObject::deleteLater);
    m_worker->moveToThread(m_workerThread);

    connect(m_workerThread, &QThread::started, m_worker, &SocketEventWorker::process);





    // Wifi
#ifdef Q_OS_LINUX
    connect(m_worker, &SocketEventWorker::wifiOn, this, &AppController::onWifiOnRequest);   // Async
    connect(m_worker, &SocketEventWorker::wifiOff, this, &AppController::onWifiOffRequest); // Async
    connect(m_worker,
            &SocketEventWorker::wifiScanSsidReqReceived,
            this,
            &AppController::onwifiScanSsidReqReceived); // Async

    // connect(m_worker, &SocketEventWorker::wifiGetSsid,
    //         this, &AppController::onWifiGetSsidRequest);  //Async
    connect(m_worker, &SocketEventWorker::wifiGetSsid, this, &AppController::onWifiGetSsidRequest); // Async
    connect(m_worker,
            &SocketEventWorker::wifiSsidListComplete,
            this,
            &AppController::onWifiSsidListRequestComplete); // Async
    connect(m_worker, &SocketEventWorker::wifiForget, this, &AppController::onWifiForgetRequest);
    connect(m_worker, &SocketEventWorker::wifiConnect, this, &AppController::onWifiConnectRequest); // Async
    connect(m_worker,
            &SocketEventWorker::wifiDisconnectCurrentSsid,
            this,
            &AppController::onWifiDisconnectRequest); // Async

    // Utility
    connect(m_worker, &SocketEventWorker::rpiRestart, this, &AppController::onRpiRestart);
    connect(m_worker, &SocketEventWorker::rpiShutdown, this, &AppController::onRpiShutdown);
    connect(m_worker, &SocketEventWorker::tzSetReq, this, &AppController::onTzSetReq);
    connect(m_worker, &SocketEventWorker::tzGetReq, this, &AppController::onTzGetReq);


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
    connect(client, &SocketIOClient::connected, this, &AppController::onCurrentSSidRequest);
#endif
}
void AppController::onSocketEventReceived(const QString &eventName, const QJsonValue &data)
{
    qDebug() << "Console received event:" << eventName << "data:" << data;
    m_worker->enqueue(eventName, data);
}

// -----------------------------------------------------------------------------
#ifdef Q_OS_LINUX
// =============================================================================
// Wi-Fi and Raspberry Pi controls
// =============================================================================
void AppController::onWifiOnRequest()
{
    m_utility->nmcliWifiOn();
}

// -----------------------------------------------------------------------------
void AppController::onWifiOffRequest()
{
    m_utility->nmcliWifiOff();
}

// -----------------------------------------------------------------------------
void AppController::onwifiScanSsidReqReceived()
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
void AppController::onWifiGetSsidRequest()
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
void AppController::onWifiSsidListRequest()
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
void AppController::onWifiSsidListRequestComplete()
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
void AppController::onWifiSSidListReady(QStringList ssidList)
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
void AppController::onWifiSSidListReadyComplete(QList<WifiAP> wifiList)
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
void AppController::onWifiSSidListReadyCompleteRequest(QList<WifiAP> wifiList)
{
    if (!client || !client->isConnected())
        return;

    m_utility->nmcliGetWifiListComplete();
}

// -----------------------------------------------------------------------------
void AppController::onCurrentSSidRequest()
{
    qDebug() << "reconnect, get current ssid.... ";
    m_worker->wifiGetSsid();
}

// -----------------------------------------------------------------------------
void AppController::onWifiConnectRequest(const QString &ssid, const QString &pwd)
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
void AppController::onWifiForgetRequest(const QString &ssid)
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
void AppController::onSsidReady(QString ssid){
    qDebug() << "SSID aktif:" << ssid;

    // kirim ke socket di sini
    if (client->isConnected()) {
        client->enqueueEvent("wifi_status",ssid);
    } else {
        qDebug() << "Socket DC";
    }
}*/

// -----------------------------------------------------------------------------
void AppController::onCurrentWifiInfoReady(QJsonObject obj)
{
    if (!client || !client->isConnected())
        return;

    client->enqueueEvent("WIFI_STATUS", obj);
}

// -----------------------------------------------------------------------------
void AppController::onWifiConnected(bool success, const QString &ssid, const QString &ip, const QString gateway)
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
void AppController::onWifiDisconnectRequest()
{
    if (client->isConnected()) {
        qDebug() << "DC current SSid Request";
        m_utility->nmcliDisconnectCurrentWifi();
    } else {
        qDebug() << "Socket DC";
    }
}

// -----------------------------------------------------------------------------
void AppController::onwifiDisconnectResult(bool success, QString ssid, QString message)
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
void AppController::onWifiEnabled(bool on)
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
void AppController::onWifiDeleted(bool success, QString ssid, QString message)
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
void AppController::onWifiProgress(int state, QString stateText)
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
void AppController::onWifiConnectFinished(bool success, QString ssid, QString ip, QString gateway)
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
void AppController::onMonitorWlan0Connected() {}

// -----------------------------------------------------------------------------
void AppController::onMonitorWlan0Disconnected()
{
    if (client->isConnected()) {
        QJsonObject obj;
        obj["error"] = "Wlan0 Disconnected";
        client->enqueueEvent("WIFI_CONNECTION_FAILED", obj);
    }
}

// -----------------------------------------------------------------------------
void AppController::onMonitorWlan0WifiSignalLost()
{
    if (client->isConnected()) {
        QJsonObject obj;
        obj["error"] = "signal lost";
        client->enqueueEvent("WIFI_CONNECTION_FAILED", obj);
    }
}

// -----------------------------------------------------------------------------
void AppController::onMonitorWlan0networkInterfaceDown()
{
    if (client->isConnected()) {
        QJsonObject obj;
        obj["error"] = "NetworkInterfaceDown";
        client->enqueueEvent("WIFI_CONNECTION_FAILED", obj);
    }
}

// -----------------------------------------------------------------------------
void AppController::onMonitorWlan0ipAddressChanged(QString ip)
{
    if (client->isConnected()) {
        QJsonObject obj;
        obj["error"] = ip;
        client->enqueueEvent("WIFI_CONNECTION_FAILED", obj);
    }
}

// -----------------------------------------------------------------------------
void AppController::onRpiRestart()
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
void AppController::onRpiShutdown()
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
void AppController::onTzSetReq(QString tz)
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
void AppController::onTzGetReq()
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
void AppController::initUtility()
{
#ifdef Q_OS_LINUX

    m_utility = new utilities(this);

    connect(m_utility, &utilities::wifiConnectResult, this, &AppController::onWifiConnected);
    connect(m_utility, &utilities::wifiRadioChanged, this, &AppController::onWifiEnabled);
    connect(m_utility, &utilities::wifiForgetResult, this, &AppController::onWifiDeleted);
    connect(m_utility, &utilities::wifiListReadyComplete, this, &AppController::onWifiSSidListReadyComplete);
    connect(m_utility, &utilities::wifiCurrentInfoReady, this, &AppController::onCurrentWifiInfoReady);
    connect(m_utility, &utilities::wifiDisconnectResult, this, &AppController::onwifiDisconnectResult);

    connect(m_utility, &utilities::wifiConnectProgress, this, &AppController::onWifiProgress);
    connect(m_utility, &utilities::wifiConnectResult, this, &AppController::onWifiConnectFinished);

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
