/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *vBoxLayout;
    QHBoxLayout *topLayout;
    QLabel *lbl_deviceCnt;
    QLabel *lbl_deviceCntVal;
    QLabel *lbl_clock;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        vBoxLayout = new QVBoxLayout();
        vBoxLayout->setSpacing(6);
        vBoxLayout->setObjectName(QStringLiteral("vBoxLayout"));
        topLayout = new QHBoxLayout();
        topLayout->setSpacing(6);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        topLayout->setContentsMargins(-1, 0, -1, -1);
        lbl_deviceCnt = new QLabel(centralWidget);
        lbl_deviceCnt->setObjectName(QStringLiteral("lbl_deviceCnt"));
        lbl_deviceCnt->setMaximumSize(QSize(16777215, 24));

        topLayout->addWidget(lbl_deviceCnt);

        lbl_deviceCntVal = new QLabel(centralWidget);
        lbl_deviceCntVal->setObjectName(QStringLiteral("lbl_deviceCntVal"));
        lbl_deviceCntVal->setMaximumSize(QSize(16777215, 24));

        topLayout->addWidget(lbl_deviceCntVal);

        lbl_clock = new QLabel(centralWidget);
        lbl_clock->setObjectName(QStringLiteral("lbl_clock"));
        lbl_clock->setMaximumSize(QSize(16777215, 25));
        lbl_clock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        topLayout->addWidget(lbl_clock);


        vBoxLayout->addLayout(topLayout);


        verticalLayout->addLayout(vBoxLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        lbl_deviceCnt->setText(QApplication::translate("MainWindow", "Device Count:", Q_NULLPTR));
        lbl_deviceCntVal->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lbl_clock->setText(QApplication::translate("MainWindow", "00:00:00", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
