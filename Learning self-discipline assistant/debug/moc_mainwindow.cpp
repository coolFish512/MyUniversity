/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../nuo_learn_tool/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "on_pb_start_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "on_pb_end_clicked"
QT_MOC_LITERAL(4, 50, 18), // "on_pb_stop_clicked"
QT_MOC_LITERAL(5, 69, 24), // "on_rewardCulcu_triggered"
QT_MOC_LITERAL(6, 94, 24), // "on_LearnRecord_triggered"
QT_MOC_LITERAL(7, 119, 20), // "updataTimeAndDisplay"
QT_MOC_LITERAL(8, 140, 21), // "on_seeWords_triggered"
QT_MOC_LITERAL(9, 162, 29), // "on_check_english_ac_triggered"
QT_MOC_LITERAL(10, 192, 32), // "on_wrong_words_book_ac_triggered"
QT_MOC_LITERAL(11, 225, 29), // "on_check_chinese_ac_triggered"
QT_MOC_LITERAL(12, 255, 28), // "on_english_book_ac_triggered"
QT_MOC_LITERAL(13, 284, 19), // "on_set_ac_triggered"
QT_MOC_LITERAL(14, 304, 21) // "on_about_ac_triggered"

    },
    "MainWindow\0on_pb_start_clicked\0\0"
    "on_pb_end_clicked\0on_pb_stop_clicked\0"
    "on_rewardCulcu_triggered\0"
    "on_LearnRecord_triggered\0updataTimeAndDisplay\0"
    "on_seeWords_triggered\0"
    "on_check_english_ac_triggered\0"
    "on_wrong_words_book_ac_triggered\0"
    "on_check_chinese_ac_triggered\0"
    "on_english_book_ac_triggered\0"
    "on_set_ac_triggered\0on_about_ac_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pb_start_clicked(); break;
        case 1: _t->on_pb_end_clicked(); break;
        case 2: _t->on_pb_stop_clicked(); break;
        case 3: _t->on_rewardCulcu_triggered(); break;
        case 4: _t->on_LearnRecord_triggered(); break;
        case 5: _t->updataTimeAndDisplay(); break;
        case 6: _t->on_seeWords_triggered(); break;
        case 7: _t->on_check_english_ac_triggered(); break;
        case 8: _t->on_wrong_words_book_ac_triggered(); break;
        case 9: _t->on_check_chinese_ac_triggered(); break;
        case 10: _t->on_english_book_ac_triggered(); break;
        case 11: _t->on_set_ac_triggered(); break;
        case 12: _t->on_about_ac_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
