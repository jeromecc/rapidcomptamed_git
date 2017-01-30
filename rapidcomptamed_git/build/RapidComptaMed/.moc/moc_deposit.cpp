/****************************************************************************
** Meta object code from reading C++ file 'deposit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/comptabilite_interfaces_src/bank/deposit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deposit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Deposits[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      19,    9,    9,    9, 0x08,
      34,    9,    9,    9, 0x08,
      59,   54,    9,    9, 0x08,
      79,    9,    9,    9, 0x08,
     107,   99,    9,    9, 0x08,
     135,  129,    9,    9, 0x08,
     147,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Deposits[] = {
    "Deposits\0\0cancel()\0recordInBank()\0"
    "showBalanceDialog()\0bank\0getBalance(QString)\0"
    "setBalanceChanged()\0balance\0"
    "setNewBalance(double)\0index\0cancel(int)\0"
    "remplirComptesBancaires(QString)\0"
};

void Deposits::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Deposits *_t = static_cast<Deposits *>(_o);
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->recordInBank(); break;
        case 2: _t->showBalanceDialog(); break;
        case 3: _t->getBalance((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setBalanceChanged(); break;
        case 5: _t->setNewBalance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->cancel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->remplirComptesBancaires((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Deposits::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Deposits::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Deposits,
      qt_meta_data_Deposits, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Deposits::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Deposits::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Deposits::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Deposits))
        return static_cast<void*>(const_cast< Deposits*>(this));
    if (!strcmp(_clname, "Ui::DepositWidget"))
        return static_cast< Ui::DepositWidget*>(const_cast< Deposits*>(this));
    return QWidget::qt_metacast(_clname);
}

int Deposits::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
