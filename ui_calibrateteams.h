/********************************************************************************
** Form generated from reading UI file 'calibrateteams.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATETEAMS_H
#define UI_CALIBRATETEAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalibrateTeams
{
public:
    QLabel *label_10;
    QGroupBox *groupBox;
    QComboBox *player3Color;
    QLabel *label_18;
    QComboBox *player2Color;
    QComboBox *phase;
    QComboBox *getAngle;
    QLabel *label_6;
    QLabel *label_19;
    QLabel *label_7;
    QComboBox *player1Color;
    QComboBox *teamBox;
    QLabel *label_13;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QLineEdit *ipLine;
    QLineEdit *portLine;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *reloadButton;
    QPushButton *saveButton;

    void setupUi(QWidget *CalibrateTeams)
    {
        if (CalibrateTeams->objectName().isEmpty())
            CalibrateTeams->setObjectName(QStringLiteral("CalibrateTeams"));
        CalibrateTeams->resize(601, 301);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalibrateTeams->sizePolicy().hasHeightForWidth());
        CalibrateTeams->setSizePolicy(sizePolicy);
        CalibrateTeams->setMinimumSize(QSize(601, 301));
        CalibrateTeams->setMaximumSize(QSize(601, 301));
        CalibrateTeams->setStyleSheet(QStringLiteral(""));
        label_10 = new QLabel(CalibrateTeams);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(310, 170, 281, 71));
        groupBox = new QGroupBox(CalibrateTeams);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 281, 281));
        QFont font;
        font.setPointSize(14);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignCenter);
        player3Color = new QComboBox(groupBox);
        player3Color->addItem(QString());
        player3Color->addItem(QString());
        player3Color->addItem(QString());
        player3Color->addItem(QString());
        player3Color->addItem(QString());
        player3Color->addItem(QString());
        player3Color->addItem(QString());
        player3Color->setObjectName(QStringLiteral("player3Color"));
        player3Color->setGeometry(QRect(80, 200, 191, 31));
        QFont font1;
        font1.setPointSize(10);
        player3Color->setFont(font1);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 160, 61, 31));
        label_18->setFont(font1);
        player2Color = new QComboBox(groupBox);
        player2Color->addItem(QString());
        player2Color->addItem(QString());
        player2Color->addItem(QString());
        player2Color->addItem(QString());
        player2Color->addItem(QString());
        player2Color->addItem(QString());
        player2Color->addItem(QString());
        player2Color->setObjectName(QStringLiteral("player2Color"));
        player2Color->setGeometry(QRect(80, 160, 191, 31));
        player2Color->setFont(font1);
        phase = new QComboBox(groupBox);
        phase->addItem(QString());
        phase->addItem(QString());
        phase->addItem(QString());
        phase->addItem(QString());
        phase->addItem(QString());
        phase->addItem(QString());
        phase->addItem(QString());
        phase->addItem(QString());
        phase->setObjectName(QStringLiteral("phase"));
        phase->setGeometry(QRect(80, 240, 191, 31));
        phase->setFont(font1);
        getAngle = new QComboBox(groupBox);
        getAngle->addItem(QString());
        getAngle->addItem(QString());
        getAngle->setObjectName(QStringLiteral("getAngle"));
        getAngle->setGeometry(QRect(80, 80, 191, 31));
        getAngle->setFont(font1);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 240, 61, 31));
        label_6->setFont(font1);
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 200, 61, 31));
        label_19->setFont(font1);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 80, 61, 31));
        label_7->setFont(font1);
        player1Color = new QComboBox(groupBox);
        player1Color->addItem(QString());
        player1Color->addItem(QString());
        player1Color->addItem(QString());
        player1Color->addItem(QString());
        player1Color->addItem(QString());
        player1Color->addItem(QString());
        player1Color->addItem(QString());
        player1Color->setObjectName(QStringLiteral("player1Color"));
        player1Color->setGeometry(QRect(80, 120, 191, 31));
        player1Color->setFont(font1);
        teamBox = new QComboBox(groupBox);
        teamBox->addItem(QString());
        teamBox->addItem(QString());
        teamBox->setObjectName(QStringLiteral("teamBox"));
        teamBox->setGeometry(QRect(80, 40, 191, 31));
        teamBox->setFont(font1);
        teamBox->setLayoutDirection(Qt::LeftToRight);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 120, 61, 31));
        label_13->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 40, 51, 31));
        label_5->setFont(font1);
        groupBox_2 = new QGroupBox(CalibrateTeams);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 10, 291, 161));
        groupBox_2->setFont(font);
        groupBox_2->setAlignment(Qt::AlignCenter);
        ipLine = new QLineEdit(groupBox_2);
        ipLine->setObjectName(QStringLiteral("ipLine"));
        ipLine->setGeometry(QRect(90, 40, 191, 31));
        ipLine->setFont(font1);
        ipLine->setAlignment(Qt::AlignCenter);
        portLine = new QLineEdit(groupBox_2);
        portLine->setObjectName(QStringLiteral("portLine"));
        portLine->setGeometry(QRect(90, 80, 191, 31));
        portLine->setFont(font1);
        portLine->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 80, 91, 31));
        label_15->setFont(font1);
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 40, 81, 31));
        label_16->setFont(font1);
        reloadButton = new QPushButton(groupBox_2);
        reloadButton->setObjectName(QStringLiteral("reloadButton"));
        reloadButton->setGeometry(QRect(10, 120, 271, 31));
        reloadButton->setFont(font1);
        saveButton = new QPushButton(CalibrateTeams);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(300, 240, 291, 51));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setWeight(50);
        saveButton->setFont(font2);

        retranslateUi(CalibrateTeams);

        QMetaObject::connectSlotsByName(CalibrateTeams);
    } // setupUi

    void retranslateUi(QWidget *CalibrateTeams)
    {
        CalibrateTeams->setWindowTitle(QApplication::translate("CalibrateTeams", "Team/UDP Settings", nullptr));
        label_10->setText(QApplication::translate("CalibrateTeams", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-style:italic; color:#0055ff;\">INATEL</span></p></body></html>", nullptr));
        groupBox->setTitle(QApplication::translate("CalibrateTeams", "Team", nullptr));
        player3Color->setItemText(0, QApplication::translate("CalibrateTeams", "None", nullptr));
        player3Color->setItemText(1, QApplication::translate("CalibrateTeams", "Cyan", nullptr));
        player3Color->setItemText(2, QApplication::translate("CalibrateTeams", "Green", nullptr));
        player3Color->setItemText(3, QApplication::translate("CalibrateTeams", "Pink", nullptr));
        player3Color->setItemText(4, QApplication::translate("CalibrateTeams", "Purple", nullptr));
        player3Color->setItemText(5, QApplication::translate("CalibrateTeams", "Red", nullptr));
        player3Color->setItemText(6, QApplication::translate("CalibrateTeams", "Brown", nullptr));

        label_18->setText(QApplication::translate("CalibrateTeams", "Player 2", nullptr));
        player2Color->setItemText(0, QApplication::translate("CalibrateTeams", "None", nullptr));
        player2Color->setItemText(1, QApplication::translate("CalibrateTeams", "Cyan", nullptr));
        player2Color->setItemText(2, QApplication::translate("CalibrateTeams", "Green", nullptr));
        player2Color->setItemText(3, QApplication::translate("CalibrateTeams", "Pink", nullptr));
        player2Color->setItemText(4, QApplication::translate("CalibrateTeams", "Purple", nullptr));
        player2Color->setItemText(5, QApplication::translate("CalibrateTeams", "Red", nullptr));
        player2Color->setItemText(6, QApplication::translate("CalibrateTeams", "Brown", nullptr));

        phase->setItemText(0, QApplication::translate("CalibrateTeams", "0\302\260", nullptr));
        phase->setItemText(1, QApplication::translate("CalibrateTeams", "45\302\260", nullptr));
        phase->setItemText(2, QApplication::translate("CalibrateTeams", "90\302\260", nullptr));
        phase->setItemText(3, QApplication::translate("CalibrateTeams", "135\302\260", nullptr));
        phase->setItemText(4, QApplication::translate("CalibrateTeams", "180\302\260", nullptr));
        phase->setItemText(5, QApplication::translate("CalibrateTeams", "225\302\260", nullptr));
        phase->setItemText(6, QApplication::translate("CalibrateTeams", "270\302\260", nullptr));
        phase->setItemText(7, QApplication::translate("CalibrateTeams", "315\302\260", nullptr));

        getAngle->setItemText(0, QApplication::translate("CalibrateTeams", "No", nullptr));
        getAngle->setItemText(1, QApplication::translate("CalibrateTeams", "Yes", nullptr));

        label_6->setText(QApplication::translate("CalibrateTeams", "Tag Phase", nullptr));
        label_19->setText(QApplication::translate("CalibrateTeams", "Player 3", nullptr));
        label_7->setText(QApplication::translate("CalibrateTeams", "Get Angle", nullptr));
        player1Color->setItemText(0, QApplication::translate("CalibrateTeams", "None", nullptr));
        player1Color->setItemText(1, QApplication::translate("CalibrateTeams", "Cyan", nullptr));
        player1Color->setItemText(2, QApplication::translate("CalibrateTeams", "Green", nullptr));
        player1Color->setItemText(3, QApplication::translate("CalibrateTeams", "Pink", nullptr));
        player1Color->setItemText(4, QApplication::translate("CalibrateTeams", "Purple", nullptr));
        player1Color->setItemText(5, QApplication::translate("CalibrateTeams", "Red", nullptr));
        player1Color->setItemText(6, QApplication::translate("CalibrateTeams", "Brown", nullptr));

        teamBox->setItemText(0, QApplication::translate("CalibrateTeams", "Yellow", nullptr));
        teamBox->setItemText(1, QApplication::translate("CalibrateTeams", "Blue", nullptr));

        label_13->setText(QApplication::translate("CalibrateTeams", "Player 1", nullptr));
        label_5->setText(QApplication::translate("CalibrateTeams", "Team", nullptr));
        groupBox_2->setTitle(QApplication::translate("CalibrateTeams", "UDP", nullptr));
        label_15->setText(QApplication::translate("CalibrateTeams", "Legacy Port", nullptr));
        label_16->setText(QApplication::translate("CalibrateTeams", "Legacy IP", nullptr));
        reloadButton->setText(QApplication::translate("CalibrateTeams", "Reload UDP", nullptr));
        saveButton->setText(QApplication::translate("CalibrateTeams", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalibrateTeams: public Ui_CalibrateTeams {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATETEAMS_H
