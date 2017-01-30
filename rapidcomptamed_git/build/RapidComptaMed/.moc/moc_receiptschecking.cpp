/****************************************************************************
** Meta object code from reading C++ file 'receiptschecking.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/comptabilite_interfaces_src/bank/receiptschecking.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receiptschecking.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ReceiptsChecking[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x08,
      54,   17,   17,   17, 0x08,
      78,   17,   17,   17, 0x08,
     102,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ReceiptsChecking[] = {
    "ReceiptsChecking\0\0login\0"
    "getReceiptsUnchecked(QString)\0"
    "recordCheckedReceipts()\0revertCheckedReceipts()\0"
    "recordDetail()\0"
};

void ReceiptsChecking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReceiptsChecking *_t = static_cast<ReceiptsChecking *>(_o);
        switch (_id) {
        case 0: _t->getReceiptsUnchecked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->recordCheckedReceipts(); break;
        case 2: _t->revertCheckedReceipts(); break;
        case 3: _t->recordDetail(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ReceiptsChecking::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ReceiptsChecking::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ReceiptsChecking,
      qt_meta_data_ReceiptsChecking, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReceiptsChecking::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReceiptsChecking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReceiptsChecking::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiptsChecking))
        return static_cast<void*>(const_cast< ReceiptsChecking*>(this));
    if (!strcmp(_clname, "Ui::receiptsCheckingWidget"))
        return static_cast< Ui::receiptsCheckingWidget*>(const_cast< ReceiptsChecking*>(this));
    return QWidget::qt_metacast(_clname);
}

int ReceiptsChecking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
