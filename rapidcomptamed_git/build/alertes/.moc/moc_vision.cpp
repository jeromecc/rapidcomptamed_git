/****************************************************************************
** Meta object code from reading C++ file 'vision.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/common/configure/vision.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vision.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vision[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x09,
      20,   18,    7,    7, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_vision[] = {
    "vision\0\0effacer()\0,\0"
    "refresh(QModelIndex,QModelIndex)\0"
};

void vision::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        vision *_t = static_cast<vision *>(_o);
        switch (_id) {
        case 0: _t->effacer(); break;
        case 1: _t->refresh((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData vision::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject vision::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_vision,
      qt_meta_data_vision, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vision::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vision::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vision::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vision))
        return static_cast<void*>(const_cast< vision*>(this));
    if (!strcmp(_clname, "Ui::VisionDialog"))
        return static_cast< Ui::VisionDialog*>(const_cast< vision*>(this));
    return QWidget::qt_metacast(_clname);
}

int vision::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
