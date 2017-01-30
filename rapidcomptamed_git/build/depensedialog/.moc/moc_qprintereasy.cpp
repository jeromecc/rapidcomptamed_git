/****************************************************************************
** Meta object code from reading C++ file 'qprintereasy.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/common/print/qprintereasy.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprintereasy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPrinterEasy[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   14,   13,   13, 0x0a,
      92,   86,   13,   13, 0x2a,
     133,  129,   13,   13, 0x2a,
     229,  161,   13,   13, 0x0a,
     365,  309,   13,   13, 0x2a,
     491,  441,   13,   13, 0x2a,
     605,  560,   13,   13, 0x2a,
     699,  668,   13,   13, 0x2a,
     760,  748,   13,   13, 0x2a,
     805,  795,   13,   13, 0x2a,
     869,  831,   13,   13, 0x0a,
     948,  922,   13,   13, 0x2a,
    1004,  997,   13,   13, 0x2a,
    1044, 1039,   13,   13, 0x2a,
    1100, 1093, 1070,   13, 0x0a,
    1135, 1120,   13,   13, 0x0a,
    1200, 1171,   13,   13, 0x0a,
    1290, 1246,   13,   13, 0x0a,
    1399, 1367,   13,   13, 0x2a,
    1485, 1472,   13,   13, 0x2a,
    1555, 1544,   13,   13, 0x2a,
    1650, 1605,   13,   13, 0x0a,
    1749, 1716,   13,   13, 0x2a,
    1825, 1811,   13,   13, 0x2a,
    1885, 1873,   13,   13, 0x2a,
    1974, 1924,   13,   13, 0x0a,
    2078, 2040,   13,   13, 0x2a,
    2159, 2140,   13,   13, 0x2a,
    2224, 2207,   13,   13, 0x2a,
    2263,   13,   13,   13, 0x0a,
    2296, 2285, 2280,   13, 0x0a,
    2323, 2317, 2280,   13, 0x0a,
    2348,   13, 2280,   13, 0x2a,
    2381, 2369, 2280,   13, 0x0a,
    2405, 2396, 2280,   13, 0x0a,
    2434, 2420, 2280,   13, 0x0a,
    2477, 2457, 2280,   13, 0x0a,
    2514, 2506, 2280,   13, 0x09,
    2531,   13, 2280,   13, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_QPrinterEasy[] = {
    "QPrinterEasy\0\0pix,p,alignement\0"
    "addWatermarkPixmap(QPixmap,Presence,Qt::AlignmentFlag)\0"
    "pix,p\0addWatermarkPixmap(QPixmap,Presence)\0"
    "pix\0addWatermarkPixmap(QPixmap)\0"
    "plainText,p,watermarkAlignment,textAlignment,font,color,orientation\0"
    "addWatermarkText(QString,Presence,Qt::Alignment,Qt::Alignment,QFont,QC"
    "olor,int)\0"
    "plainText,p,watermarkAlignment,textAlignment,font,color\0"
    "addWatermarkText(QString,Presence,Qt::Alignment,Qt::Alignment,QFont,QC"
    "olor)\0"
    "plainText,p,watermarkAlignment,textAlignment,font\0"
    "addWatermarkText(QString,Presence,Qt::Alignment,Qt::Alignment,QFont)\0"
    "plainText,p,watermarkAlignment,textAlignment\0"
    "addWatermarkText(QString,Presence,Qt::Alignment,Qt::Alignment)\0"
    "plainText,p,watermarkAlignment\0"
    "addWatermarkText(QString,Presence,Qt::Alignment)\0"
    "plainText,p\0addWatermarkText(QString,Presence)\0"
    "plainText\0addWatermarkText(QString)\0"
    "html,p,watermarkAlignment,orientation\0"
    "addWatermarkHtml(QString,Presence,Qt::Alignment,int)\0"
    "html,p,watermarkAlignment\0"
    "addWatermarkHtml(QString,Presence,Qt::Alignment)\0"
    "html,p\0addWatermarkHtml(QString,Presence)\0"
    "html\0addWatermarkHtml(QString)\0"
    "QPrinterEasyPreviewer*\0parent\0"
    "previewer(QWidget*)\0drawTo,printer\0"
    "previewToPixmap(QPixmap&,QPrinter*)\0"
    "drawTo,headerHtml,footerHtml\0"
    "previewHeaderFooter(QPixmap&,QString,QString)\0"
    "drawTo,doc,p,watermarkAlignment,orientation\0"
    "previewDocumentWatermark(QPixmap&,QTextDocument*,Presence,Qt::Alignmen"
    "t,int)\0"
    "drawTo,doc,p,watermarkAlignment\0"
    "previewDocumentWatermark(QPixmap&,QTextDocument*,Presence,Qt::Alignmen"
    "t)\0"
    "drawTo,doc,p\0"
    "previewDocumentWatermark(QPixmap&,QTextDocument*,Presence)\0"
    "drawTo,doc\0previewDocumentWatermark(QPixmap&,QTextDocument*)\0"
    "drawTo,html,p,watermarkAlignment,orientation\0"
    "previewHtmlWatermark(QPixmap&,QString,Presence,Qt::Alignment,int)\0"
    "drawTo,html,p,watermarkAlignment\0"
    "previewHtmlWatermark(QPixmap&,QString,Presence,Qt::Alignment)\0"
    "drawTo,html,p\0"
    "previewHtmlWatermark(QPixmap&,QString,Presence)\0"
    "drawTo,html\0previewHtmlWatermark(QPixmap&,QString)\0"
    "drawTo,plainText,p,watermarkAlignment,orientation\0"
    "previewTextWatermark(QPixmap&,QString,Presence,Qt::Alignment,int)\0"
    "drawTo,plainText,p,watermarkAlignment\0"
    "previewTextWatermark(QPixmap&,QString,Presence,Qt::Alignment)\0"
    "drawTo,plainText,p\0"
    "previewTextWatermark(QPixmap&,QString,Presence)\0"
    "drawTo,plainText\0"
    "previewTextWatermark(QPixmap&,QString)\0"
    "clearWatermark()\0bool\0docToPrint\0"
    "print(QTextDocument)\0state\0"
    "printWithDuplicata(bool)\0printWithDuplicata()\0"
    "htmlToPrint\0print(QString)\0fileName\0"
    "toPdf(QString)\0fileName,html\0"
    "toPdf(QString,QString)\0fileName,docToPrint\0"
    "toPdf(QString,QTextDocument)\0printer\0"
    "print(QPrinter*)\0print()\0"
};

void QPrinterEasy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPrinterEasy *_t = static_cast<QPrinterEasy *>(_o);
        switch (_id) {
        case 0: _t->addWatermarkPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< const Presence(*)>(_a[2])),(*reinterpret_cast< const Qt::AlignmentFlag(*)>(_a[3]))); break;
        case 1: _t->addWatermarkPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< const Presence(*)>(_a[2]))); break;
        case 2: _t->addWatermarkPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 3: _t->addWatermarkText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Presence(*)>(_a[2])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[3])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[4])),(*reinterpret_cast< const QFont(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< const int(*)>(_a[7]))); break;
        case 4: _t->addWatermarkText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Presence(*)>(_a[2])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[3])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[4])),(*reinterpret_cast< const QFont(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6]))); break;
        case 5: _t->addWatermarkText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Presence(*)>(_a[2])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[3])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[4])),(*reinterpret_cast< const QFont(*)>(_a[5]))); break;
        case 6: _t->addWatermarkText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Presence(*)>(_a[2])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[3])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[4]))); break;
        case 7: _t->addWatermarkText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Presence(*)>(_a[2])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[3]))); break;
        case 8: _t->addWatermarkText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Presence(*)>(_a[2]))); break;
        case 9: _t->addWatermarkText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->addWatermarkHtml((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Presence(*)>(_a[2])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 11: _t->addWatermarkHtml((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Presence(*)>(_a[2])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[3]))); break;
        case 12: _t->addWatermarkHtml((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Presence(*)>(_a[2]))); break;
        case 13: _t->addWatermarkHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: { QPrinterEasyPreviewer* _r = _t->previewer((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPrinterEasyPreviewer**>(_a[0]) = _r; }  break;
        case 15: _t->previewToPixmap((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< QPrinter*(*)>(_a[2]))); break;
        case 16: _t->previewHeaderFooter((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 17: _t->previewDocumentWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< QTextDocument*(*)>(_a[2])),(*reinterpret_cast< const Presence(*)>(_a[3])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        case 18: _t->previewDocumentWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< QTextDocument*(*)>(_a[2])),(*reinterpret_cast< const Presence(*)>(_a[3])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[4]))); break;
        case 19: _t->previewDocumentWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< QTextDocument*(*)>(_a[2])),(*reinterpret_cast< const Presence(*)>(_a[3]))); break;
        case 20: _t->previewDocumentWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< QTextDocument*(*)>(_a[2]))); break;
        case 21: _t->previewHtmlWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const Presence(*)>(_a[3])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        case 22: _t->previewHtmlWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const Presence(*)>(_a[3])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[4]))); break;
        case 23: _t->previewHtmlWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const Presence(*)>(_a[3]))); break;
        case 24: _t->previewHtmlWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: _t->previewTextWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const Presence(*)>(_a[3])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        case 26: _t->previewTextWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const Presence(*)>(_a[3])),(*reinterpret_cast< const Qt::Alignment(*)>(_a[4]))); break;
        case 27: _t->previewTextWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const Presence(*)>(_a[3]))); break;
        case 28: _t->previewTextWatermark((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->clearWatermark(); break;
        case 30: { bool _r = _t->print((*reinterpret_cast< const QTextDocument(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->printWithDuplicata((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->printWithDuplicata();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->print((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->toPdf((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->toPdf((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->toPdf((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QTextDocument(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->print();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPrinterEasy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPrinterEasy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPrinterEasy,
      qt_meta_data_QPrinterEasy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPrinterEasy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPrinterEasy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPrinterEasy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPrinterEasy))
        return static_cast<void*>(const_cast< QPrinterEasy*>(this));
    return QObject::qt_metacast(_clname);
}

int QPrinterEasy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}
static const uint qt_meta_data_QPrinterEasyPreviewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      30,   22, 0x0a195003,
      41,   22, 0x0a195003,

       0        // eod
};

static const char qt_meta_stringdata_QPrinterEasyPreviewer[] = {
    "QPrinterEasyPreviewer\0QString\0htmlHeader\0"
    "htmlFooter\0"
};

void QPrinterEasyPreviewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QPrinterEasyPreviewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPrinterEasyPreviewer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QPrinterEasyPreviewer,
      qt_meta_data_QPrinterEasyPreviewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPrinterEasyPreviewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPrinterEasyPreviewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPrinterEasyPreviewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPrinterEasyPreviewer))
        return static_cast<void*>(const_cast< QPrinterEasyPreviewer*>(this));
    return QWidget::qt_metacast(_clname);
}

int QPrinterEasyPreviewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = headerToHtml(); break;
        case 1: *reinterpret_cast< QString*>(_v) = footerToHtml(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setHeader(*reinterpret_cast< QString*>(_v)); break;
        case 1: setFooter(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
