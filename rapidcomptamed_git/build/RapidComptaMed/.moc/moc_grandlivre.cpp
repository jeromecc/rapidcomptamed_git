/****************************************************************************
** Meta object code from reading C++ file 'grandlivre.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/recettestriees/grand_livre/grandlivre.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grandlivre.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_grandlivre[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      42,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   11,   11,   11, 0x08,
      68,   11,   11,   11, 0x08,
      89,   84,   11,   11, 0x08,
     105,   11,   11,   11, 0x08,
     117,   11,   11,   11, 0x08,
     128,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_grandlivre[] = {
    "grandlivre\0\0signDoc(const QTextDocument*)\0"
    "deleteThread()\0imprimer()\0fonctionDeTri()\0"
    "text\0inThis(QString)\0sortiedoc()\0"
    "inThread()\0deleteSlotThread()\0"
};

void grandlivre::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        grandlivre *_t = static_cast<grandlivre *>(_o);
        switch (_id) {
        case 0: _t->signDoc((*reinterpret_cast< const QTextDocument*(*)>(_a[1]))); break;
        case 1: _t->deleteThread(); break;
        case 2: _t->imprimer(); break;
        case 3: _t->fonctionDeTri(); break;
        case 4: _t->inThis((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->sortiedoc(); break;
        case 6: _t->inThread(); break;
        case 7: _t->deleteSlotThread(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData grandlivre::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject grandlivre::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_grandlivre,
      qt_meta_data_grandlivre, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &grandlivre::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *grandlivre::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *grandlivre::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_grandlivre))
        return static_cast<void*>(const_cast< grandlivre*>(this));
    if (!strcmp(_clname, "Ui::GrandLivreDialog"))
        return static_cast< Ui::GrandLivreDialog*>(const_cast< grandlivre*>(this));
    return QWidget::qt_metacast(_clname);
}

int grandlivre::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void grandlivre::signDoc(const QTextDocument * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void grandlivre::deleteThread()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
