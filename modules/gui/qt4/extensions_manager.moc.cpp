/****************************************************************************
** Meta object code from reading C++ file 'extensions_manager.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"

#include "extensions_manager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extensions_manager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExtensionsManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   18,   39,   18, 0x0a,
      61,   18,   18,   18, 0x0a,
      80,   18,   18,   18, 0x0a,
     102,   99,   18,   18, 0x08,
     127,  119,   18,   18, 0x08,
     157,   18,   18,   18, 0x08,
     177,  119,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtensionsManager[] = {
    "ExtensionsManager\0\0extensionsUpdated()\0"
    "bool\0loadExtensions()\0unloadExtensions()\0"
    "reloadExtensions()\0id\0triggerMenu(int)\0"
    "p_input\0inputChanged(input_thread_t*)\0"
    "playingChanged(int)\0metaChanged(input_item_t*)\0"
};

void ExtensionsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExtensionsManager *_t = static_cast<ExtensionsManager *>(_o);
        switch (_id) {
        case 0: _t->extensionsUpdated(); break;
        case 1: { bool _r = _t->loadExtensions();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->unloadExtensions(); break;
        case 3: _t->reloadExtensions(); break;
        case 4: _t->triggerMenu((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->inputChanged((*reinterpret_cast< input_thread_t*(*)>(_a[1]))); break;
        case 6: _t->playingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->metaChanged((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExtensionsManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExtensionsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExtensionsManager,
      qt_meta_data_ExtensionsManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtensionsManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtensionsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtensionsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtensionsManager))
        return static_cast<void*>(const_cast< ExtensionsManager*>(this));
    return QObject::qt_metacast(_clname);
}

int ExtensionsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ExtensionsManager::extensionsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
