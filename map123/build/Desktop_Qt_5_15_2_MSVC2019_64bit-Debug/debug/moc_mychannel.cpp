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
    QByteArrayData data[12];
    char stringdata0[125];
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
QT_MOC_LITERAL(4, 28, 12), // "inputChanged"
QT_MOC_LITERAL(5, 41, 5), // "input"
QT_MOC_LITERAL(6, 47, 12), // "setCityLable"
QT_MOC_LITERAL(7, 60, 16), // "sendAutocomplete"
QT_MOC_LITERAL(8, 77, 7), // "autocom"
QT_MOC_LITERAL(9, 85, 15), // "getAutocomplete"
QT_MOC_LITERAL(10, 101, 6), // "result"
QT_MOC_LITERAL(11, 108, 16) // "cityChangeResult"

    },
    "myChannel\0cityChanged\0\0city\0inputChanged\0"
    "input\0setCityLable\0sendAutocomplete\0"
    "autocom\0getAutocomplete\0result\0"
    "cityChangeResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myChannel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       7,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   56,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QJsonObject,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,   10,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void myChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cityChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->inputChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setCityLable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sendAutocomplete((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 4: _t->getAutocomplete((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 5: _t->cityChangeResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::inputChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (myChannel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::setCityLable)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (myChannel::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myChannel::sendAutocomplete)) {
                *result = 3;
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
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void myChannel::inputChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void myChannel::setCityLable(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void myChannel::sendAutocomplete(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
