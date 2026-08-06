#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <cstdint>
#include <functional>

// Qt Core
#include <QBuffer>
#include <QByteArray>
#include <QDateTime>
#include <QDebug>
#include <QDir>
#include <QElapsedTimer>
#include <QFile>
#include <QIODevice>
#include <QJsonObject>
#include <QJsonValue>
#include <QList>
#include <QNetworkInformation>
#include <QProcess>
#include <QQueue>
#include <QRandomGenerator>
#include <QRegularExpression>
#include <QString>
#include <QStringList>
#include <QTextStream>
#include <QThread>
#include <QTimer>
#include <QVector>
#include <QtEndian>
#include <QtMath>
#include <QRegularExpression>

// Qt GUI / Widgets
#include <QFileDialog>
#include <QListWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>
#include <QScreen> // Qt6 replacement for QDesktopWidget
#include <QVBoxLayout>
#include <QWidget>

// Qt Network / Multimedia / Serial Port
#include <QWebSocket>
#include <QtMultimedia/qaudio.h>

// Project headers
#include "networkmonitor.h"
#include "socketeventworker.h"
#include "socketioclient.h"
#include "systemdmonitorqt.h"
#include "utilities.h"

#ifdef Q_OS_LINUX
extern "C" {
#include <gpiod.h>
}
#endif



#pragma pack(push, 1)
struct WavHeader
{
    char riff[4] = {'R', 'I', 'F', 'F'};
    uint32_t fileSize;

    char wave[4] = {'W', 'A', 'V', 'E'};

    char fmt[4] = {'f', 'm', 't', ' '};
    uint32_t fmtSize = 16;
    uint16_t audioFormat = 1; // PCM
    uint16_t numChannels;
    uint32_t sampleRate;
    uint32_t byteRate;
    uint16_t blockAlign;
    uint16_t bitsPerSample;

    char data[4] = {'d', 'a', 't', 'a'};
    uint32_t dataSize;
};
#pragma pack(pop)

enum SOCKET_STATE
{
    SOCKET_IDDLE,
    SOCKET_CONNECTING,
    SOCKET_WAITING_CONNECTED,
    SOCKET_CONNECTED,
    SOCKET_SENDING,
    SOCKET_WAITING_SENT,
    SOCKET_SENT,
    SOCKET_CLOSING
};

enum SOCKET_REQUEST
{
    SOCKET_NULL,
    SOCKET_REQ__RADAR_ERROR,
    SOCKET_REQ_FALL
};



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


signals:
    // Signals are delivered to worker threads using queued connections.
    //void requestSound(int sentenceIndex, QString langIndex);

private slots:

    // ---------------------------------------------------------------------
    // Socket.IO and device communication
    // ---------------------------------------------------------------------
    void onSocketEventReceived(const QString &eventName, const QJsonValue &data);
    void onDeviceReadyConnected(int vol, int bright);
    void on_btnEmitEvenwAck_clicked();
    void on_btnEmitListeningOn_clicked();

#ifdef Q_OS_LINUX
    // ---------------------------------------------------------------------
    // Wi-Fi and Raspberry Pi system controls
    // ---------------------------------------------------------------------
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
    void onWifiConnectFinished(bool success,
                               QString ssid,
                               QString ip,
                               QString gateway);

    void on_btnScanWifiList_clicked();
    void on_btnGetSSID_clicked();
    void on_btnWifiCon_clicked();
    void on_btnWifiOff_clicked();
    void on_btnWifiOn_clicked();
    void on_btnForget_clicked();
    void on_btnRestart_clicked();
    void on_btnShutdown_clicked();
    void on_btnSetTZ_clicked();

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
    // ---------------------------------------------------------------------
    // UI and general state
    // ---------------------------------------------------------------------
    Ui::MainWindow *ui;
    QString wifiState = "";

    // ---------------------------------------------------------------------
    // Socket.IO and payload workers
    // ---------------------------------------------------------------------
    SocketIOClient *client;
    SocketEventWorker *m_worker;
    QThread *m_workerThread;

#ifdef Q_OS_LINUX
    // ---------------------------------------------------------------------
    // Linux-specific services and GPIO
    // ---------------------------------------------------------------------
    utilities *m_utility;
    systemdmonitorqt *systemdymon;

#endif

    // ---------------------------------------------------------------------
    // Initialization
    // ---------------------------------------------------------------------
    void initSocketIO();
    void initUtility();

    // ---------------------------------------------------------------------
    // System, network, and application helpers
    // ---------------------------------------------------------------------
    QString runCommand(const QString &cmd);
    void stopAllThreads();
    void stopAllProcesses();
    void restartApp();
};

#endif // MAINWINDOW_H
