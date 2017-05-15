#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QPushButton>
#include <QBoxLayout>
#include <QtUiTools>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile File("/home/fthornton67/phitr/PhitrScreen/style.qss");
    File.open(QFile::ReadOnly);
    QString StyleSheet = QLatin1String(File.readAll());

    MainWindow w;
    w.setStyleSheet(StyleSheet);


    QPushButton * quit_btn = new QPushButton("Quit");
    QPushButton * btn_one = new QPushButton("One");

    QBoxLayout* hLayout = new QBoxLayout(QBoxLayout::LeftToRight,w.parentWidget());
    hLayout->setParent(w.centralWidget());

    QWidget *widget = new QWidget();
    widget->setLayout(hLayout);
    w.setCentralWidget(widget);
    hLayout->addWidget(quit_btn);
    //hLayout->addWidget(btn_one);
   // quit_btn->setParent(widget);
   // btn_one->setParent(widget);
    QObject::connect(quit_btn,SIGNAL(clicked()),qApp,SLOT(quit()));


    w.showFullScreen();

    return a.exec();
}
