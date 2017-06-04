#ifndef ATTENDEEGRID_H
#define ATTENDEEGRID_H

#include <QGridLayout>
#include <QList>

class AttendeeGrid //: public QGridLayout
{
public:
    explicit AttendeeGrid(QWidget *parent, int margin = -1, int hSpacing = -1, int vSpacing = -1);
    explicit AttendeeGrid(int margin = -1, int hSpacing = -1, int vSpacing = -1);
    ~AttendeeGrid();
    void  addItem(QLayoutItem *);

};

#endif // ATTENDEEGRID_H
