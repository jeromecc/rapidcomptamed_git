/****************************************************************************
** Meta object code from reading C++ file 'configmedintuxini.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/common/configure/configmedintuxini.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configmedintuxini.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConfigMedintuxIni[] = {

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
      19,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ConfigMedintuxIni[] = {
    "ConfigMedintuxIni\0\0writeWidgetNewDatasInIniFile()\0"
};

void ConfigMedintuxIni::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConfigMedintuxIni *_t = static_cast<ConfigMedintuxIni *>(_o);
        switch (_id) {
        case 0: _t->writeWidgetNewDatasInIniFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ConfigMedintuxIni::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConfigMedintuxIni::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ConfigMedintuxIni,
      qt_meta_data_ConfigMedintuxIni, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConfigMedintuxIni::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConfigMedintuxIni::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConfigMedintuxIni::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigMedintuxIni))
        return static_cast<void*>(const_cast< ConfigMedintuxIni*>(this));
    if (!strcmp(_clname, "Ui::ConfigMedintuxIniWidget"))
        return static_cast< Ui::ConfigMedintuxIniWidget*>(const_cast< ConfigMedintuxIni*>(this));
    return QWidget::qt_metacast(_clname);
}

int ConfigMedintuxIni::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
