/****************************************************************************
** Meta object code from reading C++ file 'res1.h'
**
** Created: Wed 30. May 18:37:25 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../res1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'res1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_res1[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x0a,
      14,    5,    5,    5, 0x0a,
      23,    5,    5,    5, 0x0a,
      32,    5,    5,    5, 0x0a,
      40,    5,    5,    5, 0x0a,
      49,    5,    5,    5, 0x0a,
      57,    5,    5,    5, 0x0a,
      65,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_res1[] = {
    "res1\0\0rallc()\0rfoodc()\0rshopc()\0rentc()\0"
    "rfuelc()\0rfamc()\0rothc()\0mai()\0"
};

const QMetaObject res1::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_res1,
      qt_meta_data_res1, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &res1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *res1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *res1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_res1))
        return static_cast<void*>(const_cast< res1*>(this));
    return QWidget::qt_metacast(_clname);
}

int res1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: rallc(); break;
        case 1: rfoodc(); break;
        case 2: rshopc(); break;
        case 3: rentc(); break;
        case 4: rfuelc(); break;
        case 5: rfamc(); break;
        case 6: rothc(); break;
        case 7: mai(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
