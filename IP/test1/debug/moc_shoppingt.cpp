/****************************************************************************
** Meta object code from reading C++ file 'shoppingt.h'
**
** Created: Mon Apr 9 23:11:04 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../shoppingt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shoppingt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_shoppingt[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      19,   10,   10,   10, 0x0a,
      30,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_shoppingt[] = {
    "shoppingt\0\0menu1()\0addclick()\0remove()\0"
};

const QMetaObject shoppingt::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_shoppingt,
      qt_meta_data_shoppingt, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &shoppingt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *shoppingt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *shoppingt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_shoppingt))
        return static_cast<void*>(const_cast< shoppingt*>(this));
    if (!strcmp(_clname, "expend"))
        return static_cast< expend*>(const_cast< shoppingt*>(this));
    return QWidget::qt_metacast(_clname);
}

int shoppingt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: menu1(); break;
        case 1: addclick(); break;
        case 2: remove(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
