/****************************************************************************
** Meta object code from reading C++ file 'sauvedialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sauvegarde/sauvedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sauvedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_sauvedialogue[] = {

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
      15,   14,   14,   14, 0x09,
      31,   14,   14,   14, 0x09,
      58,   14,   54,   14, 0x09,
      76,   14,   14,   14, 0x09,
      85,   14,   14,   14, 0x09,
     101,   14,   14,   14, 0x09,
     113,   14,   14,   14, 0x09,
     131,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_sauvedialogue[] = {
    "sauvedialogue\0\0fonctionrouge()\0"
    "mafonctionsauvegarde()\0int\0fonctioncouleur()\0"
    "fermer()\0trouverchemin()\0recuperer()\0"
    "searchMysqldump()\0readout()\0"
};

void sauvedialogue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        sauvedialogue *_t = static_cast<sauvedialogue *>(_o);
        switch (_id) {
        case 0: _t->fonctionrouge(); break;
        case 1: _t->mafonctionsauvegarde(); break;
        case 2: { int _r = _t->fonctioncouleur();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->fermer(); break;
        case 4: _t->trouverchemin(); break;
        case 5: _t->recuperer(); break;
        case 6: _t->searchMysqldump(); break;
        case 7: _t->readout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData sauvedialogue::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject sauvedialogue::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sauvedialogue,
      qt_meta_data_sauvedialogue, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &sauvedialogue::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *sauvedialogue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *sauvedialogue::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_sauvedialogue))
        return static_cast<void*>(const_cast< sauvedialogue*>(this));
    if (!strcmp(_clname, "Ui::SauveDialog"))
        return static_cast< Ui::SauveDialog*>(const_cast< sauvedialogue*>(this));
    return QWidget::qt_metacast(_clname);
}

int sauvedialogue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
