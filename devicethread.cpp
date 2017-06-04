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

}
void DeviceThread::run()
{
     qDebug("hello from worker thread %d", thread()->currentThreadId());
     qDebug("local device is %d",localDevice.isValid());
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
