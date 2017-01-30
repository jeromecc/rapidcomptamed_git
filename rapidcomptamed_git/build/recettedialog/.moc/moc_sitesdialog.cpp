/****************************************************************************
** Meta object code from reading C++ file 'sitesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/common/configure/sitesdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sitesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_sites[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x09,
      30,    6,    6,    6, 0x09,
      37,    6,    6,    6, 0x09,
      51,    6,    6,    6, 0x09,
      57,    6,    6,    6, 0x09,
      63,    6,    6,    6, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_sites[] = {
    "sites\0\0inseredanstablesites()\0voir()\0"
    "integrer(int)\0add()\0del()\0"
    "chooseAsPreferential()\0"
};

void sites::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        sites *_t = static_cast<sites *>(_o);
        switch (_id) {
        case 0: _t->inseredanstablesites(); break;
        case 1: _t->voir(); break;
        case 2: _t->integrer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->add(); break;
        case 4: _t->del(); break;
        case 5: _t->chooseAsPreferential(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData sites::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject sites::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sites,
      qt_meta_data_sites, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &sites::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *sites::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *sites::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_sites))
        return static_cast<void*>(const_cast< sites*>(this));
    if (!strcmp(_clname, "Ui::SitesDialog"))
        return static_cast< Ui::SitesDialog*>(const_cast< sites*>(this));
    return QWidget::qt_metacast(_clname);
}

int sites::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
