#include "attendeegrid.h"
#include <QGridLayout>
#include <QtUiTools>


AttendeeGrid::AttendeeGrid(QWidget *parent, int margin, int hSpacing, int vSpacing)
    : QGridLayout(parent)
{
    this->attendeeList = new QVector<QWidget*>();
    setContentsMargins(margin, margin, margin, margin);
    initGridMap();
}
void AttendeeGrid::initAttendeeList(){

    this->attendeeList = new QVector<QWidget*>();
    for(int count = 0;count <this->p_gridCount;count++){
        this->addAttendee();
    }
}
AttendeeGrid::AttendeeGrid(int margin, int hSpacing, int vSpacing)
{
    this->attendeeList = new QVector<QWidget*>();
    setContentsMargins(margin, margin, margin, margin);
    initGridMap();
}
void AttendeeGrid::arrangeWidgets(){
    for(int count = 0;count<this->attendeeList->count();count++){

          this->addWidget(attendeeList->at(count),currentGridList->at(count)->at(0),currentGridList->at(count)->at(1));
          this->layout()->setSpacing(0);
          this->update();

      }
}
void AttendeeGrid::addAttendee(){

    QUiLoader loader;

    QFile file2(":/forms/attendeeframe.ui");
    file2.open(QFile::ReadOnly);

    QWidget *attendeeWidget = loader.load(&file2);
    attendeeWidget->layout()->setSpacing(0);
    attendeeWidget->layout()->setContentsMargins(0,0,0,0);

    this->attendeeList->append(attendeeWidget);

    QGridLayout *main;
    main = attendeeWidget->findChild<QGridLayout*>("glayout_main");
    main->setSpacing(0);

   file2.close();
   this->arrangeWidgets();
}
int AttendeeGrid::getGridCount(){
    return p_gridCount;
}
void AttendeeGrid::setGridCount(int count){

    p_gridCount = count;
    currentGridList = initGridList(count);

}
QList<QList<int>*>* AttendeeGrid::initGridList(int count){

    //HeartRate heartRate;

    //heartRate.deviceSearch();

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
QList<QList<int>*>* AttendeeGrid::initGridMap(){

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

AttendeeGrid::~AttendeeGrid()
{
   // delete ui;
}
