#include "mainwindow.h"
#include "attendeegrid.h"
#include "flowlayout.h"
#include "clockthread.h"
#include <QApplication>
#include <QFile>
#include <QPushButton>
#include <QBoxLayout>
#include <QGridLayout>
#include <QMap>

#include <QtUiTools>
#include <QVector>
#include "heartrate.h"
#include "devicethread.h"

QList<QList<int>*>* currentGridList;
QList<QList<int>*>* gridMap;
int gridListCount = 0;

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    QUiLoader loader;

    MainWindow w;

    QFile styleFile(":/style/phitr_style.qss");
    styleFile.open(QFile::ReadOnly);
    QString StyleSheet = QLatin1String(styleFile.readAll());
    w.setStyleSheet(StyleSheet);



    AttendeeGrid * aGrid;
    aGrid = new AttendeeGrid();
    aGrid->setGridCount(5);


    for(int count = 0;count<aGrid->getGridCount();count++){
        aGrid->addAttendee();
    }

    QVBoxLayout* vBoxLayout;
    vBoxLayout = w.findChild<QVBoxLayout*>("vBoxLayout");
    vBoxLayout->addLayout(aGrid);


    QLabel* deviceCount;
    deviceCount = w.findChild<QLabel*>("lbl_deviceCntVal");

    deviceCount->setText(QString("%1").arg(aGrid->getGridCount()));
    deviceCount->update();

    QPushButton * quit_btn = new QPushButton("Quit");
    QObject::connect(quit_btn,SIGNAL(clicked()),qApp,SLOT(quit()));

    DeviceThread *deviceThread = new DeviceThread();


    QLabel * lblClock;
    lblClock = w.findChild<QLabel*>("lbl_clock");
    ClockThread clockThread;
    QObject::connect(&clockThread, SIGNAL(sendTime(QString)), lblClock , SLOT(setText(QString)), Qt::QueuedConnection);
    clockThread.start();
    clockThread.quit();
    clockThread.wait();

    //dt->run();


    w.statusBar()->addWidget(quit_btn);
    w.showFullScreen();

    return a.exec();
}
