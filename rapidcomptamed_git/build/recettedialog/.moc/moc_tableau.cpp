/****************************************************************************
** Meta object code from reading C++ file 'tableau.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/recettestriees/etatdesdus/tableau.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tableau.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tabledialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tabledialog[] = {
    "tabledialog\0\0textechange(QString)\0"
};

void tabledialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tabledialog *_t = static_cast<tabledialog *>(_o);
        switch (_id) {
        case 0: _t->textechange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tabledialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tabledialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tabledialog,
      qt_meta_data_tabledialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tabledialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tabledialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tabledialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tabledialog))
        return static_cast<void*>(const_cast< tabledialog*>(this));
    if (!strcmp(_clname, "Ui::TableauDialog"))
        return static_cast< Ui::TableauDialog*>(const_cast< tabledialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int tabledialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_tableList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_tableList[] = {
    "tableList\0"
};

void tableList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tableList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tableList::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tableList,
      qt_meta_data_tableList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tableList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tableList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tableList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tableList))
        return static_cast<void*>(const_cast< tableList*>(this));
    if (!strcmp(_clname, "Ui::TableauDialog"))
        return static_cast< Ui::TableauDialog*>(const_cast< tableList*>(this));
    return QDialog::qt_metacast(_clname);
}

int tableList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
