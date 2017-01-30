/****************************************************************************
** Meta object code from reading C++ file 'actesdispo.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/common/configure/actesdispo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actesdispo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_actesdispo[] = {

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
      12,   11,   11,   11, 0x09,
      29,   11,   11,   11, 0x09,
      35,   11,   11,   11, 0x09,
      52,   47,   11,   11, 0x09,
      95,   91,   11,   11, 0x09,
     137,  123,   11,   11, 0x09,
     171,   11,  163,   11, 0x09,
     198,   11,  163,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_actesdispo[] = {
    "actesdispo\0\0enregistreacte()\0add()\0"
    "deleteact()\0text\0"
    "on_totalValueEdit_textChanged(QString)\0"
    "act\0fillLabelsAndCombo(QString)\0"
    "actsComboText\0fillactsComboBox(QString)\0"
    "QString\0getcodenamebytablenumber()\0"
    "getfieldsfromtablenumber()\0"
};

void actesdispo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        actesdispo *_t = static_cast<actesdispo *>(_o);
        switch (_id) {
        case 0: _t->enregistreacte(); break;
        case 1: _t->add(); break;
        case 2: _t->deleteact(); break;
        case 3: _t->on_totalValueEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->fillLabelsAndCombo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->fillactsComboBox((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: { QString _r = _t->getcodenamebytablenumber();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->getfieldsfromtablenumber();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData actesdispo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject actesdispo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_actesdispo,
      qt_meta_data_actesdispo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &actesdispo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *actesdispo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *actesdispo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_actesdispo))
        return static_cast<void*>(const_cast< actesdispo*>(this));
    if (!strcmp(_clname, "Ui::ActesdispoDialog"))
        return static_cast< Ui::ActesdispoDialog*>(const_cast< actesdispo*>(this));
    return QWidget::qt_metacast(_clname);
}

int actesdispo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
