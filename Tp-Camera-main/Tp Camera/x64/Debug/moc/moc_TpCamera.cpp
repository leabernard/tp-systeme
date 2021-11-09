/****************************************************************************
** Meta object code from reading C++ file 'TpCamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../TpCamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TpCamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TpCamera_t {
    QByteArrayData data[19];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TpCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TpCamera_t qt_meta_stringdata_TpCamera = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TpCamera"
QT_MOC_LITERAL(1, 9, 11), // "EnvoiCamera"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "function"
QT_MOC_LITERAL(4, 31, 15), // "onButtonAllumer"
QT_MOC_LITERAL(5, 47, 16), // "onButtonEteindre"
QT_MOC_LITERAL(6, 64, 14), // "onButtonDeZoom"
QT_MOC_LITERAL(7, 79, 12), // "onButtonZoom"
QT_MOC_LITERAL(8, 92, 16), // "onButtonStopZoom"
QT_MOC_LITERAL(9, 109, 14), // "onButtonGauche"
QT_MOC_LITERAL(10, 124, 14), // "onButtonDroite"
QT_MOC_LITERAL(11, 139, 11), // "onButtonBas"
QT_MOC_LITERAL(12, 151, 12), // "onButtonHaut"
QT_MOC_LITERAL(13, 164, 21), // "onButtonStopMouvement"
QT_MOC_LITERAL(14, 186, 18), // "onButtonRemiseZero"
QT_MOC_LITERAL(15, 205, 16), // "onButtonBalayage"
QT_MOC_LITERAL(16, 222, 11), // "onTimerTick"
QT_MOC_LITERAL(17, 234, 9), // "ButtonOff"
QT_MOC_LITERAL(18, 244, 8) // "ButtonOn"

    },
    "TpCamera\0EnvoiCamera\0\0function\0"
    "onButtonAllumer\0onButtonEteindre\0"
    "onButtonDeZoom\0onButtonZoom\0"
    "onButtonStopZoom\0onButtonGauche\0"
    "onButtonDroite\0onButtonBas\0onButtonHaut\0"
    "onButtonStopMouvement\0onButtonRemiseZero\0"
    "onButtonBalayage\0onTimerTick\0ButtonOff\0"
    "ButtonOn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TpCamera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    0,   97,    2, 0x0a /* Public */,
       5,    0,   98,    2, 0x0a /* Public */,
       6,    0,   99,    2, 0x0a /* Public */,
       7,    0,  100,    2, 0x0a /* Public */,
       8,    0,  101,    2, 0x0a /* Public */,
       9,    0,  102,    2, 0x0a /* Public */,
      10,    0,  103,    2, 0x0a /* Public */,
      11,    0,  104,    2, 0x0a /* Public */,
      12,    0,  105,    2, 0x0a /* Public */,
      13,    0,  106,    2, 0x0a /* Public */,
      14,    0,  107,    2, 0x0a /* Public */,
      15,    0,  108,    2, 0x0a /* Public */,
      16,    0,  109,    2, 0x0a /* Public */,
      17,    0,  110,    2, 0x0a /* Public */,
      18,    0,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
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

       0        // eod
};

void TpCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TpCamera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EnvoiCamera((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->onButtonAllumer(); break;
        case 2: _t->onButtonEteindre(); break;
        case 3: _t->onButtonDeZoom(); break;
        case 4: _t->onButtonZoom(); break;
        case 5: _t->onButtonStopZoom(); break;
        case 6: _t->onButtonGauche(); break;
        case 7: _t->onButtonDroite(); break;
        case 8: _t->onButtonBas(); break;
        case 9: _t->onButtonHaut(); break;
        case 10: _t->onButtonStopMouvement(); break;
        case 11: _t->onButtonRemiseZero(); break;
        case 12: _t->onButtonBalayage(); break;
        case 13: _t->onTimerTick(); break;
        case 14: _t->ButtonOff(); break;
        case 15: _t->ButtonOn(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TpCamera::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TpCamera.data,
    qt_meta_data_TpCamera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TpCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TpCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TpCamera.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TpCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
