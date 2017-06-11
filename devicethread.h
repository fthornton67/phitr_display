#ifndef DEVICETHREAD_H
#define DEVICETHREAD_H

#include <QThread>
#include <QObject>
#include <qbluetoothdeviceinfo.h>
#include <qbluetoothaddress.h>
#include <QBluetoothLocalDevice>
#include <QList>
#include "deviceinfo.h"
#include <QVector>


class DeviceThread : public QThread
{

signals:
    void sendDeivce(QString deviceName,QString deviceAddress);
    void deviceHit();
    //void sendServices(QVector services);
public:
    DeviceThread();
    void run();
    //~DeviceThread();
 protected:
    void addBtDevice(QBluetoothAddress newDevice);
    QBluetoothLocalDevice localDevice;
    QString localDeviceName;
    void timerHit();
    QString m_lastTime;
 private:
    QVector<QBluetoothAddress*>* m_deviceList;

};

#endif // DEVICETHREAD_H
