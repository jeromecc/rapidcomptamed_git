/****************************************************************************
** Meta object code from reading C++ file 'nameindex.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/common/configure/nameindex.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nameindex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NamesDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x08,
      40,   12,   12,   12, 0x08,
      53,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NamesDialog[] = {
    "NamesDialog\0\0texts\0textchanged(QString)\0"
    "recordName()\0deleteName()\0"
};

void NamesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NamesDialog *_t = static_cast<NamesDialog *>(_o);
        switch (_id) {
        case 0: _t->textchanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->recordName(); break;
        case 2: _t->deleteName(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NamesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NamesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NamesDialog,
      qt_meta_data_NamesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NamesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NamesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NamesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NamesDialog))
        return static_cast<void*>(const_cast< NamesDialog*>(this));
    if (!strcmp(_clname, "Ui::NamesDialog"))
        return static_cast< Ui::NamesDialog*>(const_cast< NamesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int NamesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
