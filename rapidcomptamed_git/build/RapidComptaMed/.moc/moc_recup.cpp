/****************************************************************************
** Meta object code from reading C++ file 'recup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sauvegarde/recup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_recup[] = {

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
       7,    6,    6,    6, 0x08,
      26,    6,    6,    6, 0x08,
      33,    6,    6,    6, 0x08,
      50,   45,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_recup[] = {
    "recup\0\0setWhatsThisMode()\0wait()\0"
    "restaurer()\0text\0drtuxselected(QString)\0"
};

void recup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        recup *_t = static_cast<recup *>(_o);
        switch (_id) {
        case 0: _t->setWhatsThisMode(); break;
        case 1: _t->wait(); break;
        case 2: _t->restaurer(); break;
        case 3: _t->drtuxselected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData recup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject recup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_recup,
      qt_meta_data_recup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &recup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *recup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *recup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_recup))
        return static_cast<void*>(const_cast< recup*>(this));
    if (!strcmp(_clname, "Ui::RecupDialog"))
        return static_cast< Ui::RecupDialog*>(const_cast< recup*>(this));
    return QWidget::qt_metacast(_clname);
}

int recup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
