#include "mainwindow.h"
#include "attendeegrid.h"
#include "flowlayout.h"
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

QList<QList<int>*>* initGridList(int count){

    //HeartRate heartRate;

    //heartRate.deviceSearch();
    //DeviceThread* dThread;
    //dThread = new DeviceThread;

    //dThread->start();

   // qDebug() << "hello from GUI thread " << dThread->currentThreadId();
    //dThread->wait();  // do not exit before the thread is completed!


    QList<QList<int>*>* items = new QList<QList<int>*>();

    int rows,row,cols,col;
    rows = gridMap->at(count-1)->at(1);
    cols = gridMap->at(count-1)->at(0);
    gridListCount = row * cols;

    row = 0;
    col = 0;

    for(int counter=0;counter<count;counter++){
        items->append(new QList<int>({row,col}));
        if(col+1<cols){
            col++;
        }
        else{
            col = 0;
            row++;
        }
        gridListCount++;
    }
    return items;
}
QList<QList<int>*>* initGridMap(){

    gridMap = new QList<QList<int>*>();

    gridMap->append(new QList<int>({1,1})); //1|1|
    gridMap->append(new QList<int>({1,2})); //2|2|
    gridMap->append(new QList<int>({2,2})); //3|4|
    gridMap->append(new QList<int>({2,2})); //4|4|
    gridMap->append(new QList<int>({3,2})); //5|6|
    gridMap->append(new QList<int>({3,2})); //6|6|
    gridMap->append(new QList<int>({3,3})); //7|9|
    gridMap->append(new QList<int>({3,3})); //8|9|
    gridMap->append(new QList<int>({3,3})); //9|9|
    gridMap->append(new QList<int>({4,4})); //10|16|
    gridMap->append(new QList<int>({4,4})); //11|16|
    gridMap->append(new QList<int>({4,4})); //12|16|
    gridMap->append(new QList<int>({4,4})); //13|16|
    gridMap->append(new QList<int>({4,4})); //14|16|
    gridMap->append(new QList<int>({4,4})); //15|16|
    gridMap->append(new QList<int>({4,4})); //16|16|
    gridMap->append(new QList<int>({5,5})); //17|25|
    gridMap->append(new QList<int>({5,5})); //18|25|
    gridMap->append(new QList<int>({5,5})); //19|25|
    gridMap->append(new QList<int>({5,5})); //20|25|
    gridMap->append(new QList<int>({5,5})); //21|25|
    gridMap->append(new QList<int>({5,5})); //22|25|
    gridMap->append(new QList<int>({5,5})); //23|25|
    gridMap->append(new QList<int>({5,5})); //24|25|
    gridMap->append(new QList<int>({5,5})); //25|25|

    return gridMap;


}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QUiLoader loader;
    gridMap = new QList<QList<int>*>;
    gridMap = initGridMap();

    QFile styleFile("/home/fthornton67/phitr/PhitrScreen/style.qss");
    styleFile.open(QFile::ReadOnly);
    QString StyleSheet = QLatin1String(styleFile.readAll());

    QGridLayout* gLayout = new QGridLayout;


    QWidget* centralWidget = new QWidget;
    centralWidget->setLayout(gLayout);

    QVector<QWidget*>* attendeeList = new QVector<QWidget*>();

    for(int count= 0;count<10;count++)
    {
        QFile file2(":/forms/attendeeframe.ui");
        file2.open(QFile::ReadOnly);

        QWidget *attendeeWidget = loader.load(&file2);
        attendeeWidget->layout()->setSpacing(0);
        attendeeWidget->layout()->setContentsMargins(0,0,0,0);

        attendeeList->append(attendeeWidget);

        QGridLayout *main;
        main = attendeeWidget->findChild<QGridLayout*>("glayout_main");
        main->setSpacing(0);

       file2.close();
    }

    MainWindow w;
    w.setStyleSheet(StyleSheet);

    QPushButton * quit_btn = new QPushButton("Quit");
    QObject::connect(quit_btn,SIGNAL(clicked()),qApp,SLOT(quit()));

    w.setCentralWidget(centralWidget);


    QList<QList<int>*>* currentGridList;
    currentGridList = initGridList(attendeeList->count());

    printf("List count:%d\n",currentGridList->count());


    for(int count = 0;count<attendeeList->count();count++){

        gLayout->addWidget(attendeeList->at(count),currentGridList->at(count)->at(0),currentGridList->at(count)->at(1));
        gLayout->layout()->setSpacing(0);
        gLayout->update();

    }
    // w.statusBar()->hide();
    w.statusBar()->addWidget(quit_btn);
    w.showFullScreen();

    return a.exec();
}
