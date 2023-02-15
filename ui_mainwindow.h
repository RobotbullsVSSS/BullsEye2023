/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCalibrate_Colors;
    QAction *actionCalibrate_Camera;
    QAction *actionCalibrate_Teams;
    QAction *actionCalibrate_UDP;
    QAction *actionDebug;
    QAction *actionAbout;
    QAction *actionAbout_2;
    QAction *actionReference_Settings;
    QAction *actionStatus;
    QWidget *centralWidget;
    QLabel *cameraFrame;
    QLabel *frameLabel;
    QLabel *delayLabel;
    QLabel *delayLabel_2;
    QLabel *threadsLabel;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(661, 533);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(661, 533));
        MainWindow->setMaximumSize(QSize(661, 533));
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        actionCalibrate_Colors = new QAction(MainWindow);
        actionCalibrate_Colors->setObjectName(QStringLiteral("actionCalibrate_Colors"));
        actionCalibrate_Camera = new QAction(MainWindow);
        actionCalibrate_Camera->setObjectName(QStringLiteral("actionCalibrate_Camera"));
        actionCalibrate_Camera->setMenuRole(QAction::TextHeuristicRole);
        actionCalibrate_Teams = new QAction(MainWindow);
        actionCalibrate_Teams->setObjectName(QStringLiteral("actionCalibrate_Teams"));
        actionCalibrate_UDP = new QAction(MainWindow);
        actionCalibrate_UDP->setObjectName(QStringLiteral("actionCalibrate_UDP"));
        actionDebug = new QAction(MainWindow);
        actionDebug->setObjectName(QStringLiteral("actionDebug"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_2 = new QAction(MainWindow);
        actionAbout_2->setObjectName(QStringLiteral("actionAbout_2"));
        actionReference_Settings = new QAction(MainWindow);
        actionReference_Settings->setObjectName(QStringLiteral("actionReference_Settings"));
        actionStatus = new QAction(MainWindow);
        actionStatus->setObjectName(QStringLiteral("actionStatus"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        cameraFrame = new QLabel(centralWidget);
        cameraFrame->setObjectName(QStringLiteral("cameraFrame"));
        cameraFrame->setGeometry(QRect(10, 10, 640, 480));
        sizePolicy.setHeightForWidth(cameraFrame->sizePolicy().hasHeightForWidth());
        cameraFrame->setSizePolicy(sizePolicy);
        cameraFrame->setMinimumSize(QSize(640, 480));
        cameraFrame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        cameraFrame->setFrameShape(QFrame::Panel);
        cameraFrame->setLineWidth(1);
        cameraFrame->setAlignment(Qt::AlignCenter);
        frameLabel = new QLabel(centralWidget);
        frameLabel->setObjectName(QStringLiteral("frameLabel"));
        frameLabel->setGeometry(QRect(10, 490, 111, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(10);
        frameLabel->setFont(font1);
        frameLabel->setTextFormat(Qt::RichText);
        delayLabel = new QLabel(centralWidget);
        delayLabel->setObjectName(QStringLiteral("delayLabel"));
        delayLabel->setGeometry(QRect(140, 490, 101, 21));
        delayLabel->setFont(font1);
        delayLabel->setTextFormat(Qt::RichText);
        delayLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        delayLabel_2 = new QLabel(centralWidget);
        delayLabel_2->setObjectName(QStringLiteral("delayLabel_2"));
        delayLabel_2->setGeometry(QRect(110, 490, 31, 21));
        delayLabel_2->setFont(font1);
        delayLabel_2->setTextFormat(Qt::RichText);
        delayLabel_2->setAlignment(Qt::AlignCenter);
        threadsLabel = new QLabel(centralWidget);
        threadsLabel->setObjectName(QStringLiteral("threadsLabel"));
        threadsLabel->setGeometry(QRect(560, 490, 91, 21));
        threadsLabel->setFont(font1);
        threadsLabel->setTextFormat(Qt::RichText);
        threadsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 661, 22));
        menuBar->setNativeMenuBar(false);
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuMenu->setFont(font);
        menuMenu->setContextMenuPolicy(Qt::DefaultContextMenu);
        menuMenu->setTearOffEnabled(false);
        menuMenu->setSeparatorsCollapsible(false);
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuAbout->setFont(font);
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuMenu->addAction(actionCalibrate_Camera);
        menuMenu->addAction(actionReference_Settings);
        menuMenu->addAction(actionCalibrate_Colors);
        menuMenu->addAction(actionCalibrate_Teams);
        menuAbout->addAction(actionAbout_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BullsEYE", nullptr));
        actionCalibrate_Colors->setText(QApplication::translate("MainWindow", "Color Settings", nullptr));
        actionCalibrate_Camera->setText(QApplication::translate("MainWindow", "Camera Settings", nullptr));
        actionCalibrate_Teams->setText(QApplication::translate("MainWindow", "Team/UDP Settings", nullptr));
        actionCalibrate_UDP->setText(QApplication::translate("MainWindow", "Calibrate UDP", nullptr));
        actionDebug->setText(QApplication::translate("MainWindow", "Debug", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionAbout_2->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionReference_Settings->setText(QApplication::translate("MainWindow", "Field Settings", nullptr));
        actionStatus->setText(QApplication::translate("MainWindow", "Status", nullptr));
        cameraFrame->setText(QString());
        frameLabel->setText(QApplication::translate("MainWindow", "Capture: 000 FPS", nullptr));
        delayLabel->setText(QApplication::translate("MainWindow", "Process: 00 MS", nullptr));
        delayLabel_2->setText(QApplication::translate("MainWindow", "/", nullptr));
        threadsLabel->setText(QApplication::translate("MainWindow", "Threads : 01", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
