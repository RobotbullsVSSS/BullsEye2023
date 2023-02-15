/****************************************************************************
** Meta object code from reading C++ file 'calibratecamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../computer-vision/BullsEYE/calibratecamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibratecamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalibrateCamera_t {
    QByteArrayData data[18];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalibrateCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalibrateCamera_t qt_meta_stringdata_CalibrateCamera = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CalibrateCamera"
QT_MOC_LITERAL(1, 16, 34), // "on_cameraCombo_currentIndexCh..."
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 5), // "index"
QT_MOC_LITERAL(4, 58, 32), // "on_brightnessSlider_valueChanged"
QT_MOC_LITERAL(5, 91, 5), // "value"
QT_MOC_LITERAL(6, 97, 30), // "on_contrastSlider_valueChanged"
QT_MOC_LITERAL(7, 128, 32), // "on_saturationSlider_valueChanged"
QT_MOC_LITERAL(8, 161, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(9, 183, 26), // "on_calibrateButton_clicked"
QT_MOC_LITERAL(10, 210, 26), // "on_applyDistortion_clicked"
QT_MOC_LITERAL(11, 237, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(12, 260, 39), // "on_distortionCamera_currentIn..."
QT_MOC_LITERAL(13, 300, 30), // "on_sharpnessSlider_sliderMoved"
QT_MOC_LITERAL(14, 331, 8), // "position"
QT_MOC_LITERAL(15, 340, 12), // "displayFrame"
QT_MOC_LITERAL(16, 353, 12), // "labelClicked"
QT_MOC_LITERAL(17, 366, 8) // "mousePos"

    },
    "CalibrateCamera\0on_cameraCombo_currentIndexChanged\0"
    "\0index\0on_brightnessSlider_valueChanged\0"
    "value\0on_contrastSlider_valueChanged\0"
    "on_saturationSlider_valueChanged\0"
    "on_saveButton_clicked\0on_calibrateButton_clicked\0"
    "on_applyDistortion_clicked\0"
    "on_resetButton_clicked\0"
    "on_distortionCamera_currentIndexChanged\0"
    "on_sharpnessSlider_sliderMoved\0position\0"
    "displayFrame\0labelClicked\0mousePos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalibrateCamera[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       6,    1,   80,    2, 0x08 /* Private */,
       7,    1,   83,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x0a /* Public */,
      16,    1,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   17,

       0        // eod
};

void CalibrateCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalibrateCamera *_t = static_cast<CalibrateCamera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cameraCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_brightnessSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_contrastSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_saturationSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_saveButton_clicked(); break;
        case 5: _t->on_calibrateButton_clicked(); break;
        case 6: _t->on_applyDistortion_clicked(); break;
        case 7: _t->on_resetButton_clicked(); break;
        case 8: _t->on_distortionCamera_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_sharpnessSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->displayFrame(); break;
        case 11: _t->labelClicked((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CalibrateCamera::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CalibrateCamera.data,
      qt_meta_data_CalibrateCamera,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CalibrateCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalibrateCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalibrateCamera.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CalibrateCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
