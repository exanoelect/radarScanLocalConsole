/****************************************************************************
** Meta object code from reading C++ file 'socketioclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../socketioclient.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketioclient.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SocketIOClient_t {
    uint offsetsAndSizes[48];
    char stringdata0[15];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[12];
    char stringdata5[13];
    char stringdata6[16];
    char stringdata7[6];
    char stringdata8[14];
    char stringdata9[10];
    char stringdata10[8];
    char stringdata11[19];
    char stringdata12[21];
    char stringdata13[23];
    char stringdata14[13];
    char stringdata15[21];
    char stringdata16[24];
    char stringdata17[23];
    char stringdata18[8];
    char stringdata19[17];
    char stringdata20[29];
    char stringdata21[9];
    char stringdata22[17];
    char stringdata23[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SocketIOClient_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SocketIOClient_t qt_meta_stringdata_SocketIOClient = {
    {
        QT_MOC_LITERAL(0, 14),  // "SocketIOClient"
        QT_MOC_LITERAL(15, 9),  // "connected"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 8),  // "socketId"
        QT_MOC_LITERAL(35, 11),  // "deviceready"
        QT_MOC_LITERAL(47, 12),  // "disconnected"
        QT_MOC_LITERAL(60, 15),  // "connectionError"
        QT_MOC_LITERAL(76, 5),  // "error"
        QT_MOC_LITERAL(82, 13),  // "eventReceived"
        QT_MOC_LITERAL(96, 9),  // "eventName"
        QT_MOC_LITERAL(106, 7),  // "payload"
        QT_MOC_LITERAL(114, 18),  // "deviceOffRequested"
        QT_MOC_LITERAL(133, 20),  // "deviceResetRequested"
        QT_MOC_LITERAL(154, 22),  // "deviceRestartRequested"
        QT_MOC_LITERAL(177, 12),  // "pingDeviceUp"
        QT_MOC_LITERAL(190, 20),  // "onWebSocketConnected"
        QT_MOC_LITERAL(211, 23),  // "onWebSocketDisconnected"
        QT_MOC_LITERAL(235, 22),  // "onWebSocketTextMessage"
        QT_MOC_LITERAL(258, 7),  // "message"
        QT_MOC_LITERAL(266, 16),  // "onWebSocketError"
        QT_MOC_LITERAL(283, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(312, 8),  // "sendPing"
        QT_MOC_LITERAL(321, 16),  // "attemptReconnect"
        QT_MOC_LITERAL(338, 17)   // "processEventQueue"
    },
    "SocketIOClient",
    "connected",
    "",
    "socketId",
    "deviceready",
    "disconnected",
    "connectionError",
    "error",
    "eventReceived",
    "eventName",
    "payload",
    "deviceOffRequested",
    "deviceResetRequested",
    "deviceRestartRequested",
    "pingDeviceUp",
    "onWebSocketConnected",
    "onWebSocketDisconnected",
    "onWebSocketTextMessage",
    "message",
    "onWebSocketError",
    "QAbstractSocket::SocketError",
    "sendPing",
    "attemptReconnect",
    "processEventQueue"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SocketIOClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    1 /* Public */,
       4,    0,  113,    2, 0x06,    3 /* Public */,
       5,    0,  114,    2, 0x06,    4 /* Public */,
       6,    1,  115,    2, 0x06,    5 /* Public */,
       8,    2,  118,    2, 0x06,    7 /* Public */,
      11,    0,  123,    2, 0x06,   10 /* Public */,
      12,    0,  124,    2, 0x06,   11 /* Public */,
      13,    0,  125,    2, 0x06,   12 /* Public */,
      14,    0,  126,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  127,    2, 0x08,   14 /* Private */,
      16,    0,  128,    2, 0x08,   15 /* Private */,
      17,    1,  129,    2, 0x08,   16 /* Private */,
      19,    1,  132,    2, 0x08,   18 /* Private */,
      21,    0,  135,    2, 0x08,   20 /* Private */,
      22,    0,  136,    2, 0x08,   21 /* Private */,
      23,    0,  137,    2, 0x08,   22 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonValue,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 20,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SocketIOClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SocketIOClient.offsetsAndSizes,
    qt_meta_data_SocketIOClient,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SocketIOClient_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SocketIOClient, std::true_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deviceready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectionError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'eventReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonValue &, std::false_type>,
        // method 'deviceOffRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceResetRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceRestartRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pingDeviceUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWebSocketConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWebSocketDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWebSocketTextMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onWebSocketError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'sendPing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'attemptReconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processEventQueue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SocketIOClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketIOClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->deviceready(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->connectionError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->eventReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonValue>>(_a[2]))); break;
        case 5: _t->deviceOffRequested(); break;
        case 6: _t->deviceResetRequested(); break;
        case 7: _t->deviceRestartRequested(); break;
        case 8: _t->pingDeviceUp(); break;
        case 9: _t->onWebSocketConnected(); break;
        case 10: _t->onWebSocketDisconnected(); break;
        case 11: _t->onWebSocketTextMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->onWebSocketError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 13: _t->sendPing(); break;
        case 14: _t->attemptReconnect(); break;
        case 15: _t->processEventQueue(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SocketIOClient::*)(const QString & );
            if (_t _q_method = &SocketIOClient::connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SocketIOClient::*)();
            if (_t _q_method = &SocketIOClient::deviceready; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SocketIOClient::*)();
            if (_t _q_method = &SocketIOClient::disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SocketIOClient::*)(const QString & );
            if (_t _q_method = &SocketIOClient::connectionError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SocketIOClient::*)(const QString & , const QJsonValue & );
            if (_t _q_method = &SocketIOClient::eventReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SocketIOClient::*)();
            if (_t _q_method = &SocketIOClient::deviceOffRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SocketIOClient::*)();
            if (_t _q_method = &SocketIOClient::deviceResetRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SocketIOClient::*)();
            if (_t _q_method = &SocketIOClient::deviceRestartRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SocketIOClient::*)();
            if (_t _q_method = &SocketIOClient::pingDeviceUp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *SocketIOClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SocketIOClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SocketIOClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SocketIOClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void SocketIOClient::connected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SocketIOClient::deviceready()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SocketIOClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SocketIOClient::connectionError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SocketIOClient::eventReceived(const QString & _t1, const QJsonValue & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SocketIOClient::deviceOffRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SocketIOClient::deviceResetRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SocketIOClient::deviceRestartRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SocketIOClient::pingDeviceUp()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
