/****************************************************************************
** Meta object code from reading C++ file 'menuwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stuHealthManageSystem/menuwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menuwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_menuWidget_t {
    QByteArrayData data[12];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_menuWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_menuWidget_t qt_meta_stringdata_menuWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "menuWidget"
QT_MOC_LITERAL(1, 11, 7), // "display"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "number"
QT_MOC_LITERAL(4, 27, 20), // "on_newButton_clicked"
QT_MOC_LITERAL(5, 48, 23), // "on_insertButton_clicked"
QT_MOC_LITERAL(6, 72, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(7, 96, 21), // "on_findButton_clicked"
QT_MOC_LITERAL(8, 118, 22), // "on_printButton_clicked"
QT_MOC_LITERAL(9, 141, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(10, 163, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(11, 185, 21) // "on_loadButton_clicked"

    },
    "menuWidget\0display\0\0number\0"
    "on_newButton_clicked\0on_insertButton_clicked\0"
    "on_deleteButton_clicked\0on_findButton_clicked\0"
    "on_printButton_clicked\0on_exitButton_clicked\0"
    "on_saveButton_clicked\0on_loadButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_menuWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
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

void menuWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        menuWidget *_t = static_cast<menuWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_newButton_clicked(); break;
        case 2: _t->on_insertButton_clicked(); break;
        case 3: _t->on_deleteButton_clicked(); break;
        case 4: _t->on_findButton_clicked(); break;
        case 5: _t->on_printButton_clicked(); break;
        case 6: _t->on_exitButton_clicked(); break;
        case 7: _t->on_saveButton_clicked(); break;
        case 8: _t->on_loadButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (menuWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&menuWidget::display)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject menuWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_menuWidget.data,
      qt_meta_data_menuWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *menuWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *menuWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_menuWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int menuWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void menuWidget::display(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
