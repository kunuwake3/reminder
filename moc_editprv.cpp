/****************************************************************************
** Meta object code from reading C++ file 'editprv.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editprv.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editprv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_editprv_t {
    QByteArrayData data[13];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_editprv_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_editprv_t qt_meta_stringdata_editprv = {
    {
QT_MOC_LITERAL(0, 0, 7), // "editprv"
QT_MOC_LITERAL(1, 8, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(4, 55, 19), // "on_edit_btn_clicked"
QT_MOC_LITERAL(5, 75, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 99, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(7, 126, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 138, 5), // "index"
QT_MOC_LITERAL(9, 144, 22), // "on_cancel_edit_clicked"
QT_MOC_LITERAL(10, 167, 19), // "on_save_btn_clicked"
QT_MOC_LITERAL(11, 187, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(12, 208, 23) // "on_upd_all_base_clicked"

    },
    "editprv\0on_pushButton_clicked\0\0"
    "on_pushButton_3_clicked\0on_edit_btn_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_tableView_doubleClicked\0QModelIndex\0"
    "index\0on_cancel_edit_clicked\0"
    "on_save_btn_clicked\0on_tableView_clicked\0"
    "on_upd_all_base_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_editprv[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void editprv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        editprv *_t = static_cast<editprv *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->on_edit_btn_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_cancel_edit_clicked(); break;
        case 6: _t->on_save_btn_clicked(); break;
        case 7: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_upd_all_base_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject editprv::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_editprv.data,
      qt_meta_data_editprv,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *editprv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *editprv::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_editprv.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int editprv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
