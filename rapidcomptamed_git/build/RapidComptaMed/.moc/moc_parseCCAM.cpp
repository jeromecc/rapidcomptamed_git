/****************************************************************************
** Meta object code from reading C++ file 'parseCCAM.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/parse_CCAM/parseCCAM.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parseCCAM.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ParseCcam[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      27,   10,   10,   10, 0x08,
      64,   54,   46,   10, 0x08,
      90,   10,   10,   10, 0x08,
     122,  117,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ParseCcam[] = {
    "ParseCcam\0\0searchCsvFile()\0"
    "fillCcamDatabase()\0QString\0csvString\0"
    "sineCommaCsvFile(QString)\0"
    "ccambasethreadIsFinished()\0info\0"
    "getDataFromThread(QString)\0"
};

void ParseCcam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ParseCcam *_t = static_cast<ParseCcam *>(_o);
        switch (_id) {
        case 0: _t->searchCsvFile(); break;
        case 1: _t->fillCcamDatabase(); break;
        case 2: { QString _r = _t->sineCommaCsvFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->ccambasethreadIsFinished(); break;
        case 4: _t->getDataFromThread((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ParseCcam::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ParseCcam::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ParseCcam,
      qt_meta_data_ParseCcam, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ParseCcam::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ParseCcam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ParseCcam::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ParseCcam))
        return static_cast<void*>(const_cast< ParseCcam*>(this));
    if (!strcmp(_clname, "Ui::ParseWidget"))
        return static_cast< Ui::ParseWidget*>(const_cast< ParseCcam*>(this));
    return QWidget::qt_metacast(_clname);
}

int ParseCcam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
