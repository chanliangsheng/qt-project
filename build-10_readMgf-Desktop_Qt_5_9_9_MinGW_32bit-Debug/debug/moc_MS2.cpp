/****************************************************************************
** Meta object code from reading C++ file 'MS2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../10_readMgf/MS2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MS2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MS2_t {
    QByteArrayData data[5];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MS2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MS2_t qt_meta_stringdata_MS2 = {
    {
QT_MOC_LITERAL(0, 0, 3), // "MS2"
QT_MOC_LITERAL(1, 4, 7), // "sendMS2"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 17), // "QList<singleMS2>*"
QT_MOC_LITERAL(4, 31, 7) // "MS2List"

    },
    "MS2\0sendMS2\0\0QList<singleMS2>*\0MS2List"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MS2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MS2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MS2 *_t = static_cast<MS2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMS2((*reinterpret_cast< QList<singleMS2>*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MS2::*_t)(QList<singleMS2> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MS2::sendMS2)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MS2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MS2.data,
      qt_meta_data_MS2,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MS2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MS2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MS2.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "singleMS2"))
        return static_cast< singleMS2*>(this);
    return QObject::qt_metacast(_clname);
}

int MS2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MS2::sendMS2(QList<singleMS2> * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
