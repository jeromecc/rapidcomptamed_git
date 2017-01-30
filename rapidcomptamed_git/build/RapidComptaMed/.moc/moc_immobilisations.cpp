/****************************************************************************
** Meta object code from reading C++ file 'immobilisations.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/comptabilite_interfaces_src/immobilisations/immobilisations.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'immobilisations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_immobilisations[] = {

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
      17,   16,   16,   16, 0x08,
      27,   16,   16,   16, 0x08,
      37,   16,   16,   16, 0x08,
      50,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_immobilisations[] = {
    "immobilisations\0\0effacer()\0nouveau()\0"
    "rafraichir()\0setWhatsThis()\0"
};

void immobilisations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        immobilisations *_t = static_cast<immobilisations *>(_o);
        switch (_id) {
        case 0: _t->effacer(); break;
        case 1: _t->nouveau(); break;
        case 2: _t->rafraichir(); break;
        case 3: _t->setWhatsThis(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData immobilisations::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject immobilisations::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_immobilisations,
      qt_meta_data_immobilisations, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &immobilisations::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *immobilisations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *immobilisations::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_immobilisations))
        return static_cast<void*>(const_cast< immobilisations*>(this));
    if (!strcmp(_clname, "Ui::ImmobilisationsDialog"))
        return static_cast< Ui::ImmobilisationsDialog*>(const_cast< immobilisations*>(this));
    return QWidget::qt_metacast(_clname);
}

int immobilisations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
