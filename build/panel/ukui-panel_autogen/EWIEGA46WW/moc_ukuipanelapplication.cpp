/****************************************************************************
** Meta object code from reading C++ file 'ukuipanelapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../panel/ukuipanelapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ukuipanelapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UKUIPanelApplication_t {
    QByteArrayData data[15];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UKUIPanelApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UKUIPanelApplication_t qt_meta_stringdata_UKUIPanelApplication = {
    {
QT_MOC_LITERAL(0, 0, 20), // "UKUIPanelApplication"
QT_MOC_LITERAL(1, 21, 11), // "pluginAdded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "pluginRemoved"
QT_MOC_LITERAL(4, 48, 11), // "addNewPanel"
QT_MOC_LITERAL(5, 60, 11), // "removePanel"
QT_MOC_LITERAL(6, 72, 10), // "UKUIPanel*"
QT_MOC_LITERAL(7, 83, 5), // "panel"
QT_MOC_LITERAL(8, 89, 17), // "handleScreenAdded"
QT_MOC_LITERAL(9, 107, 8), // "QScreen*"
QT_MOC_LITERAL(10, 116, 9), // "newScreen"
QT_MOC_LITERAL(11, 126, 15), // "screenDestroyed"
QT_MOC_LITERAL(12, 142, 9), // "screenObj"
QT_MOC_LITERAL(13, 152, 20), // "reloadPanelsAsNeeded"
QT_MOC_LITERAL(14, 173, 7) // "cleanup"

    },
    "UKUIPanelApplication\0pluginAdded\0\0"
    "pluginRemoved\0addNewPanel\0removePanel\0"
    "UKUIPanel*\0panel\0handleScreenAdded\0"
    "QScreen*\0newScreen\0screenDestroyed\0"
    "screenObj\0reloadPanelsAsNeeded\0cleanup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UKUIPanelApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,
      13,    0,   66,    2, 0x08 /* Private */,
      14,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QObjectStar,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UKUIPanelApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UKUIPanelApplication *_t = static_cast<UKUIPanelApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pluginAdded(); break;
        case 1: _t->pluginRemoved(); break;
        case 2: _t->addNewPanel(); break;
        case 3: _t->removePanel((*reinterpret_cast< UKUIPanel*(*)>(_a[1]))); break;
        case 4: _t->handleScreenAdded((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 5: _t->screenDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->reloadPanelsAsNeeded(); break;
        case 7: _t->cleanup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UKUIPanelApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UKUIPanelApplication::pluginAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UKUIPanelApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UKUIPanelApplication::pluginRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject UKUIPanelApplication::staticMetaObject = {
    { &LXQt::Application::staticMetaObject, qt_meta_stringdata_UKUIPanelApplication.data,
      qt_meta_data_UKUIPanelApplication,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UKUIPanelApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UKUIPanelApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UKUIPanelApplication.stringdata0))
        return static_cast<void*>(this);
    return LXQt::Application::qt_metacast(_clname);
}

int UKUIPanelApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LXQt::Application::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void UKUIPanelApplication::pluginAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UKUIPanelApplication::pluginRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
