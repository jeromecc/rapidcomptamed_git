/****************************************************************************
** Meta object code from reading C++ file 'movementschecking.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/comptabilite_interfaces_src/bank/movementschecking.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'movementschecking.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MovementsChecking[] = {

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
      25,   19,   18,   18, 0x08,
      56,   18,   18,   18, 0x08,
      81,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MovementsChecking[] = {
    "MovementsChecking\0\0login\0"
    "getMovementsUnchecked(QString)\0"
    "recordCheckedMovements()\0"
    "revertCheckedMovements()\0"
};

void MovementsChecking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MovementsChecking *_t = static_cast<MovementsChecking *>(_o);
        switch (_id) {
        case 0: _t->getMovementsUnchecked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->recordCheckedMovements(); break;
        case 2: _t->revertCheckedMovements(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MovementsChecking::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MovementsChecking::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MovementsChecking,
      qt_meta_data_MovementsChecking, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MovementsChecking::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MovementsChecking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MovementsChecking::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MovementsChecking))
        return static_cast<void*>(const_cast< MovementsChecking*>(this));
    if (!strcmp(_clname, "Ui::movementsCheckingWidget"))
        return static_cast< Ui::movementsCheckingWidget*>(const_cast< MovementsChecking*>(this));
    return QWidget::qt_metacast(_clname);
}

int MovementsChecking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
