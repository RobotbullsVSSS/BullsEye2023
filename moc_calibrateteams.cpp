/****************************************************************************
** Meta object code from reading C++ file 'calibrateteams.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../computer-vision/BullsEYE/calibrateteams.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibrateteams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalibrateTeams_t {
    QByteArrayData data[10];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalibrateTeams_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalibrateTeams_t qt_meta_stringdata_CalibrateTeams = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CalibrateTeams"
QT_MOC_LITERAL(1, 15, 9), // "reloadUDP"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(4, 48, 20), // "on_teamBox_activated"
QT_MOC_LITERAL(5, 69, 5), // "index"
QT_MOC_LITERAL(6, 75, 22), // "on_portLine_textEdited"
QT_MOC_LITERAL(7, 98, 4), // "arg1"
QT_MOC_LITERAL(8, 103, 21), // "on_ipLine_textChanged"
QT_MOC_LITERAL(9, 125, 23) // "on_reloadButton_clicked"

    },
    "CalibrateTeams\0reloadUDP\0\0"
    "on_saveButton_clicked\0on_teamBox_activated\0"
    "index\0on_portLine_textEdited\0arg1\0"
    "on_ipLine_textChanged\0on_reloadButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalibrateTeams[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void CalibrateTeams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalibrateTeams *_t = static_cast<CalibrateTeams *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reloadUDP(); break;
        case 1: _t->on_saveButton_clicked(); break;
        case 2: _t->on_teamBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_portLine_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_ipLine_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_reloadButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CalibrateTeams::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalibrateTeams::reloadUDP)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CalibrateTeams::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CalibrateTeams.data,
      qt_meta_data_CalibrateTeams,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CalibrateTeams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalibrateTeams::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalibrateTeams.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CalibrateTeams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void CalibrateTeams::reloadUDP()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
