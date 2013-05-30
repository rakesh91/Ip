/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created: Wed 30. May 18:37:18 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../menu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_menu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x0a,
      27,    5,    5,    5, 0x0a,
      48,    5,    5,    5, 0x0a,
      68,    5,    5,    5, 0x0a,
      87,    5,    5,    5, 0x0a,
     106,    5,    5,    5, 0x0a,
     125,    5,    5,    5, 0x0a,
     130,    5,    5,    5, 0x0a,
     137,    5,    5,    5, 0x0a,
     149,    5,    5,    5, 0x0a,
     162,    5,    5,    5, 0x0a,
     167,    5,    5,    5, 0x0a,
     172,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_menu[] = {
    "menu\0\0foodshowFullScreen()\0"
    "shopshowFullScreen()\0entshowFullScreen()\0"
    "fmshowFullScreen()\0fushowFullScreen()\0"
    "otshowFullScreen()\0go()\0canc()\0"
    "max_click()\0check_save()\0ex()\0ba()\0"
    "mor()\0"
};

const QMetaObject menu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_menu,
      qt_meta_data_menu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &menu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *menu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_menu))
        return static_cast<void*>(const_cast< menu*>(this));
    if (!strcmp(_clname, "expend"))
        return static_cast< expend*>(const_cast< menu*>(this));
    if (!strcmp(_clname, "dab"))
        return static_cast< dab*>(const_cast< menu*>(this));
    return QWidget::qt_metacast(_clname);
}

int menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: foodshowFullScreen(); break;
        case 1: shopshowFullScreen(); break;
        case 2: entshowFullScreen(); break;
        case 3: fmshowFullScreen(); break;
        case 4: fushowFullScreen(); break;
        case 5: otshowFullScreen(); break;
        case 6: go(); break;
        case 7: canc(); break;
        case 8: max_click(); break;
        case 9: check_save(); break;
        case 10: ex(); break;
        case 11: ba(); break;
        case 12: mor(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
