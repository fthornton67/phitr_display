#ifndef ATTENDEEGRID_H
#define ATTENDEEGRID_H

#include <QGridLayout>
#include <QList>
#include <QVector>

class AttendeeGrid : public QGridLayout
{
public:
    explicit AttendeeGrid(QWidget *parent, int margin = -1, int hSpacing = -1, int vSpacing = -1);
    explicit AttendeeGrid(int margin = -1, int hSpacing = -1, int vSpacing = -1);
    ~AttendeeGrid();
    void setGridCount(int count);
    int getGridCount();
    void addAttendee();

   // void  addItem(QLayoutItem *);

protected:
    QList<QList<int>*>* currentGridList;
    QList<QList<int>*>* gridMap;
    QVector<QWidget*>* attendeeList;

    void arrangeWidgets();
    int gridListCount = 0;

private:

    QList<QList<int>*>* initGridList(int count);
    QList<QList<int>*>* initGridMap();
    void initAttendeeList();
    int p_gridCount;

};

#endif // ATTENDEEGRID_H
