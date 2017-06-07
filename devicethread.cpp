#include "devicethread.h"
#include <QString>
#include <QDebug>
#include <QDateTime>
#include <QVector>
#include <QTimer>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothDeviceInfo>
#include <QLowEnergyController>
#include <QLowEnergyService>
#include <qbluetoothuuid.h>


DeviceThread::DeviceThread()
{
    //printf("created dt object\n");
}
void DeviceThread::run()
{
    qDebug("device thread running\n");
    printf("device thred running\n");


    qDebug("local device is %d\n",localDevice.isValid());
    // Check if Bluetooth is available on this device
    if (false && localDevice.isValid()) {

        // Turn Bluetooth on
        localDevice.powerOn();

        // Read local device name
        localDeviceName = localDevice.name();

        // Make it visible to others
        localDevice.setHostMode(QBluetoothLocalDevice::HostDiscoverable);

        // Get connected devices
        QList<QBluetoothAddress> remotes;
        remotes = localDevice.connectedDevices();
    }
}
void DeviceThread::sendTime(QString time){

}
void DeviceThread::timerHit()
{
    QString newTime= QDateTime::currentDateTime().toString("ddd MMMM d yy, hh:mm:ss");
    if(m_lastTime != newTime ){
        m_lastTime = newTime;
        emit sendTime(newTime) ;
    }
}
DeviceThread::~DeviceThread(){

}
