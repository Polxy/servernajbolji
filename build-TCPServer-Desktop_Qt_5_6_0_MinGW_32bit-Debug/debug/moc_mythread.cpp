/****************************************************************************
** Meta object code from reading C++ file 'mythread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TCPServer/mythread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mythread_t {
    QByteArrayData data[11];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mythread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mythread_t qt_meta_stringdata_mythread = {
    {
QT_MOC_LITERAL(0, 0, 8), // "mythread"
QT_MOC_LITERAL(1, 9, 5), // "error"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 23), // "QTcpSocket::SocketError"
QT_MOC_LITERAL(4, 40, 9), // "sockError"
QT_MOC_LITERAL(5, 50, 13), // "readyWriteSig"
QT_MOC_LITERAL(6, 64, 7), // "timeSig"
QT_MOC_LITERAL(7, 72, 9), // "readyRead"
QT_MOC_LITERAL(8, 82, 12), // "disconnected"
QT_MOC_LITERAL(9, 95, 10), // "readyWrite"
QT_MOC_LITERAL(10, 106, 6) // "timeUp"

    },
    "mythread\0error\0\0QTcpSocket::SocketError\0"
    "sockError\0readyWriteSig\0timeSig\0"
    "readyRead\0disconnected\0readyWrite\0"
    "timeUp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mythread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mythread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mythread *_t = static_cast<mythread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 1: _t->readyWriteSig(); break;
        case 2: _t->timeSig(); break;
        case 3: _t->readyRead(); break;
        case 4: _t->disconnected(); break;
        case 5: _t->readyWrite(); break;
        case 6: _t->timeUp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mythread::*_t)(QTcpSocket::SocketError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mythread::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (mythread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mythread::readyWriteSig)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (mythread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mythread::timeSig)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject mythread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_mythread.data,
      qt_meta_data_mythread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mythread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mythread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mythread.stringdata0))
        return static_cast<void*>(const_cast< mythread*>(this));
    return QThread::qt_metacast(_clname);
}

int mythread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void mythread::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mythread::readyWriteSig()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void mythread::timeSig()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
