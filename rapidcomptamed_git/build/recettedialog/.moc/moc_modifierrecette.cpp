/****************************************************************************
** Meta object code from reading C++ file 'modifierrecette.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/comptabilite_interfaces_src/recettedialog/modifierrecette.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifierrecette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_modifierrecette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x09,
      27,   16,   16,   16, 0x09,
      46,   16,   16,   16, 0x09,
      59,   16,   16,   16, 0x09,
      78,   16,   16,   16, 0x09,
      89,   16,   16,   16, 0x09,
     111,   16,   16,   16, 0x09,
     143,  130,   16,   16, 0x09,
     177,  172,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_modifierrecette[] = {
    "modifierrecette\0\0effacer()\0"
    "lancerGestionDus()\0rechercher()\0"
    "setWhatsThisMode()\0imprimer()\0"
    "honorairesIsChecked()\0seancesIsChecked()\0"
    "column,order\0sortTable(int,Qt::SortOrder)\0"
    "text\0changeUser(QString)\0"
};

void modifierrecette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        modifierrecette *_t = static_cast<modifierrecette *>(_o);
        switch (_id) {
        case 0: _t->effacer(); break;
        case 1: _t->lancerGestionDus(); break;
        case 2: _t->rechercher(); break;
        case 3: _t->setWhatsThisMode(); break;
        case 4: _t->imprimer(); break;
        case 5: _t->honorairesIsChecked(); break;
        case 6: _t->seancesIsChecked(); break;
        case 7: _t->sortTable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 8: _t->changeUser((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData modifierrecette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject modifierrecette::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_modifierrecette,
      qt_meta_data_modifierrecette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &modifierrecette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *modifierrecette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *modifierrecette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_modifierrecette))
        return static_cast<void*>(const_cast< modifierrecette*>(this));
    if (!strcmp(_clname, "Ui::ModifierRecette"))
        return static_cast< Ui::ModifierRecette*>(const_cast< modifierrecette*>(this));
    return QWidget::qt_metacast(_clname);
}

int modifierrecette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
