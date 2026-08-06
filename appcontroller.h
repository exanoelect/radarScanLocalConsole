#ifndef APPCONTROLLER_H
#define APPCONTROLLER_H

#include <QObject>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QString>
#include <QStringList>

#include "socketeventworker.h"
#include "socketioclient.h"

#ifdef Q_OS_LINUX
#include "systemdmonitorqt.h"
#include "utilities.h"
#endif

class QThread;

class AppController : public QObject
{
    Q_OBJECT

public:
    explicit AppController(QObject *parent = nullptr);
    ~AppController() override;

private slots:
    void onSocketEventReceived(const QString &eventName, const QJsonValue &data);

#ifdef Q_OS_LINUX
    void onWifiOnRequest();
    void onWifiOffRequest();
    void onwifiScanSsidReqReceived();
    void onWifiGetSsidRequest();
    void onWifiSsidListRequest();
    void onWifiSsidListRequestComplete();
    void onWifiSSidListReady(QStringList ssidList);
    void onWifiSSidListReadyComplete(QList<WifiAP> wifiList);
    void onWifiSSidListReadyCompleteRequest(QList<WifiAP> wifiList);
    void onCurrentSSidRequest();
    void onWifiConnectRequest(const QString &ssid, const QString &pwd);
    void onWifiForgetRequest(const QString &ssid);
    void onCurrentWifiInfoReady(QJsonObject obj);
    void onWifiConnected(bool success,
                         const QString &ssid,
                         const QString &ip,
                         const QString gateway);
    void onWifiDisconnectRequest();
    void onwifiDisconnectResult(bool success, QString ssid, QString message);
    void onWifiEnabled(bool on);
    void onWifiDeleted(bool success, QString ssid, QString message);
    void onWifiProgress(int state, QString stateText);
    void onWifiConnectFinished(bool success, QString ssid, QString ip, QString gateway);

    void onMonitorWlan0Connected();
    void onMonitorWlan0Disconnected();
    void onMonitorWlan0WifiSignalLost();
    void onMonitorWlan0networkInterfaceDown();
    void onMonitorWlan0ipAddressChanged(QString ip);

    void onRpiRestart();
    void onRpiShutdown();
    void onTzSetReq(QString tz);
    void onTzGetReq();
#endif

private:
    void initSocketIO();
    void initUtility();

    SocketIOClient *client = nullptr;
    SocketEventWorker *m_worker = nullptr;
    QThread *m_workerThread = nullptr;

#ifdef Q_OS_LINUX
    utilities *m_utility = nullptr;
    systemdmonitorqt *systemdymon = nullptr;
#endif
};

#endif // APPCONTROLLER_H
