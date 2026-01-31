/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../widget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6WidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto Widget::qt_create_metaobjectdata<qt_meta_tag_ZN6WidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Widget",
        "on_pushButton_clicked",
        "",
        "on_ProgressSilder_actionTriggered",
        "action",
        "on_SoundSilder_actionTriggered",
        "on_Front_clicked",
        "on_StartStop_clicked",
        "on_Next_clicked",
        "on_RandomPlay_checkStateChanged",
        "Qt::CheckState",
        "arg1",
        "updateProgress",
        "playAt",
        "index",
        "playNext",
        "playPrevious",
        "saveSettings",
        "loadSettings",
        "updateVideoBoxSize",
        "filePath",
        "onSpeedChanged",
        "speedText",
        "toggleFullScreen",
        "keyPressEvent",
        "QKeyEvent*",
        "event",
        "eventFilter",
        "watched",
        "QEvent*"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ProgressSilder_actionTriggered'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'on_SoundSilder_actionTriggered'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'on_Front_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_StartStop_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_Next_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_RandomPlay_checkStateChanged'
        QtMocHelpers::SlotData<void(const Qt::CheckState &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'updateProgress'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'playAt'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'playNext'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'playPrevious'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveSettings'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadSettings'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateVideoBoxSize'
        QtMocHelpers::SlotData<void(const QString &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 20 },
        }}),
        // Slot 'onSpeedChanged'
        QtMocHelpers::SlotData<void(const QString &)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 22 },
        }}),
        // Slot 'toggleFullScreen'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'keyPressEvent'
        QtMocHelpers::SlotData<void(QKeyEvent *)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'eventFilter'
        QtMocHelpers::SlotData<bool(QObject *, QEvent *)>(27, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { QMetaType::QObjectStar, 28 }, { 0x80000000 | 29, 26 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Widget, qt_meta_tag_ZN6WidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6WidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6WidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6WidgetE_t>.metaTypes,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Widget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_ProgressSilder_actionTriggered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_SoundSilder_actionTriggered((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_Front_clicked(); break;
        case 4: _t->on_StartStop_clicked(); break;
        case 5: _t->on_Next_clicked(); break;
        case 6: _t->on_RandomPlay_checkStateChanged((*reinterpret_cast<std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 7: _t->updateProgress(); break;
        case 8: _t->playAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->playNext(); break;
        case 10: _t->playPrevious(); break;
        case 11: _t->saveSettings(); break;
        case 12: _t->loadSettings(); break;
        case 13: _t->updateVideoBoxSize((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->onSpeedChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->toggleFullScreen(); break;
        case 16: _t->keyPressEvent((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 17: { bool _r = _t->eventFilter((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QEvent*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6WidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
