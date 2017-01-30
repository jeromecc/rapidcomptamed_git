/****************************************************************************
** Meta object code from reading C++ file 'findreceiptsvalues.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ccam/findreceiptsvalues.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findreceiptsvalues.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FindReceiptsValues[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      44,   19,   19,   19, 0x08,
      58,   19,   19,   19, 0x08,
      78,   72,   19,   19, 0x08,
     110,  108,   19,   19, 0x08,
     163,  158,   19,   19, 0x08,
     202,  108,   19,   19, 0x08,
     237,   19,   19,   19, 0x08,
     259,  257,   19,   19, 0x08,
     280,   19,   19,   19, 0x08,
     302,  297,   19,   19, 0x08,
     341,   19,   19,   19, 0x08,
     357,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FindReceiptsValues[] = {
    "FindReceiptsValues\0\0fillListViewValues(int)\0"
    "chooseValue()\0deleteValue()\0index\0"
    "showInformations(QModelIndex)\0,\0"
    "showInformations(QItemSelection,QItemSelection)\0"
    "text\0on_lineEditFilter_textChanged(QString)\0"
    "setModifSpinBox(QWidget*,QWidget*)\0"
    "setModifier(double)\0b\0wipeFilterEdit(bool)\0"
    "wipeFilterEdit()\0item\0"
    "setLessButtonEnabled(QListWidgetItem*)\0"
    "openAmeliFile()\0writeTheCommandInDoc()\0"
};

void FindReceiptsValues::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FindReceiptsValues *_t = static_cast<FindReceiptsValues *>(_o);
        switch (_id) {
        case 0: _t->fillListViewValues((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->chooseValue(); break;
        case 2: _t->deleteValue(); break;
        case 3: _t->showInformations((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->showInformations((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 5: _t->on_lineEditFilter_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setModifSpinBox((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 7: _t->setModifier((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->wipeFilterEdit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->wipeFilterEdit(); break;
        case 10: _t->setLessButtonEnabled((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->openAmeliFile(); break;
        case 12: _t->writeTheCommandInDoc(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FindReceiptsValues::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FindReceiptsValues::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FindReceiptsValues,
      qt_meta_data_FindReceiptsValues, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FindReceiptsValues::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FindReceiptsValues::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FindReceiptsValues::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FindReceiptsValues))
        return static_cast<void*>(const_cast< FindReceiptsValues*>(this));
    return QDialog::qt_metacast(_clname);
}

int FindReceiptsValues::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
