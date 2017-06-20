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

    qDebug("local device is valid:%d\n",localDevice.isValid());

    // Check if Bluetooth is available on this device
    if (localDevice.isValid()) {

        QBluetoothAddress adapterAddress;
        adapterAddress = localDevice.address();

        // Turn Bluetooth on
        localDevice.powerOn();

         qDebug() << "local device name:" << localDevice.name() << '(' << localDevice.address().toString() << ')';

        // Make it visible to others
        localDevice.setHostMode(QBluetoothLocalDevice::HostDiscoverable);

        // Get connected devices
        QList<QBluetoothAddress> remotes;
        QList<QBluetoothAddress> all;
        remotes = localDevice.connectedDevices();
        //all = localDevice.allDevices();

        QBluetoothDeviceDiscoveryAgent *discoveryAgent;
        discoveryAgent = new QBluetoothDeviceDiscoveryAgent(adapterAddress);

        //discoveryAgent->setRemoteAddress(address);

        //connect(discoveryAgent, SIGNAL(serviceDiscovered(QBluetoothServiceInfo)), this, SLOT(addService(QBluetoothServiceInfo)));
        //connect(discoveryAgent, SIGNAL(finished()), ui->status, SLOT(hide()));

        discoveryAgent->start();


    }
}
void DeviceThread::deviceHit()
{
    QString newTime= QDateTime::currentDateTime().toString("ddd MMMM d yy, hh:mm:ss");
    if(m_lastTime != newTime ){
        m_lastTime = newTime;
        //emit sendTime(newTime) ;
    }

    // emit send device
}
