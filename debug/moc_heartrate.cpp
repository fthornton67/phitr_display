/****************************************************************************
** Meta object code from reading C++ file 'heartrate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../heartrate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'heartrate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HeartRate_t {
    QByteArrayData data[53];
    char stringdata0[723];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HeartRate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HeartRate_t qt_meta_stringdata_HeartRate = {
    {
QT_MOC_LITERAL(0, 0, 9), // "HeartRate"
QT_MOC_LITERAL(1, 10, 14), // "messageChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "nameChanged"
QT_MOC_LITERAL(4, 38, 9), // "hrChanged"
QT_MOC_LITERAL(5, 48, 14), // "averageChanged"
QT_MOC_LITERAL(6, 63, 11), // "timeChanged"
QT_MOC_LITERAL(7, 75, 15), // "caloriesChanged"
QT_MOC_LITERAL(8, 91, 12), // "deviceSearch"
QT_MOC_LITERAL(9, 104, 16), // "connectToService"
QT_MOC_LITERAL(10, 121, 7), // "address"
QT_MOC_LITERAL(11, 129, 17), // "disconnectService"
QT_MOC_LITERAL(12, 147, 9), // "startDemo"
QT_MOC_LITERAL(13, 157, 13), // "obtainResults"
QT_MOC_LITERAL(14, 171, 12), // "measurements"
QT_MOC_LITERAL(15, 184, 5), // "index"
QT_MOC_LITERAL(16, 190, 16), // "measurementsSize"
QT_MOC_LITERAL(17, 207, 13), // "deviceAddress"
QT_MOC_LITERAL(18, 221, 10), // "numDevices"
QT_MOC_LITERAL(19, 232, 9), // "addDevice"
QT_MOC_LITERAL(20, 242, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(21, 263, 12), // "scanFinished"
QT_MOC_LITERAL(22, 276, 15), // "deviceScanError"
QT_MOC_LITERAL(23, 292, 37), // "QBluetoothDeviceDiscoveryAgen..."
QT_MOC_LITERAL(24, 330, 17), // "serviceDiscovered"
QT_MOC_LITERAL(25, 348, 14), // "QBluetoothUuid"
QT_MOC_LITERAL(26, 363, 15), // "serviceScanDone"
QT_MOC_LITERAL(27, 379, 15), // "controllerError"
QT_MOC_LITERAL(28, 395, 27), // "QLowEnergyController::Error"
QT_MOC_LITERAL(29, 423, 15), // "deviceConnected"
QT_MOC_LITERAL(30, 439, 18), // "deviceDisconnected"
QT_MOC_LITERAL(31, 458, 19), // "serviceStateChanged"
QT_MOC_LITERAL(32, 478, 31), // "QLowEnergyService::ServiceState"
QT_MOC_LITERAL(33, 510, 1), // "s"
QT_MOC_LITERAL(34, 512, 20), // "updateHeartRateValue"
QT_MOC_LITERAL(35, 533, 24), // "QLowEnergyCharacteristic"
QT_MOC_LITERAL(36, 558, 1), // "c"
QT_MOC_LITERAL(37, 560, 5), // "value"
QT_MOC_LITERAL(38, 566, 24), // "confirmedDescriptorWrite"
QT_MOC_LITERAL(39, 591, 20), // "QLowEnergyDescriptor"
QT_MOC_LITERAL(40, 612, 1), // "d"
QT_MOC_LITERAL(41, 614, 12), // "serviceError"
QT_MOC_LITERAL(42, 627, 31), // "QLowEnergyService::ServiceError"
QT_MOC_LITERAL(43, 659, 1), // "e"
QT_MOC_LITERAL(44, 661, 11), // "receiveDemo"
QT_MOC_LITERAL(45, 673, 4), // "name"
QT_MOC_LITERAL(46, 678, 7), // "message"
QT_MOC_LITERAL(47, 686, 2), // "hr"
QT_MOC_LITERAL(48, 689, 5), // "maxHR"
QT_MOC_LITERAL(49, 695, 5), // "minHR"
QT_MOC_LITERAL(50, 701, 7), // "average"
QT_MOC_LITERAL(51, 709, 4), // "time"
QT_MOC_LITERAL(52, 714, 8) // "calories"

    },
    "HeartRate\0messageChanged\0\0nameChanged\0"
    "hrChanged\0averageChanged\0timeChanged\0"
    "caloriesChanged\0deviceSearch\0"
    "connectToService\0address\0disconnectService\0"
    "startDemo\0obtainResults\0measurements\0"
    "index\0measurementsSize\0deviceAddress\0"
    "numDevices\0addDevice\0QBluetoothDeviceInfo\0"
    "scanFinished\0deviceScanError\0"
    "QBluetoothDeviceDiscoveryAgent::Error\0"
    "serviceDiscovered\0QBluetoothUuid\0"
    "serviceScanDone\0controllerError\0"
    "QLowEnergyController::Error\0deviceConnected\0"
    "deviceDisconnected\0serviceStateChanged\0"
    "QLowEnergyService::ServiceState\0s\0"
    "updateHeartRateValue\0QLowEnergyCharacteristic\0"
    "c\0value\0confirmedDescriptorWrite\0"
    "QLowEnergyDescriptor\0d\0serviceError\0"
    "QLowEnergyService::ServiceError\0e\0"
    "receiveDemo\0name\0message\0hr\0maxHR\0"
    "minHR\0average\0time\0calories"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HeartRate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       8,  206, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  154,    2, 0x06 /* Public */,
       3,    0,  155,    2, 0x06 /* Public */,
       4,    0,  156,    2, 0x06 /* Public */,
       5,    0,  157,    2, 0x06 /* Public */,
       6,    0,  158,    2, 0x06 /* Public */,
       7,    0,  159,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  160,    2, 0x0a /* Public */,
       9,    1,  161,    2, 0x0a /* Public */,
      11,    0,  164,    2, 0x0a /* Public */,
      12,    0,  165,    2, 0x0a /* Public */,
      13,    0,  166,    2, 0x0a /* Public */,
      14,    1,  167,    2, 0x0a /* Public */,
      16,    0,  170,    2, 0x0a /* Public */,
      17,    0,  171,    2, 0x0a /* Public */,
      18,    0,  172,    2, 0x0a /* Public */,
      19,    1,  173,    2, 0x08 /* Private */,
      21,    0,  176,    2, 0x08 /* Private */,
      22,    1,  177,    2, 0x08 /* Private */,
      24,    1,  180,    2, 0x08 /* Private */,
      26,    0,  183,    2, 0x08 /* Private */,
      27,    1,  184,    2, 0x08 /* Private */,
      29,    0,  187,    2, 0x08 /* Private */,
      30,    0,  188,    2, 0x08 /* Private */,
      31,    1,  189,    2, 0x08 /* Private */,
      34,    2,  192,    2, 0x08 /* Private */,
      38,    2,  197,    2, 0x08 /* Private */,
      41,    1,  202,    2, 0x08 /* Private */,
      44,    0,  205,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,   15,
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 35, QMetaType::QByteArray,   36,   37,
    QMetaType::Void, 0x80000000 | 39, QMetaType::QByteArray,   40,   37,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void,

 // properties: name, type, flags
      45, QMetaType::QVariant, 0x00495001,
      46, QMetaType::QString, 0x00495001,
      47, QMetaType::Int, 0x00495001,
      48, QMetaType::Int, 0x00495001,
      49, QMetaType::Int, 0x00495001,
      50, QMetaType::Float, 0x00495001,
      51, QMetaType::Int, 0x00495001,
      52, QMetaType::Float, 0x00495001,

 // properties: notify_signal_id
       1,
       0,
       2,
       3,
       3,
       3,
       4,
       5,

       0        // eod
};

void HeartRate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HeartRate *_t = static_cast<HeartRate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->hrChanged(); break;
        case 3: _t->averageChanged(); break;
        case 4: _t->timeChanged(); break;
        case 5: _t->caloriesChanged(); break;
        case 6: _t->deviceSearch(); break;
        case 7: _t->connectToService((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->disconnectService(); break;
        case 9: _t->startDemo(); break;
        case 10: _t->obtainResults(); break;
        case 11: { int _r = _t->measurements((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->measurementsSize();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->deviceAddress();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->numDevices();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: _t->addDevice((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 16: _t->scanFinished(); break;
        case 17: _t->deviceScanError((*reinterpret_cast< QBluetoothDeviceDiscoveryAgent::Error(*)>(_a[1]))); break;
        case 18: _t->serviceDiscovered((*reinterpret_cast< const QBluetoothUuid(*)>(_a[1]))); break;
        case 19: _t->serviceScanDone(); break;
        case 20: _t->controllerError((*reinterpret_cast< QLowEnergyController::Error(*)>(_a[1]))); break;
        case 21: _t->deviceConnected(); break;
        case 22: _t->deviceDisconnected(); break;
        case 23: _t->serviceStateChanged((*reinterpret_cast< QLowEnergyService::ServiceState(*)>(_a[1]))); break;
        case 24: _t->updateHeartRateValue((*reinterpret_cast< const QLowEnergyCharacteristic(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 25: _t->confirmedDescriptorWrite((*reinterpret_cast< const QLowEnergyDescriptor(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 26: _t->serviceError((*reinterpret_cast< QLowEnergyService::ServiceError(*)>(_a[1]))); break;
        case 27: _t->receiveDemo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothUuid >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyController::Error >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyService::ServiceState >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLowEnergyService::ServiceError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HeartRate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HeartRate::messageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HeartRate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HeartRate::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HeartRate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HeartRate::hrChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (HeartRate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HeartRate::averageChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (HeartRate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HeartRate::timeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (HeartRate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HeartRate::caloriesChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HeartRate *_t = static_cast<HeartRate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->message(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->hR(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->maxHR(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->minHR(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->average(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->time(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->caloriesCalculation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject HeartRate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HeartRate.data,
      qt_meta_data_HeartRate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HeartRate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeartRate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HeartRate.stringdata0))
        return static_cast<void*>(const_cast< HeartRate*>(this));
    return QObject::qt_metacast(_clname);
}

int HeartRate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HeartRate::messageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void HeartRate::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void HeartRate::hrChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void HeartRate::averageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void HeartRate::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void HeartRate::caloriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
