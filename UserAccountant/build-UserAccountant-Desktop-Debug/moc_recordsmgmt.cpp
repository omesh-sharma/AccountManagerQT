/****************************************************************************
** Meta object code from reading C++ file 'recordsmgmt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UserAccountant/recordsmgmt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recordsmgmt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_recordsMgmt_t {
    QByteArrayData data[17];
    char stringdata0[381];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_recordsMgmt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_recordsMgmt_t qt_meta_stringdata_recordsMgmt = {
    {
QT_MOC_LITERAL(0, 0, 11), // "recordsMgmt"
QT_MOC_LITERAL(1, 12, 21), // "recorsScreenTriggered"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "showNextScreen"
QT_MOC_LITERAL(4, 50, 32), // "on_accountNumber_editingFinished"
QT_MOC_LITERAL(5, 83, 27), // "on_userName_editingFinished"
QT_MOC_LITERAL(6, 111, 30), // "on_Description_editingFinished"
QT_MOC_LITERAL(7, 142, 23), // "on_Date_editingFinished"
QT_MOC_LITERAL(8, 166, 26), // "on_checkNo_editingFinished"
QT_MOC_LITERAL(9, 193, 37), // "on_credit_debit_cursorPositio..."
QT_MOC_LITERAL(10, 231, 4), // "arg1"
QT_MOC_LITERAL(11, 236, 4), // "arg2"
QT_MOC_LITERAL(12, 241, 22), // "on_saveRecords_clicked"
QT_MOC_LITERAL(13, 264, 26), // "on_exitMainRecords_clicked"
QT_MOC_LITERAL(14, 291, 28), // "on_resetCurretnInput_clicked"
QT_MOC_LITERAL(15, 320, 34), // "on_previousBalance_editingFin..."
QT_MOC_LITERAL(16, 355, 25) // "on_displayRecords_clicked"

    },
    "recordsMgmt\0recorsScreenTriggered\0\0"
    "showNextScreen\0on_accountNumber_editingFinished\0"
    "on_userName_editingFinished\0"
    "on_Description_editingFinished\0"
    "on_Date_editingFinished\0"
    "on_checkNo_editingFinished\0"
    "on_credit_debit_cursorPositionChanged\0"
    "arg1\0arg2\0on_saveRecords_clicked\0"
    "on_exitMainRecords_clicked\0"
    "on_resetCurretnInput_clicked\0"
    "on_previousBalance_editingFinished\0"
    "on_displayRecords_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_recordsMgmt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    2,   86,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void recordsMgmt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        recordsMgmt *_t = static_cast<recordsMgmt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recorsScreenTriggered(); break;
        case 1: _t->showNextScreen(); break;
        case 2: _t->on_accountNumber_editingFinished(); break;
        case 3: _t->on_userName_editingFinished(); break;
        case 4: _t->on_Description_editingFinished(); break;
        case 5: _t->on_Date_editingFinished(); break;
        case 6: _t->on_checkNo_editingFinished(); break;
        case 7: _t->on_credit_debit_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_saveRecords_clicked(); break;
        case 9: _t->on_exitMainRecords_clicked(); break;
        case 10: _t->on_resetCurretnInput_clicked(); break;
        case 11: _t->on_previousBalance_editingFinished(); break;
        case 12: _t->on_displayRecords_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (recordsMgmt::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&recordsMgmt::recorsScreenTriggered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (recordsMgmt::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&recordsMgmt::showNextScreen)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject recordsMgmt::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_recordsMgmt.data,
      qt_meta_data_recordsMgmt,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *recordsMgmt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *recordsMgmt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_recordsMgmt.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int recordsMgmt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void recordsMgmt::recorsScreenTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void recordsMgmt::showNextScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
