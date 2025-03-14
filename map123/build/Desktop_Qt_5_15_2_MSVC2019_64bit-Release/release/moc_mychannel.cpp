/****************************************************************************
** Meta object code from reading C++ file 'mychannel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mychannel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mychannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myChannel_t {
    QByteArrayData data[21];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myChannel_t qt_meta_stringdata_myChannel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "myChannel"
QT_MOC_LITERAL(1, 10, 11), // "cityChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "city"
QT_MOC_LITERAL(4, 28, 14), // "inputChanged_1"
QT_MOC_LITERAL(5, 43, 5), // "input"
QT_MOC_LITERAL(6, 49, 14), // "inputChanged_2"
QT_MOC_LITERAL(7, 64, 13), // "startlocation"
QT_MOC_LITERAL(8, 78, 8), // "location"
QT_MOC_LITERAL(9, 87, 11), // "endlocation"
QT_MOC_LITERAL(10, 99, 11), // "selectRoute"
QT_MOC_LITERAL(11, 111, 12), // "setCityLable"
QT_MOC_LITERAL(12, 124, 18), // "sendAutocomplete_1"
QT_MOC_LITERAL(13, 143, 7), // "autocom"
QT_MOC_LITERAL(14, 151, 18), // "sendAutocomplete_2"
QT_MOC_LITERAL(15, 170, 10), // "routeError"
QT_MOC_LITERAL(16, 181, 7), // "message"
QT_MOC_LITERAL(17, 189, 16), // "cityChangeResult"
QT_MOC_LITERAL(18, 206, 6), // "result"
QT_MOC_LITERAL(19, 213, 17), // "getAutocomplete_1"
QT_MOC_LITERAL(20, 231, 17) // "getAutocomplete_2"

    },
    "myChannel\0cityChanged\0\0city\0inputChanged_1\0"
    "input\0inputChanged_2\0startlocation\0"
    "location\0endlocation\0selectRoute\0"
    "setCityLable\0sendAutocomplete_1\0autocom\0"
    "sendAutocomplete_2\0routeError\0message\0"
    "cityChangeResult\0result\0getAutocomplete_1\0"
    "getAutocomplete_2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myChannel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       7,    1,   88,    2, 0x06 /* Public */,
       9,    1,   91,    2, 0x06 /* Public */,
      10,    0,   94,    2, 0x06 /* Public */,
      11,    1,   95,    2, 0x06 /* Public */,
      12,    1,   98,    2, 0x06 /* Public */,
      14,    1,  101,    2, 0x06 /* Public */,
      15,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  107,    2, 0x0a /* Public */,
      19,    1,  110,    2, 0x0a /* Public */,
      20,    1,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QJsonObject,   13,
    QMetaType::Void, QMetaType::QJsonObject,   13,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QJsonObject,   18,
    QMetaType::Void, QMetaType::QJsonObject,   18,

       0        // eod
};

void myChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cityChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->inputChanged_1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->inputChanged_2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->startlocation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->endlocation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->selectRoute(); break;
        case 6: _t->setCityLable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->sendAutocomplete_1((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 8: _t->sendAutocomplete_2((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 9: _t->routeError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->cityChangeResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->getAutocomplete_1((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 12: _t->getAutocomplete_2((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (myChannel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::cityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (myChannel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::inputChanged_1)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (myChannel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::inputChanged_2)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (myChannel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::startlocation)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (myChannel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::endlocation)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (myChannel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::selectRoute)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (myChannel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::setCityLable)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (myChannel::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::sendAutocomplete_1)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (myChannel::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::sendAutocomplete_2)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (myChannel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::routeError)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject myChannel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_myChannel.data,
    qt_meta_data_myChannel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *myChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myChannel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int myChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void myChannel::cityChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void myChannel::inputChanged_1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void myChannel::inputChanged_2(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void myChannel::startlocation(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void myChannel::endlocation(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void myChannel::selectRoute()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void myChannel::setCityLable(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void myChannel::sendAutocomplete_1(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void myChannel::sendAutocomplete_2(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void myChannel::routeError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
