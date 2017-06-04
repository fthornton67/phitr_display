#ifndef DEVICETHREAD_H
#define DEVICETHREAD_H

#include <QThread>
#include <QObject>
#include <qbluetoothdeviceinfo.h>
#include <qbluetoothaddress.h>
#include <QBluetoothLocalDevice>
#include <QList>
#include "deviceinfo.h"


class DeviceThread : public QThread
{
public:
    DeviceThread();
    void run();
 protected:
    QBluetoothLocalDevice localDevice;
    QString localDeviceName;
};

#endif // DEVICETHREAD_H
