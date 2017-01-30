/****************************************************************************
** Meta object code from reading C++ file 'utilisateur.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/common/configure/utilisateur.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'utilisateur.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_utilisateur[] = {

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
      13,   12,   12,   12, 0x09,
      27,   12,   12,   12, 0x09,
      40,   12,   12,   12, 0x09,
      58,   12,   12,   12, 0x09,
      77,   12,   12,   12, 0x09,
      88,   12,   12,   12, 0x09,
      98,   12,   12,   12, 0x09,
     115,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_utilisateur[] = {
    "utilisateur\0\0enregistrer()\0deleteUser()\0"
    "remplirLogin(int)\0fillEdits(QString)\0"
    "modifier()\0choisir()\0prepareNewUser()\0"
    "verrouIsChecked(bool)\0"
};

void utilisateur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        utilisateur *_t = static_cast<utilisateur *>(_o);
        switch (_id) {
        case 0: _t->enregistrer(); break;
        case 1: _t->deleteUser(); break;
        case 2: _t->remplirLogin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->fillEdits((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->modifier(); break;
        case 5: _t->choisir(); break;
        case 6: _t->prepareNewUser(); break;
        case 7: _t->verrouIsChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData utilisateur::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject utilisateur::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_utilisateur,
      qt_meta_data_utilisateur, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &utilisateur::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *utilisateur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *utilisateur::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_utilisateur))
        return static_cast<void*>(const_cast< utilisateur*>(this));
    if (!strcmp(_clname, "Ui::UtilisateursDialog"))
        return static_cast< Ui::UtilisateursDialog*>(const_cast< utilisateur*>(this));
    return QWidget::qt_metacast(_clname);
}

int utilisateur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
