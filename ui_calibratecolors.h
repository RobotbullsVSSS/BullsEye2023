/********************************************************************************
** Form generated from reading UI file 'calibratecolors.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATECOLORS_H
#define UI_CALIBRATECOLORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalibrateColors
{
public:
    QLabel *colorFrame;
    QPushButton *saveButton;
    QLabel *label_4;
    QSlider *minHSlider;
    QSlider *maxHSlider;
    QSlider *minSSlider;
    QLabel *label_5;
    QSlider *maxSSlider;
    QSlider *minVSlider;
    QLabel *label_6;
    QSlider *maxVSlider;
    QPushButton *resetButton;
    QPushButton *resetAllButton;
    QGroupBox *groupBox;
    QCheckBox *binaryCheck;
    QComboBox *colorBox;
    QSpinBox *maxVSPin;
    QSpinBox *maxSSPin;
    QSpinBox *minVSPin;
    QSpinBox *maxHSpin;
    QLabel *label_7;
    QSpinBox *minHSPin;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *minSSPin;

    void setupUi(QWidget *CalibrateColors)
    {
        if (CalibrateColors->objectName().isEmpty())
            CalibrateColors->setObjectName(QStringLiteral("CalibrateColors"));
        CalibrateColors->resize(821, 641);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalibrateColors->sizePolicy().hasHeightForWidth());
        CalibrateColors->setSizePolicy(sizePolicy);
        CalibrateColors->setMinimumSize(QSize(821, 641));
        CalibrateColors->setMaximumSize(QSize(821, 641));
        colorFrame = new QLabel(CalibrateColors);
        colorFrame->setObjectName(QStringLiteral("colorFrame"));
        colorFrame->setGeometry(QRect(10, 10, 640, 480));
        sizePolicy.setHeightForWidth(colorFrame->sizePolicy().hasHeightForWidth());
        colorFrame->setSizePolicy(sizePolicy);
        colorFrame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        colorFrame->setFrameShape(QFrame::Panel);
        saveButton = new QPushButton(CalibrateColors);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(660, 440, 151, 51));
        QFont font;
        font.setPointSize(13);
        saveButton->setFont(font);
        label_4 = new QLabel(CalibrateColors);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 510, 21, 21));
        QFont font1;
        font1.setPointSize(10);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        minHSlider = new QSlider(CalibrateColors);
        minHSlider->setObjectName(QStringLiteral("minHSlider"));
        minHSlider->setGeometry(QRect(30, 500, 781, 21));
        minHSlider->setMaximum(180);
        minHSlider->setPageStep(18);
        minHSlider->setOrientation(Qt::Horizontal);
        maxHSlider = new QSlider(CalibrateColors);
        maxHSlider->setObjectName(QStringLiteral("maxHSlider"));
        maxHSlider->setGeometry(QRect(30, 520, 781, 21));
        maxHSlider->setStyleSheet(QStringLiteral(""));
        maxHSlider->setMaximum(180);
        maxHSlider->setPageStep(18);
        maxHSlider->setValue(180);
        maxHSlider->setOrientation(Qt::Horizontal);
        minSSlider = new QSlider(CalibrateColors);
        minSSlider->setObjectName(QStringLiteral("minSSlider"));
        minSSlider->setGeometry(QRect(30, 550, 781, 21));
        minSSlider->setMaximum(255);
        minSSlider->setPageStep(25);
        minSSlider->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(CalibrateColors);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 560, 21, 21));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        maxSSlider = new QSlider(CalibrateColors);
        maxSSlider->setObjectName(QStringLiteral("maxSSlider"));
        maxSSlider->setGeometry(QRect(30, 570, 781, 21));
        maxSSlider->setMaximum(255);
        maxSSlider->setPageStep(25);
        maxSSlider->setValue(255);
        maxSSlider->setOrientation(Qt::Horizontal);
        minVSlider = new QSlider(CalibrateColors);
        minVSlider->setObjectName(QStringLiteral("minVSlider"));
        minVSlider->setGeometry(QRect(30, 600, 781, 21));
        minVSlider->setMaximum(255);
        minVSlider->setPageStep(25);
        minVSlider->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(CalibrateColors);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 610, 21, 21));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        maxVSlider = new QSlider(CalibrateColors);
        maxVSlider->setObjectName(QStringLiteral("maxVSlider"));
        maxVSlider->setGeometry(QRect(30, 620, 781, 21));
        maxVSlider->setMaximum(255);
        maxVSlider->setPageStep(25);
        maxVSlider->setValue(255);
        maxVSlider->setOrientation(Qt::Horizontal);
        resetButton = new QPushButton(CalibrateColors);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(660, 340, 151, 41));
        QFont font2;
        font2.setPointSize(11);
        resetButton->setFont(font2);
        resetAllButton = new QPushButton(CalibrateColors);
        resetAllButton->setObjectName(QStringLiteral("resetAllButton"));
        resetAllButton->setGeometry(QRect(660, 390, 151, 41));
        resetAllButton->setFont(font2);
        groupBox = new QGroupBox(CalibrateColors);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(660, 10, 151, 311));
        QFont font3;
        font3.setPointSize(14);
        groupBox->setFont(font3);
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        binaryCheck = new QCheckBox(groupBox);
        binaryCheck->setObjectName(QStringLiteral("binaryCheck"));
        binaryCheck->setGeometry(QRect(10, 70, 131, 31));
        binaryCheck->setFont(font1);
        binaryCheck->setLayoutDirection(Qt::LeftToRight);
        colorBox = new QComboBox(groupBox);
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->addItem(QString());
        colorBox->setObjectName(QStringLiteral("colorBox"));
        colorBox->setGeometry(QRect(10, 40, 131, 31));
        colorBox->setFont(font1);
        maxVSPin = new QSpinBox(groupBox);
        maxVSPin->setObjectName(QStringLiteral("maxVSPin"));
        maxVSPin->setGeometry(QRect(30, 270, 111, 31));
        maxVSPin->setFont(font1);
        maxVSPin->setMaximum(255);
        maxVSPin->setValue(255);
        maxSSPin = new QSpinBox(groupBox);
        maxSSPin->setObjectName(QStringLiteral("maxSSPin"));
        maxSSPin->setGeometry(QRect(30, 200, 111, 31));
        maxSSPin->setFont(font1);
        maxSSPin->setMaximum(255);
        maxSSPin->setValue(255);
        minVSPin = new QSpinBox(groupBox);
        minVSPin->setObjectName(QStringLiteral("minVSPin"));
        minVSPin->setGeometry(QRect(30, 240, 111, 31));
        minVSPin->setFont(font1);
        minVSPin->setMaximum(255);
        maxHSpin = new QSpinBox(groupBox);
        maxHSpin->setObjectName(QStringLiteral("maxHSpin"));
        maxHSpin->setGeometry(QRect(30, 130, 111, 31));
        maxHSpin->setFont(font1);
        maxHSpin->setMaximum(180);
        maxHSpin->setValue(180);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 260, 21, 21));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        minHSPin = new QSpinBox(groupBox);
        minHSPin->setObjectName(QStringLiteral("minHSPin"));
        minHSPin->setGeometry(QRect(30, 100, 111, 31));
        minHSPin->setFont(font1);
        minHSPin->setMaximum(180);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 190, 21, 21));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 120, 21, 21));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        minSSPin = new QSpinBox(groupBox);
        minSSPin->setObjectName(QStringLiteral("minSSPin"));
        minSSPin->setGeometry(QRect(30, 170, 111, 31));
        minSSPin->setFont(font1);
        minSSPin->setMaximum(255);

        retranslateUi(CalibrateColors);

        QMetaObject::connectSlotsByName(CalibrateColors);
    } // setupUi

    void retranslateUi(QWidget *CalibrateColors)
    {
        CalibrateColors->setWindowTitle(QApplication::translate("CalibrateColors", "Color Settings", nullptr));
        colorFrame->setText(QString());
        saveButton->setText(QApplication::translate("CalibrateColors", "Save", nullptr));
        label_4->setText(QApplication::translate("CalibrateColors", "H", nullptr));
        label_5->setText(QApplication::translate("CalibrateColors", "S", nullptr));
        label_6->setText(QApplication::translate("CalibrateColors", "V", nullptr));
        resetButton->setText(QApplication::translate("CalibrateColors", "Reset", nullptr));
        resetAllButton->setText(QApplication::translate("CalibrateColors", "Reset All", nullptr));
        groupBox->setTitle(QApplication::translate("CalibrateColors", "Color", nullptr));
        binaryCheck->setText(QApplication::translate("CalibrateColors", "Binary Image", nullptr));
        colorBox->setItemText(0, QApplication::translate("CalibrateColors", "Orange", nullptr));
        colorBox->setItemText(1, QApplication::translate("CalibrateColors", "Yellow", nullptr));
        colorBox->setItemText(2, QApplication::translate("CalibrateColors", "Blue", nullptr));
        colorBox->setItemText(3, QApplication::translate("CalibrateColors", "Cyan", nullptr));
        colorBox->setItemText(4, QApplication::translate("CalibrateColors", "Green", nullptr));
        colorBox->setItemText(5, QApplication::translate("CalibrateColors", "Pink", nullptr));
        colorBox->setItemText(6, QApplication::translate("CalibrateColors", "Purple", nullptr));
        colorBox->setItemText(7, QApplication::translate("CalibrateColors", "Red", nullptr));
        colorBox->setItemText(8, QApplication::translate("CalibrateColors", "Brown", nullptr));

        label_7->setText(QApplication::translate("CalibrateColors", "V", nullptr));
        label_8->setText(QApplication::translate("CalibrateColors", "S", nullptr));
        label_9->setText(QApplication::translate("CalibrateColors", "H", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalibrateColors: public Ui_CalibrateColors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATECOLORS_H
