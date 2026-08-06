/****************************************************************************
** Meta object code from reading C++ file 'appcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../appcontroller.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_AppController_t {
    uint offsetsAndSizes[96];
    char stringdata0[14];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[5];
    char stringdata5[16];
    char stringdata6[17];
    char stringdata7[26];
    char stringdata8[21];
    char stringdata9[22];
    char stringdata10[30];
    char stringdata11[20];
    char stringdata12[9];
    char stringdata13[28];
    char stringdata14[14];
    char stringdata15[9];
    char stringdata16[35];
    char stringdata17[21];
    char stringdata18[21];
    char stringdata19[5];
    char stringdata20[4];
    char stringdata21[20];
    char stringdata22[23];
    char stringdata23[4];
    char stringdata24[16];
    char stringdata25[8];
    char stringdata26[3];
    char stringdata27[8];
    char stringdata28[24];
    char stringdata29[23];
    char stringdata30[8];
    char stringdata31[14];
    char stringdata32[3];
    char stringdata33[14];
    char stringdata34[15];
    char stringdata35[6];
    char stringdata36[10];
    char stringdata37[22];
    char stringdata38[24];
    char stringdata39[27];
    char stringdata40[29];
    char stringdata41[35];
    char stringdata42[31];
    char stringdata43[13];
    char stringdata44[14];
    char stringdata45[11];
    char stringdata46[3];
    char stringdata47[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AppController_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AppController_t qt_meta_stringdata_AppController = {
    {
        QT_MOC_LITERAL(0, 13),  // "AppController"
        QT_MOC_LITERAL(14, 21),  // "onSocketEventReceived"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 9),  // "eventName"
        QT_MOC_LITERAL(47, 4),  // "data"
        QT_MOC_LITERAL(52, 15),  // "onWifiOnRequest"
        QT_MOC_LITERAL(68, 16),  // "onWifiOffRequest"
        QT_MOC_LITERAL(85, 25),  // "onwifiScanSsidReqReceived"
        QT_MOC_LITERAL(111, 20),  // "onWifiGetSsidRequest"
        QT_MOC_LITERAL(132, 21),  // "onWifiSsidListRequest"
        QT_MOC_LITERAL(154, 29),  // "onWifiSsidListRequestComplete"
        QT_MOC_LITERAL(184, 19),  // "onWifiSSidListReady"
        QT_MOC_LITERAL(204, 8),  // "ssidList"
        QT_MOC_LITERAL(213, 27),  // "onWifiSSidListReadyComplete"
        QT_MOC_LITERAL(241, 13),  // "QList<WifiAP>"
        QT_MOC_LITERAL(255, 8),  // "wifiList"
        QT_MOC_LITERAL(264, 34),  // "onWifiSSidListReadyCompleteRe..."
        QT_MOC_LITERAL(299, 20),  // "onCurrentSSidRequest"
        QT_MOC_LITERAL(320, 20),  // "onWifiConnectRequest"
        QT_MOC_LITERAL(341, 4),  // "ssid"
        QT_MOC_LITERAL(346, 3),  // "pwd"
        QT_MOC_LITERAL(350, 19),  // "onWifiForgetRequest"
        QT_MOC_LITERAL(370, 22),  // "onCurrentWifiInfoReady"
        QT_MOC_LITERAL(393, 3),  // "obj"
        QT_MOC_LITERAL(397, 15),  // "onWifiConnected"
        QT_MOC_LITERAL(413, 7),  // "success"
        QT_MOC_LITERAL(421, 2),  // "ip"
        QT_MOC_LITERAL(424, 7),  // "gateway"
        QT_MOC_LITERAL(432, 23),  // "onWifiDisconnectRequest"
        QT_MOC_LITERAL(456, 22),  // "onwifiDisconnectResult"
        QT_MOC_LITERAL(479, 7),  // "message"
        QT_MOC_LITERAL(487, 13),  // "onWifiEnabled"
        QT_MOC_LITERAL(501, 2),  // "on"
        QT_MOC_LITERAL(504, 13),  // "onWifiDeleted"
        QT_MOC_LITERAL(518, 14),  // "onWifiProgress"
        QT_MOC_LITERAL(533, 5),  // "state"
        QT_MOC_LITERAL(539, 9),  // "stateText"
        QT_MOC_LITERAL(549, 21),  // "onWifiConnectFinished"
        QT_MOC_LITERAL(571, 23),  // "onMonitorWlan0Connected"
        QT_MOC_LITERAL(595, 26),  // "onMonitorWlan0Disconnected"
        QT_MOC_LITERAL(622, 28),  // "onMonitorWlan0WifiSignalLost"
        QT_MOC_LITERAL(651, 34),  // "onMonitorWlan0networkInterfac..."
        QT_MOC_LITERAL(686, 30),  // "onMonitorWlan0ipAddressChanged"
        QT_MOC_LITERAL(717, 12),  // "onRpiRestart"
        QT_MOC_LITERAL(730, 13),  // "onRpiShutdown"
        QT_MOC_LITERAL(744, 10),  // "onTzSetReq"
        QT_MOC_LITERAL(755, 2),  // "tz"
        QT_MOC_LITERAL(758, 10)   // "onTzGetReq"
    },
    "AppController",
    "onSocketEventReceived",
    "",
    "eventName",
    "data",
    "onWifiOnRequest",
    "onWifiOffRequest",
    "onwifiScanSsidReqReceived",
    "onWifiGetSsidRequest",
    "onWifiSsidListRequest",
    "onWifiSsidListRequestComplete",
    "onWifiSSidListReady",
    "ssidList",
    "onWifiSSidListReadyComplete",
    "QList<WifiAP>",
    "wifiList",
    "onWifiSSidListReadyCompleteRequest",
    "onCurrentSSidRequest",
    "onWifiConnectRequest",
    "ssid",
    "pwd",
    "onWifiForgetRequest",
    "onCurrentWifiInfoReady",
    "obj",
    "onWifiConnected",
    "success",
    "ip",
    "gateway",
    "onWifiDisconnectRequest",
    "onwifiDisconnectResult",
    "message",
    "onWifiEnabled",
    "on",
    "onWifiDeleted",
    "onWifiProgress",
    "state",
    "stateText",
    "onWifiConnectFinished",
    "onMonitorWlan0Connected",
    "onMonitorWlan0Disconnected",
    "onMonitorWlan0WifiSignalLost",
    "onMonitorWlan0networkInterfaceDown",
    "onMonitorWlan0ipAddressChanged",
    "onRpiRestart",
    "onRpiShutdown",
    "onTzSetReq",
    "tz",
    "onTzGetReq"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AppController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  194,    2, 0x08,    1 /* Private */,
       5,    0,  199,    2, 0x08,    4 /* Private */,
       6,    0,  200,    2, 0x08,    5 /* Private */,
       7,    0,  201,    2, 0x08,    6 /* Private */,
       8,    0,  202,    2, 0x08,    7 /* Private */,
       9,    0,  203,    2, 0x08,    8 /* Private */,
      10,    0,  204,    2, 0x08,    9 /* Private */,
      11,    1,  205,    2, 0x08,   10 /* Private */,
      13,    1,  208,    2, 0x08,   12 /* Private */,
      16,    1,  211,    2, 0x08,   14 /* Private */,
      17,    0,  214,    2, 0x08,   16 /* Private */,
      18,    2,  215,    2, 0x08,   17 /* Private */,
      21,    1,  220,    2, 0x08,   20 /* Private */,
      22,    1,  223,    2, 0x08,   22 /* Private */,
      24,    4,  226,    2, 0x08,   24 /* Private */,
      28,    0,  235,    2, 0x08,   29 /* Private */,
      29,    3,  236,    2, 0x08,   30 /* Private */,
      31,    1,  243,    2, 0x08,   34 /* Private */,
      33,    3,  246,    2, 0x08,   36 /* Private */,
      34,    2,  253,    2, 0x08,   40 /* Private */,
      37,    4,  258,    2, 0x08,   43 /* Private */,
      38,    0,  267,    2, 0x08,   48 /* Private */,
      39,    0,  268,    2, 0x08,   49 /* Private */,
      40,    0,  269,    2, 0x08,   50 /* Private */,
      41,    0,  270,    2, 0x08,   51 /* Private */,
      42,    1,  271,    2, 0x08,   52 /* Private */,
      43,    0,  274,    2, 0x08,   54 /* Private */,
      44,    0,  275,    2, 0x08,   55 /* Private */,
      45,    1,  276,    2, 0x08,   56 /* Private */,
      47,    0,  279,    2, 0x08,   58 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonValue,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   20,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QJsonObject,   23,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   19,   26,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,   25,   19,   30,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,   25,   19,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   35,   36,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,   25,   19,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AppController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AppController.offsetsAndSizes,
    qt_meta_data_AppController,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AppController_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AppController, std::true_type>,
        // method 'onSocketEventReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'onWifiOnRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWifiOffRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onwifiScanSsidReqReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWifiGetSsidRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWifiSsidListRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWifiSsidListRequestComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWifiSSidListReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'onWifiSSidListReadyComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<WifiAP>, std::false_type>,
        // method 'onWifiSSidListReadyCompleteRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<WifiAP>, std::false_type>,
        // method 'onCurrentSSidRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWifiConnectRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onWifiForgetRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onCurrentWifiInfoReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'onWifiConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'onWifiDisconnectRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onwifiDisconnectResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onWifiEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onWifiDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onWifiProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onWifiConnectFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onMonitorWlan0Connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMonitorWlan0Disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMonitorWlan0WifiSignalLost'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMonitorWlan0networkInterfaceDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMonitorWlan0ipAddressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onRpiRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRpiShutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTzSetReq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onTzGetReq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AppController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSocketEventReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 1: _t->onWifiOnRequest(); break;
        case 2: _t->onWifiOffRequest(); break;
        case 3: _t->onwifiScanSsidReqReceived(); break;
        case 4: _t->onWifiGetSsidRequest(); break;
        case 5: _t->onWifiSsidListRequest(); break;
        case 6: _t->onWifiSsidListRequestComplete(); break;
        case 7: _t->onWifiSSidListReady((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 8: _t->onWifiSSidListReadyComplete((*reinterpret_cast< std::add_pointer_t<QList<WifiAP>>>(_a[1]))); break;
        case 9: _t->onWifiSSidListReadyCompleteRequest((*reinterpret_cast< std::add_pointer_t<QList<WifiAP>>>(_a[1]))); break;
        case 10: _t->onCurrentSSidRequest(); break;
        case 11: _t->onWifiConnectRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->onWifiForgetRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->onCurrentWifiInfoReady((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 14: _t->onWifiConnected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 15: _t->onWifiDisconnectRequest(); break;
        case 16: _t->onwifiDisconnectResult((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 17: _t->onWifiEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->onWifiDeleted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 19: _t->onWifiProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 20: _t->onWifiConnectFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 21: _t->onMonitorWlan0Connected(); break;
        case 22: _t->onMonitorWlan0Disconnected(); break;
        case 23: _t->onMonitorWlan0WifiSignalLost(); break;
        case 24: _t->onMonitorWlan0networkInterfaceDown(); break;
        case 25: _t->onMonitorWlan0ipAddressChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->onRpiRestart(); break;
        case 27: _t->onRpiShutdown(); break;
        case 28: _t->onTzSetReq((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->onTzGetReq(); break;
        default: ;
        }
    }
}

const QMetaObject *AppController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 30;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
