/****************************************************************************
** Meta object code from reading C++ file 'qperson.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../04_attritube_system/qperson.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qperson.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qperson_t {
    QByteArrayData data[9];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qperson_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qperson_t qt_meta_stringdata_qperson = {
    {
QT_MOC_LITERAL(0, 0, 7), // "qperson"
QT_MOC_LITERAL(1, 8, 6), // "author"
QT_MOC_LITERAL(2, 15, 7), // "Arxibye"
QT_MOC_LITERAL(3, 23, 7), // "company"
QT_MOC_LITERAL(4, 31, 4), // "NCHL"
QT_MOC_LITERAL(5, 36, 6), // "verson"
QT_MOC_LITERAL(6, 43, 3), // "1.0"
QT_MOC_LITERAL(7, 47, 10), // "ageChanged"
QT_MOC_LITERAL(8, 58, 0) // ""

    },
    "qperson\0author\0Arxibye\0company\0NCHL\0"
    "verson\0""1.0\0ageChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qperson[] = {

 // content:
       7,       // revision
       0,       // classname
       3,   14, // classinfo
       1,   20, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

 // signals: name, argc, parameters, tag, flags
       7,    0,   25,    8, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void qperson::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qperson *_t = static_cast<qperson *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ageChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (qperson::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qperson::ageChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject qperson::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qperson.data,
      qt_meta_data_qperson,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qperson::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qperson::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qperson.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qperson::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void qperson::ageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
