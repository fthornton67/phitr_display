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
    Q_OBJECT
signals:
    void sendTime(QString time);
public:
    DeviceThread();
    void run();
    ~DeviceThread();
 protected:
    QBluetoothLocalDevice localDevice;
    QString localDeviceName;
    void timerHit();
    QString m_lastTime;

};

#endif // DEVICETHREAD_H
