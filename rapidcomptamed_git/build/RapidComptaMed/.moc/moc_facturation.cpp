/****************************************************************************
** Meta object code from reading C++ file 'facturation.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/comptabilite_interfaces_src/facturation/facturation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'facturation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Facture[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      18,    8,    8,    8, 0x08,
      27,    8,    8,    8, 0x08,
      37,    8,    8,    8, 0x08,
      46,    8,    8,    8, 0x08,
      59,    8,    8,    8, 0x08,
      81,   71,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Facture[] = {
    "Facture\0\0addrow()\0delRow()\0newBill()\0"
    "record()\0deleteBill()\0printBill()\0"
    "factureid\0setFactureFromId(QString)\0"
};

void Facture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Facture *_t = static_cast<Facture *>(_o);
        switch (_id) {
        case 0: _t->addrow(); break;
        case 1: _t->delRow(); break;
        case 2: _t->newBill(); break;
        case 3: _t->record(); break;
        case 4: _t->deleteBill(); break;
        case 5: _t->printBill(); break;
        case 6: _t->setFactureFromId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Facture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Facture::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Facture,
      qt_meta_data_Facture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Facture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Facture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Facture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Facture))
        return static_cast<void*>(const_cast< Facture*>(this));
    if (!strcmp(_clname, "Ui::FacturationWidget"))
        return static_cast< Ui::FacturationWidget*>(const_cast< Facture*>(this));
    return QWidget::qt_metacast(_clname);
}

int Facture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
