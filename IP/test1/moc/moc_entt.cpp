/****************************************************************************
** Meta object code from reading C++ file 'entt.h'
**
** Created: Wed 30. May 18:37:20 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../entt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'entt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_entt[] = {

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
       6,    5,    5,    5, 0x0a,
      17,    5,    5,    5, 0x0a,
      25,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_entt[] = {
    "entt\0\0addclick()\0menu1()\0remove()\0"
};

const QMetaObject entt::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_entt,
      qt_meta_data_entt, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &entt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *entt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *entt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_entt))
        return static_cast<void*>(const_cast< entt*>(this));
    if (!strcmp(_clname, "expend"))
        return static_cast< expend*>(const_cast< entt*>(this));
    return QWidget::qt_metacast(_clname);
}

int entt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
