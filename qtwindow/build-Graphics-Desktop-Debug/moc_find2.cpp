/****************************************************************************
** Meta object code from reading C++ file 'find2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Graphics/find2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'find2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_find2_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_find2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_find2_t qt_meta_stringdata_find2 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "find2"
QT_MOC_LITERAL(1, 6, 8), // "ok_click"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 8), // "contract"
QT_MOC_LITERAL(4, 25, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(5, 47, 5), // "index"
QT_MOC_LITERAL(6, 53, 21) // "on_pushButton_clicked"

    },
    "find2\0ok_click\0\0contract\0on_comboBox_activated\0"
    "index\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_find2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void find2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        find2 *_t = static_cast<find2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ok_click(); break;
        case 1: _t->contract(); break;
        case 2: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (find2::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&find2::ok_click)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (find2::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&find2::contract)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject find2::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_find2.data,
      qt_meta_data_find2,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *find2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *find2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_find2.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int find2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void find2::ok_click()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void find2::contract()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
