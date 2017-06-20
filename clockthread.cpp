#include "clockthread.h"
#include <QTimer>
#include <QDateTime>

// clock/clockthread.cpp
void ClockThread::run()
{
    QTimer timer;
    connect(&timer, SIGNAL(timeout()), this, SLOT(timerHit()), Qt::DirectConnection);
    timer.setInterval(10);
    timer.start();   // puts one event in the threads event queue
    exec();
    timer.stop();
}

void ClockThread::timerHit()
{
    QString newTime= QDateTime::currentDateTime().toString("hh:mm:ss:zzz");
    if(m_lastTime != newTime ){
        m_lastTime = newTime;
        emit sendTime(newTime) ;
    }
}
