/****************************************************************************
** Meta object code from reading C++ file 'comptatorapidcompta.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/common/configure/comptatorapidcompta.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'comptatorapidcompta.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ComptaToRapid[] = {

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
      15,   14,   14,   14, 0x08,
      49,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ComptaToRapid[] = {
    "ComptaToRapid\0\0getBaseToInsert(QListWidgetItem*)\0"
    "run()\0"
};

void ComptaToRapid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ComptaToRapid *_t = static_cast<ComptaToRapid *>(_o);
        switch (_id) {
        case 0: _t->getBaseToInsert((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->run(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ComptaToRapid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ComptaToRapid::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ComptaToRapid,
      qt_meta_data_ComptaToRapid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ComptaToRapid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ComptaToRapid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ComptaToRapid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ComptaToRapid))
        return static_cast<void*>(const_cast< ComptaToRapid*>(this));
    if (!strcmp(_clname, "Ui::ComptatorapidcomptaWidget"))
        return static_cast< Ui::ComptatorapidcomptaWidget*>(const_cast< ComptaToRapid*>(this));
    return QWidget::qt_metacast(_clname);
}

int ComptaToRapid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
