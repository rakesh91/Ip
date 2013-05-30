/****************************************************************************
** Meta object code from reading C++ file 'fuelb.h'
**
** Created: Mon Apr 9 23:12:32 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fuelb.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fuelb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fuelb[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      17,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_fuelb[] = {
    "fuelb\0\0submitt()\0menuscr()\0"
};

const QMetaObject fuelb::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_fuelb,
      qt_meta_data_fuelb, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fuelb::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fuelb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fuelb::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fuelb))
        return static_cast<void*>(const_cast< fuelb*>(this));
    if (!strcmp(_clname, "expend"))
        return static_cast< expend*>(const_cast< fuelb*>(this));
    if (!strcmp(_clname, "dab"))
        return static_cast< dab*>(const_cast< fuelb*>(this));
    return QWidget::qt_metacast(_clname);
}

int fuelb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: submitt(); break;
        case 1: menuscr(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
