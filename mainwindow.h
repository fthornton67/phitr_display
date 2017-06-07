#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QObject>
#include <QLabel>
#include <QMainWindow>
#include <QListWidgetItem>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothDeviceInfo>
#include <QLowEnergyController>
#include <QLowEnergyService>
#include <qbluetoothuuid.h>
#include "ui_device.h"

#include <qbluetoothglobal.h>
#include <qbluetoothlocaldevice.h>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void updateDeviceCount();
    ~MainWindow();

public slots:
    void setUiDeviceCount();
    //void arrangeAttendeeGrid();

protected:
    QLabel* deviceCount;

private:
    Ui::MainWindow *ui;
    QBluetoothDeviceDiscoveryAgent *discoveryAgent;
    QBluetoothLocalDevice *localDevice;
   // Ui_DeviceDiscovery *ui;
};

#endif // MAINWINDOW_H
