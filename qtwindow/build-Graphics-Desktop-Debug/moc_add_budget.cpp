/****************************************************************************
** Meta object code from reading C++ file 'add_budget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Graphics/add_budget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_budget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_add_budget_t {
    QByteArrayData data[10];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_add_budget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_add_budget_t qt_meta_stringdata_add_budget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "add_budget"
QT_MOC_LITERAL(1, 11, 10), // "ok_clicked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 27), // "on_budnameline_2_textEdited"
QT_MOC_LITERAL(4, 51, 4), // "arg1"
QT_MOC_LITERAL(5, 56, 28), // "on_budsurnameline_textEdited"
QT_MOC_LITERAL(6, 85, 29), // "on_budlastnameline_textEdited"
QT_MOC_LITERAL(7, 115, 25), // "on_budworkline_textEdited"
QT_MOC_LITERAL(8, 141, 25), // "on_budpostline_textEdited"
QT_MOC_LITERAL(9, 167, 16) // "on_budok_clicked"

    },
    "add_budget\0ok_clicked\0\0"
    "on_budnameline_2_textEdited\0arg1\0"
    "on_budsurnameline_textEdited\0"
    "on_budlastnameline_textEdited\0"
    "on_budworkline_textEdited\0"
    "on_budpostline_textEdited\0on_budok_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_add_budget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       6,    1,   56,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void add_budget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        add_budget *_t = static_cast<add_budget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ok_clicked(); break;
        case 1: _t->on_budnameline_2_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_budsurnameline_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_budlastnameline_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_budworkline_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_budpostline_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_budok_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (add_budget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&add_budget::ok_clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject add_budget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_add_budget.data,
      qt_meta_data_add_budget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *add_budget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *add_budget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_add_budget.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int add_budget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void add_budget::ok_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
