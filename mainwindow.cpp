#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "devicethread.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::setUiDeviceCount(){
    printf("update the ui device count");
}

MainWindow::~MainWindow()
{
    delete ui;
}
