/****************************************************************************
** Meta object code from reading C++ file 'depensedialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/comptabilite_interfaces_src/depensedialog/depensedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'depensedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_depensedialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x09,
      35,   14,   14,   14, 0x09,
      45,   14,   14,   14, 0x09,
      58,   14,   14,   14, 0x09,
      67,   14,   14,   14, 0x09,
      79,   14,   14,   14, 0x09,
      92,   14,   14,   14, 0x09,
     108,   14,   14,   14, 0x09,
     125,   14,   14,   14, 0x09,
     146,   14,   14,   14, 0x09,
     184,  179,   14,   14, 0x09,
     219,   14,   14,   14, 0x09,
     239,   14,   14,   14, 0x09,
     264,   14,   14,   14, 0x09,
     280,   14,   14,   14, 0x09,
     313,  293,   14,   14, 0x09,
     367,  347,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_depensedialog[] = {
    "depensedialog\0\0enregistredepense()\0"
    "effacer()\0rafraichir()\0valide()\0"
    "bankDebit()\0messagebox()\0whatsthismode()\0"
    "showToolTip(int)\0loginIsModified(int)\0"
    "fillFileCompletionList(QObject*)\0text\0"
    "on_detailEdit_textChanged(QString)\0"
    "setCompletionList()\0refreshWithYear(QString)\0"
    "analyseYearly()\0showErrors()\0"
    "topLeft,bottomRight\0"
    "showSums(QModelIndex,QModelIndex)\0"
    "beginindex,endindex\0"
    "controlIdWithLibelle(QModelIndex,QModelIndex)\0"
};

void depensedialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        depensedialog *_t = static_cast<depensedialog *>(_o);
        switch (_id) {
        case 0: _t->enregistredepense(); break;
        case 1: _t->effacer(); break;
        case 2: _t->rafraichir(); break;
        case 3: _t->valide(); break;
        case 4: _t->bankDebit(); break;
        case 5: _t->messagebox(); break;
        case 6: _t->whatsthismode(); break;
        case 7: _t->showToolTip((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->loginIsModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->fillFileCompletionList((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 10: _t->on_detailEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setCompletionList(); break;
        case 12: _t->refreshWithYear((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->analyseYearly(); break;
        case 14: _t->showErrors(); break;
        case 15: _t->showSums((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 16: _t->controlIdWithLibelle((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData depensedialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject depensedialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_depensedialog,
      qt_meta_data_depensedialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &depensedialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *depensedialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *depensedialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_depensedialog))
        return static_cast<void*>(const_cast< depensedialog*>(this));
    if (!strcmp(_clname, "Ui::DepenseDialog"))
        return static_cast< Ui::DepenseDialog*>(const_cast< depensedialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int depensedialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
