/****************************************************************************
** Meta object code from reading C++ file 'correctmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Graphics/correctmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'correctmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_correctmenu_t {
    QByteArrayData data[17];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_correctmenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_correctmenu_t qt_meta_stringdata_correctmenu = {
    {
QT_MOC_LITERAL(0, 0, 11), // "correctmenu"
QT_MOC_LITERAL(1, 12, 18), // "on_surname_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "on_name_clicked"
QT_MOC_LITERAL(4, 48, 19), // "on_lastname_clicked"
QT_MOC_LITERAL(5, 68, 15), // "on_work_clicked"
QT_MOC_LITERAL(6, 84, 15), // "on_post_clicked"
QT_MOC_LITERAL(7, 100, 18), // "on_payment_clicked"
QT_MOC_LITERAL(8, 119, 19), // "on_contract_clicked"
QT_MOC_LITERAL(9, 139, 7), // "surname"
QT_MOC_LITERAL(10, 147, 4), // "name"
QT_MOC_LITERAL(11, 152, 8), // "lastname"
QT_MOC_LITERAL(12, 161, 4), // "work"
QT_MOC_LITERAL(13, 166, 4), // "post"
QT_MOC_LITERAL(14, 171, 7), // "payment"
QT_MOC_LITERAL(15, 179, 8), // "contract"
QT_MOC_LITERAL(16, 188, 21) // "on_pushButton_clicked"

    },
    "correctmenu\0on_surname_clicked\0\0"
    "on_name_clicked\0on_lastname_clicked\0"
    "on_work_clicked\0on_post_clicked\0"
    "on_payment_clicked\0on_contract_clicked\0"
    "surname\0name\0lastname\0work\0post\0payment\0"
    "contract\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_correctmenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void correctmenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        correctmenu *_t = static_cast<correctmenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_surname_clicked(); break;
        case 1: _t->on_name_clicked(); break;
        case 2: _t->on_lastname_clicked(); break;
        case 3: _t->on_work_clicked(); break;
        case 4: _t->on_post_clicked(); break;
        case 5: _t->on_payment_clicked(); break;
        case 6: _t->on_contract_clicked(); break;
        case 7: _t->surname(); break;
        case 8: _t->name(); break;
        case 9: _t->lastname(); break;
        case 10: _t->work(); break;
        case 11: _t->post(); break;
        case 12: _t->payment(); break;
        case 13: _t->contract(); break;
        case 14: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject correctmenu::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_correctmenu.data,
      qt_meta_data_correctmenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *correctmenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *correctmenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_correctmenu.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int correctmenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
