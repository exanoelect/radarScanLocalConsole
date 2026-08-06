/****************************************************************************
** Meta object code from reading C++ file 'socketeventworker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../socketeventworker.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketeventworker.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SocketEventWorker_t {
    uint offsetsAndSizes[118];
    char stringdata0[18];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[6];
    char stringdata5[18];
    char stringdata6[18];
    char stringdata7[23];
    char stringdata8[23];
    char stringdata9[22];
    char stringdata10[22];
    char stringdata11[10];
    char stringdata12[11];
    char stringdata13[13];
    char stringdata14[11];
    char stringdata15[14];
    char stringdata16[12];
    char stringdata17[12];
    char stringdata18[18];
    char stringdata19[17];
    char stringdata20[12];
    char stringdata21[5];
    char stringdata22[8];
    char stringdata23[8];
    char stringdata24[11];
    char stringdata25[26];
    char stringdata26[34];
    char stringdata27[29];
    char stringdata28[23];
    char stringdata29[13];
    char stringdata30[18];
    char stringdata31[30];
    char stringdata32[28];
    char stringdata33[22];
    char stringdata34[21];
    char stringdata35[10];
    char stringdata36[12];
    char stringdata37[16];
    char stringdata38[18];
    char stringdata39[7];
    char stringdata40[8];
    char stringdata41[12];
    char stringdata42[24];
    char stringdata43[26];
    char stringdata44[13];
    char stringdata45[21];
    char stringdata46[12];
    char stringdata47[5];
    char stringdata48[4];
    char stringdata49[11];
    char stringdata50[11];
    char stringdata51[12];
    char stringdata52[9];
    char stringdata53[9];
    char stringdata54[3];
    char stringdata55[9];
    char stringdata56[17];
    char stringdata57[22];
    char stringdata58[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SocketEventWorker_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SocketEventWorker_t qt_meta_stringdata_SocketEventWorker = {
    {
        QT_MOC_LITERAL(0, 17),  // "SocketEventWorker"
        QT_MOC_LITERAL(18, 18),  // "volumeGetRequested"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 18),  // "volumeSetRequested"
        QT_MOC_LITERAL(57, 5),  // "value"
        QT_MOC_LITERAL(63, 17),  // "volumeIncreaseReq"
        QT_MOC_LITERAL(81, 17),  // "volumeDecreaseReq"
        QT_MOC_LITERAL(99, 22),  // "brightnessSetRequested"
        QT_MOC_LITERAL(122, 22),  // "brightnessGetRequested"
        QT_MOC_LITERAL(145, 21),  // "brightnessIncreaseReq"
        QT_MOC_LITERAL(167, 21),  // "brightnessDecreaseReq"
        QT_MOC_LITERAL(189, 9),  // "modeSleep"
        QT_MOC_LITERAL(199, 10),  // "modeWakeUp"
        QT_MOC_LITERAL(210, 12),  // "pingDeviceUp"
        QT_MOC_LITERAL(223, 10),  // "modeListen"
        QT_MOC_LITERAL(234, 13),  // "modeRecording"
        QT_MOC_LITERAL(248, 11),  // "modeWaiting"
        QT_MOC_LITERAL(260, 11),  // "modeTalking"
        QT_MOC_LITERAL(272, 17),  // "speechModuleReady"
        QT_MOC_LITERAL(290, 16),  // "modeUploadFailed"
        QT_MOC_LITERAL(307, 11),  // "langCurrent"
        QT_MOC_LITERAL(319, 4),  // "lang"
        QT_MOC_LITERAL(324, 7),  // "langGet"
        QT_MOC_LITERAL(332, 7),  // "langSet"
        QT_MOC_LITERAL(340, 10),  // "langAckSet"
        QT_MOC_LITERAL(351, 25),  // "incidentFallEventDetected"
        QT_MOC_LITERAL(377, 33),  // "incidentFallWakeUpByFallDetec..."
        QT_MOC_LITERAL(411, 28),  // "incidentAckFallEventDetected"
        QT_MOC_LITERAL(440, 22),  // "incidentFallNoResponse"
        QT_MOC_LITERAL(463, 12),  // "incidentHelp"
        QT_MOC_LITERAL(476, 17),  // "incidentFallIamOK"
        QT_MOC_LITERAL(494, 29),  // "incidentFallHelpEventDetected"
        QT_MOC_LITERAL(524, 27),  // "incidentFallOKEventDetected"
        QT_MOC_LITERAL(552, 21),  // "incidentFallCompleted"
        QT_MOC_LITERAL(574, 20),  // "incidentFallIamnotOK"
        QT_MOC_LITERAL(595, 9),  // "alarmRing"
        QT_MOC_LITERAL(605, 11),  // "alarmWakeUp"
        QT_MOC_LITERAL(617, 15),  // "alarmStopButton"
        QT_MOC_LITERAL(633, 17),  // "alarmSnoozeButton"
        QT_MOC_LITERAL(651, 6),  // "wifiOn"
        QT_MOC_LITERAL(658, 7),  // "wifiOff"
        QT_MOC_LITERAL(666, 11),  // "wifiGetSsid"
        QT_MOC_LITERAL(678, 23),  // "wifiScanSsidReqReceived"
        QT_MOC_LITERAL(702, 25),  // "wifiDisconnectCurrentSsid"
        QT_MOC_LITERAL(728, 12),  // "wifiSsidList"
        QT_MOC_LITERAL(741, 20),  // "wifiSsidListComplete"
        QT_MOC_LITERAL(762, 11),  // "wifiConnect"
        QT_MOC_LITERAL(774, 4),  // "ssid"
        QT_MOC_LITERAL(779, 3),  // "pwd"
        QT_MOC_LITERAL(783, 10),  // "wifiForget"
        QT_MOC_LITERAL(794, 10),  // "rpiRestart"
        QT_MOC_LITERAL(805, 11),  // "rpiShutdown"
        QT_MOC_LITERAL(817, 8),  // "rpiReset"
        QT_MOC_LITERAL(826, 8),  // "tzSetReq"
        QT_MOC_LITERAL(835, 2),  // "tz"
        QT_MOC_LITERAL(838, 8),  // "tzGetReq"
        QT_MOC_LITERAL(847, 16),  // "powerInfoRequest"
        QT_MOC_LITERAL(864, 21),  // "audioRadarInfoRequest"
        QT_MOC_LITERAL(886, 7)   // "process"
    },
    "SocketEventWorker",
    "volumeGetRequested",
    "",
    "volumeSetRequested",
    "value",
    "volumeIncreaseReq",
    "volumeDecreaseReq",
    "brightnessSetRequested",
    "brightnessGetRequested",
    "brightnessIncreaseReq",
    "brightnessDecreaseReq",
    "modeSleep",
    "modeWakeUp",
    "pingDeviceUp",
    "modeListen",
    "modeRecording",
    "modeWaiting",
    "modeTalking",
    "speechModuleReady",
    "modeUploadFailed",
    "langCurrent",
    "lang",
    "langGet",
    "langSet",
    "langAckSet",
    "incidentFallEventDetected",
    "incidentFallWakeUpByFallDetection",
    "incidentAckFallEventDetected",
    "incidentFallNoResponse",
    "incidentHelp",
    "incidentFallIamOK",
    "incidentFallHelpEventDetected",
    "incidentFallOKEventDetected",
    "incidentFallCompleted",
    "incidentFallIamnotOK",
    "alarmRing",
    "alarmWakeUp",
    "alarmStopButton",
    "alarmSnoozeButton",
    "wifiOn",
    "wifiOff",
    "wifiGetSsid",
    "wifiScanSsidReqReceived",
    "wifiDisconnectCurrentSsid",
    "wifiSsidList",
    "wifiSsidListComplete",
    "wifiConnect",
    "ssid",
    "pwd",
    "wifiForget",
    "rpiRestart",
    "rpiShutdown",
    "rpiReset",
    "tzSetReq",
    "tz",
    "tzGetReq",
    "powerInfoRequest",
    "audioRadarInfoRequest",
    "process"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SocketEventWorker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      51,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  326,    2, 0x06,    1 /* Public */,
       3,    1,  327,    2, 0x06,    2 /* Public */,
       5,    0,  330,    2, 0x06,    4 /* Public */,
       6,    0,  331,    2, 0x06,    5 /* Public */,
       7,    1,  332,    2, 0x06,    6 /* Public */,
       8,    0,  335,    2, 0x06,    8 /* Public */,
       9,    0,  336,    2, 0x06,    9 /* Public */,
      10,    0,  337,    2, 0x06,   10 /* Public */,
      11,    0,  338,    2, 0x06,   11 /* Public */,
      12,    0,  339,    2, 0x06,   12 /* Public */,
      13,    0,  340,    2, 0x06,   13 /* Public */,
      14,    0,  341,    2, 0x06,   14 /* Public */,
      15,    0,  342,    2, 0x06,   15 /* Public */,
      16,    0,  343,    2, 0x06,   16 /* Public */,
      17,    0,  344,    2, 0x06,   17 /* Public */,
      18,    0,  345,    2, 0x06,   18 /* Public */,
      19,    0,  346,    2, 0x06,   19 /* Public */,
      20,    1,  347,    2, 0x06,   20 /* Public */,
      22,    0,  350,    2, 0x06,   22 /* Public */,
      23,    1,  351,    2, 0x06,   23 /* Public */,
      24,    0,  354,    2, 0x06,   25 /* Public */,
      25,    0,  355,    2, 0x06,   26 /* Public */,
      26,    0,  356,    2, 0x06,   27 /* Public */,
      27,    0,  357,    2, 0x06,   28 /* Public */,
      28,    0,  358,    2, 0x06,   29 /* Public */,
      29,    0,  359,    2, 0x06,   30 /* Public */,
      30,    0,  360,    2, 0x06,   31 /* Public */,
      31,    0,  361,    2, 0x06,   32 /* Public */,
      32,    0,  362,    2, 0x06,   33 /* Public */,
      33,    0,  363,    2, 0x06,   34 /* Public */,
      34,    0,  364,    2, 0x06,   35 /* Public */,
      35,    0,  365,    2, 0x06,   36 /* Public */,
      36,    0,  366,    2, 0x06,   37 /* Public */,
      37,    0,  367,    2, 0x06,   38 /* Public */,
      38,    0,  368,    2, 0x06,   39 /* Public */,
      39,    0,  369,    2, 0x06,   40 /* Public */,
      40,    0,  370,    2, 0x06,   41 /* Public */,
      41,    0,  371,    2, 0x06,   42 /* Public */,
      42,    0,  372,    2, 0x06,   43 /* Public */,
      43,    0,  373,    2, 0x06,   44 /* Public */,
      44,    0,  374,    2, 0x06,   45 /* Public */,
      45,    0,  375,    2, 0x06,   46 /* Public */,
      46,    2,  376,    2, 0x06,   47 /* Public */,
      49,    1,  381,    2, 0x06,   50 /* Public */,
      50,    0,  384,    2, 0x06,   52 /* Public */,
      51,    0,  385,    2, 0x06,   53 /* Public */,
      52,    0,  386,    2, 0x06,   54 /* Public */,
      53,    1,  387,    2, 0x06,   55 /* Public */,
      55,    0,  390,    2, 0x06,   57 /* Public */,
      56,    0,  391,    2, 0x06,   58 /* Public */,
      57,    0,  392,    2, 0x06,   59 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      58,    0,  393,    2, 0x0a,   60 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   47,   48,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SocketEventWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SocketEventWorker.offsetsAndSizes,
    qt_meta_data_SocketEventWorker,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SocketEventWorker_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SocketEventWorker, std::true_type>,
        // method 'volumeGetRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'volumeSetRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'volumeIncreaseReq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'volumeDecreaseReq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'brightnessSetRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'brightnessGetRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'brightnessIncreaseReq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'brightnessDecreaseReq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modeSleep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modeWakeUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pingDeviceUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modeListen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modeRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modeWaiting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modeTalking'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'speechModuleReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modeUploadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'langCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'langGet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'langSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'langAckSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incidentFallEventDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incidentFallWakeUpByFallDetection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incidentAckFallEventDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incidentFallNoResponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incidentHelp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incidentFallIamOK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incidentFallHelpEventDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incidentFallOKEventDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incidentFallCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'incidentFallIamnotOK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'alarmRing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'alarmWakeUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'alarmStopButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'alarmSnoozeButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiOn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiOff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiGetSsid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiScanSsidReqReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiDisconnectCurrentSsid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiSsidList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiSsidListComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wifiConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'wifiForget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'rpiRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rpiShutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rpiReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tzSetReq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'tzGetReq'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'powerInfoRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'audioRadarInfoRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SocketEventWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketEventWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->volumeGetRequested(); break;
        case 1: _t->volumeSetRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->volumeIncreaseReq(); break;
        case 3: _t->volumeDecreaseReq(); break;
        case 4: _t->brightnessSetRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->brightnessGetRequested(); break;
        case 6: _t->brightnessIncreaseReq(); break;
        case 7: _t->brightnessDecreaseReq(); break;
        case 8: _t->modeSleep(); break;
        case 9: _t->modeWakeUp(); break;
        case 10: _t->pingDeviceUp(); break;
        case 11: _t->modeListen(); break;
        case 12: _t->modeRecording(); break;
        case 13: _t->modeWaiting(); break;
        case 14: _t->modeTalking(); break;
        case 15: _t->speechModuleReady(); break;
        case 16: _t->modeUploadFailed(); break;
        case 17: _t->langCurrent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->langGet(); break;
        case 19: _t->langSet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->langAckSet(); break;
        case 21: _t->incidentFallEventDetected(); break;
        case 22: _t->incidentFallWakeUpByFallDetection(); break;
        case 23: _t->incidentAckFallEventDetected(); break;
        case 24: _t->incidentFallNoResponse(); break;
        case 25: _t->incidentHelp(); break;
        case 26: _t->incidentFallIamOK(); break;
        case 27: _t->incidentFallHelpEventDetected(); break;
        case 28: _t->incidentFallOKEventDetected(); break;
        case 29: _t->incidentFallCompleted(); break;
        case 30: _t->incidentFallIamnotOK(); break;
        case 31: _t->alarmRing(); break;
        case 32: _t->alarmWakeUp(); break;
        case 33: _t->alarmStopButton(); break;
        case 34: _t->alarmSnoozeButton(); break;
        case 35: _t->wifiOn(); break;
        case 36: _t->wifiOff(); break;
        case 37: _t->wifiGetSsid(); break;
        case 38: _t->wifiScanSsidReqReceived(); break;
        case 39: _t->wifiDisconnectCurrentSsid(); break;
        case 40: _t->wifiSsidList(); break;
        case 41: _t->wifiSsidListComplete(); break;
        case 42: _t->wifiConnect((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 43: _t->wifiForget((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 44: _t->rpiRestart(); break;
        case 45: _t->rpiShutdown(); break;
        case 46: _t->rpiReset(); break;
        case 47: _t->tzSetReq((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 48: _t->tzGetReq(); break;
        case 49: _t->powerInfoRequest(); break;
        case 50: _t->audioRadarInfoRequest(); break;
        case 51: _t->process(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::volumeGetRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)(int );
            if (_t _q_method = &SocketEventWorker::volumeSetRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::volumeIncreaseReq; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::volumeDecreaseReq; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)(int );
            if (_t _q_method = &SocketEventWorker::brightnessSetRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::brightnessGetRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::brightnessIncreaseReq; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::brightnessDecreaseReq; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::modeSleep; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::modeWakeUp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::pingDeviceUp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::modeListen; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::modeRecording; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::modeWaiting; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::modeTalking; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::speechModuleReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::modeUploadFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)(QString );
            if (_t _q_method = &SocketEventWorker::langCurrent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::langGet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)(QString );
            if (_t _q_method = &SocketEventWorker::langSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::langAckSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::incidentFallEventDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::incidentFallWakeUpByFallDetection; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::incidentAckFallEventDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::incidentFallNoResponse; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::incidentHelp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::incidentFallIamOK; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::incidentFallHelpEventDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::incidentFallOKEventDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::incidentFallCompleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::incidentFallIamnotOK; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::alarmRing; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::alarmWakeUp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::alarmStopButton; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::alarmSnoozeButton; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::wifiOn; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::wifiOff; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::wifiGetSsid; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::wifiScanSsidReqReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::wifiDisconnectCurrentSsid; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::wifiSsidList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::wifiSsidListComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)(const QString & , const QString & );
            if (_t _q_method = &SocketEventWorker::wifiConnect; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)(const QString & );
            if (_t _q_method = &SocketEventWorker::wifiForget; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::rpiRestart; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::rpiShutdown; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::rpiReset; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)(QString );
            if (_t _q_method = &SocketEventWorker::tzSetReq; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::tzGetReq; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::powerInfoRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (SocketEventWorker::*)();
            if (_t _q_method = &SocketEventWorker::audioRadarInfoRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 50;
                return;
            }
        }
    }
}

const QMetaObject *SocketEventWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SocketEventWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SocketEventWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SocketEventWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void SocketEventWorker::volumeGetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SocketEventWorker::volumeSetRequested(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SocketEventWorker::volumeIncreaseReq()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SocketEventWorker::volumeDecreaseReq()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SocketEventWorker::brightnessSetRequested(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SocketEventWorker::brightnessGetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SocketEventWorker::brightnessIncreaseReq()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SocketEventWorker::brightnessDecreaseReq()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SocketEventWorker::modeSleep()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void SocketEventWorker::modeWakeUp()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void SocketEventWorker::pingDeviceUp()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void SocketEventWorker::modeListen()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void SocketEventWorker::modeRecording()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void SocketEventWorker::modeWaiting()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void SocketEventWorker::modeTalking()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void SocketEventWorker::speechModuleReady()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void SocketEventWorker::modeUploadFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void SocketEventWorker::langCurrent(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void SocketEventWorker::langGet()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void SocketEventWorker::langSet(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void SocketEventWorker::langAckSet()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void SocketEventWorker::incidentFallEventDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void SocketEventWorker::incidentFallWakeUpByFallDetection()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void SocketEventWorker::incidentAckFallEventDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void SocketEventWorker::incidentFallNoResponse()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void SocketEventWorker::incidentHelp()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void SocketEventWorker::incidentFallIamOK()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void SocketEventWorker::incidentFallHelpEventDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void SocketEventWorker::incidentFallOKEventDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void SocketEventWorker::incidentFallCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void SocketEventWorker::incidentFallIamnotOK()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void SocketEventWorker::alarmRing()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void SocketEventWorker::alarmWakeUp()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void SocketEventWorker::alarmStopButton()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void SocketEventWorker::alarmSnoozeButton()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void SocketEventWorker::wifiOn()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void SocketEventWorker::wifiOff()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void SocketEventWorker::wifiGetSsid()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void SocketEventWorker::wifiScanSsidReqReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void SocketEventWorker::wifiDisconnectCurrentSsid()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void SocketEventWorker::wifiSsidList()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void SocketEventWorker::wifiSsidListComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}

// SIGNAL 42
void SocketEventWorker::wifiConnect(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void SocketEventWorker::wifiForget(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void SocketEventWorker::rpiRestart()
{
    QMetaObject::activate(this, &staticMetaObject, 44, nullptr);
}

// SIGNAL 45
void SocketEventWorker::rpiShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 45, nullptr);
}

// SIGNAL 46
void SocketEventWorker::rpiReset()
{
    QMetaObject::activate(this, &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void SocketEventWorker::tzSetReq(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void SocketEventWorker::tzGetReq()
{
    QMetaObject::activate(this, &staticMetaObject, 48, nullptr);
}

// SIGNAL 49
void SocketEventWorker::powerInfoRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 49, nullptr);
}

// SIGNAL 50
void SocketEventWorker::audioRadarInfoRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 50, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
