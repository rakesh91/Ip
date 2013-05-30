/****************************************************************************
** Meta object code from reading C++ file 'othert.h'
**
** Created: Mon Apr 9 23:13:44 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../othert.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'othert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_othert[] = {

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
       8,    7,    7,    7, 0x0a,
      19,    7,    7,    7, 0x0a,
      27,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_othert[] = {
    "othert\0\0addclick()\0menu1()\0remove()\0"
};

const QMetaObject othert::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_othert,
      qt_meta_data_othert, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &othert::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *othert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *othert::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_othert))
        return static_cast<void*>(const_cast< othert*>(this));
    if (!strcmp(_clname, "expend"))
        return static_cast< expend*>(const_cast< othert*>(this));
    return QWidget::qt_metacast(_clname);
}

int othert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addclick(); break;
        case 1: menu1(); break;
        case 2: remove(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
