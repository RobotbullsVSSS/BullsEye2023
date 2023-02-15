/********************************************************************************
** Form generated from reading UI file 'calibratecamera.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATECAMERA_H
#define UI_CALIBRATECAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <videolabel.h>

QT_BEGIN_NAMESPACE

class Ui_CalibrateCamera
{
public:
    VideoLabel *cameraFrame;
    QPushButton *saveButton;
    QPushButton *resetButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QComboBox *cameraCombo;
    QGroupBox *groupBox_4;
    QPushButton *calibrateButton;
    QComboBox *distortionCamera;
    QCheckBox *applyDistortion;
    QGroupBox *groupBox_3;
    QRadioButton *warpBottomRight;
    QRadioButton *warpTopLeft;
    QRadioButton *warpBottomLeft;
    QRadioButton *warpTopRight;
    QLabel *label;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QSlider *saturationSlider;
    QLabel *label_6;
    QSlider *brightnessSlider;
    QSlider *contrastSlider;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_7;
    QSlider *saturationSlider_2;
    QLabel *label_8;
    QSlider *saturationSlider_3;
    QSlider *sharpnessSlider;
    QLabel *label_9;
    QSlider *saturationSlider_5;
    QLabel *label_10;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *CalibrateCamera)
    {
        if (CalibrateCamera->objectName().isEmpty())
            CalibrateCamera->setObjectName(QStringLiteral("CalibrateCamera"));
        CalibrateCamera->setEnabled(true);
        CalibrateCamera->resize(842, 501);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalibrateCamera->sizePolicy().hasHeightForWidth());
        CalibrateCamera->setSizePolicy(sizePolicy);
        CalibrateCamera->setMinimumSize(QSize(842, 501));
        CalibrateCamera->setMaximumSize(QSize(981, 621));
        cameraFrame = new VideoLabel(CalibrateCamera);
        cameraFrame->setObjectName(QStringLiteral("cameraFrame"));
        cameraFrame->setGeometry(QRect(10, 10, 640, 480));
        sizePolicy.setHeightForWidth(cameraFrame->sizePolicy().hasHeightForWidth());
        cameraFrame->setSizePolicy(sizePolicy);
        cameraFrame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        cameraFrame->setFrameShape(QFrame::Panel);
        cameraFrame->setAlignment(Qt::AlignCenter);
        saveButton = new QPushButton(CalibrateCamera);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(660, 440, 175, 51));
        QFont font;
        font.setPointSize(13);
        saveButton->setFont(font);
        resetButton = new QPushButton(CalibrateCamera);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(660, 410, 175, 21));
        QFont font1;
        font1.setPointSize(11);
        resetButton->setFont(font1);
        tabWidget = new QTabWidget(CalibrateCamera);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(660, 10, 175, 391));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 151, 81));
        QFont font2;
        font2.setPointSize(14);
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QStringLiteral(""));
        groupBox->setAlignment(Qt::AlignCenter);
        cameraCombo = new QComboBox(groupBox);
        cameraCombo->addItem(QString());
        cameraCombo->addItem(QString());
        cameraCombo->addItem(QString());
        cameraCombo->addItem(QString());
        cameraCombo->setObjectName(QStringLiteral("cameraCombo"));
        cameraCombo->setGeometry(QRect(10, 40, 131, 31));
        QFont font3;
        font3.setPointSize(10);
        cameraCombo->setFont(font3);
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 90, 151, 131));
        groupBox_4->setFont(font2);
        groupBox_4->setAlignment(Qt::AlignCenter);
        calibrateButton = new QPushButton(groupBox_4);
        calibrateButton->setObjectName(QStringLiteral("calibrateButton"));
        calibrateButton->setGeometry(QRect(10, 100, 131, 21));
        calibrateButton->setFont(font1);
        distortionCamera = new QComboBox(groupBox_4);
        distortionCamera->addItem(QString());
        distortionCamera->addItem(QString());
        distortionCamera->addItem(QString());
        distortionCamera->setObjectName(QStringLiteral("distortionCamera"));
        distortionCamera->setGeometry(QRect(10, 40, 131, 31));
        distortionCamera->setFont(font3);
        applyDistortion = new QCheckBox(groupBox_4);
        applyDistortion->setObjectName(QStringLiteral("applyDistortion"));
        applyDistortion->setGeometry(QRect(11, 70, 131, 31));
        applyDistortion->setFont(font3);
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 230, 151, 121));
        groupBox_3->setFont(font2);
        groupBox_3->setAlignment(Qt::AlignCenter);
        warpBottomRight = new QRadioButton(groupBox_3);
        buttonGroup = new QButtonGroup(CalibrateCamera);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(warpBottomRight);
        warpBottomRight->setObjectName(QStringLiteral("warpBottomRight"));
        warpBottomRight->setGeometry(QRect(120, 90, 21, 31));
        warpBottomRight->setFont(font3);
        warpBottomRight->setLayoutDirection(Qt::RightToLeft);
        warpTopLeft = new QRadioButton(groupBox_3);
        buttonGroup->addButton(warpTopLeft);
        warpTopLeft->setObjectName(QStringLiteral("warpTopLeft"));
        warpTopLeft->setGeometry(QRect(10, 30, 21, 31));
        warpTopLeft->setFont(font3);
        warpTopLeft->setChecked(true);
        warpBottomLeft = new QRadioButton(groupBox_3);
        buttonGroup->addButton(warpBottomLeft);
        warpBottomLeft->setObjectName(QStringLiteral("warpBottomLeft"));
        warpBottomLeft->setGeometry(QRect(10, 90, 21, 31));
        warpBottomLeft->setFont(font3);
        warpTopRight = new QRadioButton(groupBox_3);
        buttonGroup->addButton(warpTopRight);
        warpTopRight->setObjectName(QStringLiteral("warpTopRight"));
        warpTopRight->setGeometry(QRect(120, 30, 21, 31));
        warpTopRight->setFont(font3);
        warpTopRight->setLayoutDirection(Qt::RightToLeft);
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 50, 71, 51));
        label->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 83);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 151, 321));
        groupBox_2->setFont(font2);
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setFlat(false);
        saturationSlider = new QSlider(groupBox_2);
        saturationSlider->setObjectName(QStringLiteral("saturationSlider"));
        saturationSlider->setGeometry(QRect(10, 130, 131, 21));
        saturationSlider->setMaximum(128);
        saturationSlider->setPageStep(1);
        saturationSlider->setValue(64);
        saturationSlider->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 110, 71, 21));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);
        brightnessSlider = new QSlider(groupBox_2);
        brightnessSlider->setObjectName(QStringLiteral("brightnessSlider"));
        brightnessSlider->setGeometry(QRect(10, 50, 131, 21));
        brightnessSlider->setMinimum(-64);
        brightnessSlider->setMaximum(64);
        brightnessSlider->setSingleStep(1);
        brightnessSlider->setPageStep(1);
        brightnessSlider->setValue(0);
        brightnessSlider->setOrientation(Qt::Horizontal);
        contrastSlider = new QSlider(groupBox_2);
        contrastSlider->setObjectName(QStringLiteral("contrastSlider"));
        contrastSlider->setGeometry(QRect(10, 90, 131, 21));
        contrastSlider->setMaximum(64);
        contrastSlider->setSingleStep(1);
        contrastSlider->setPageStep(1);
        contrastSlider->setValue(32);
        contrastSlider->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 70, 71, 21));
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 30, 71, 21));
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 190, 71, 21));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);
        saturationSlider_2 = new QSlider(groupBox_2);
        saturationSlider_2->setObjectName(QStringLiteral("saturationSlider_2"));
        saturationSlider_2->setEnabled(false);
        saturationSlider_2->setGeometry(QRect(10, 210, 131, 21));
        saturationSlider_2->setMinimum(72);
        saturationSlider_2->setMaximum(500);
        saturationSlider_2->setPageStep(1);
        saturationSlider_2->setValue(286);
        saturationSlider_2->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 230, 71, 21));
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignCenter);
        saturationSlider_3 = new QSlider(groupBox_2);
        saturationSlider_3->setObjectName(QStringLiteral("saturationSlider_3"));
        saturationSlider_3->setEnabled(false);
        saturationSlider_3->setGeometry(QRect(10, 250, 131, 21));
        saturationSlider_3->setMaximum(100);
        saturationSlider_3->setPageStep(1);
        saturationSlider_3->setValue(50);
        saturationSlider_3->setOrientation(Qt::Horizontal);
        sharpnessSlider = new QSlider(groupBox_2);
        sharpnessSlider->setObjectName(QStringLiteral("sharpnessSlider"));
        sharpnessSlider->setGeometry(QRect(10, 170, 131, 21));
        sharpnessSlider->setMaximum(6);
        sharpnessSlider->setPageStep(1);
        sharpnessSlider->setValue(3);
        sharpnessSlider->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 150, 71, 21));
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);
        saturationSlider_5 = new QSlider(groupBox_2);
        saturationSlider_5->setObjectName(QStringLiteral("saturationSlider_5"));
        saturationSlider_5->setEnabled(false);
        saturationSlider_5->setGeometry(QRect(10, 290, 131, 21));
        saturationSlider_5->setMaximum(2);
        saturationSlider_5->setPageStep(1);
        saturationSlider_5->setValue(1);
        saturationSlider_5->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 270, 71, 21));
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_2, QString());

        retranslateUi(CalibrateCamera);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CalibrateCamera);
    } // setupUi

    void retranslateUi(QWidget *CalibrateCamera)
    {
        CalibrateCamera->setWindowTitle(QApplication::translate("CalibrateCamera", "Camera Settings", nullptr));
        cameraFrame->setText(QString());
        saveButton->setText(QApplication::translate("CalibrateCamera", "Save", nullptr));
        resetButton->setText(QApplication::translate("CalibrateCamera", "Reset", nullptr));
        groupBox->setTitle(QApplication::translate("CalibrateCamera", "Input", nullptr));
        cameraCombo->setItemText(0, QApplication::translate("CalibrateCamera", "/dev/video0", nullptr));
        cameraCombo->setItemText(1, QApplication::translate("CalibrateCamera", "/dev/video1", nullptr));
        cameraCombo->setItemText(2, QApplication::translate("CalibrateCamera", "/dev/video2", nullptr));
        cameraCombo->setItemText(3, QApplication::translate("CalibrateCamera", "/dev/video3", nullptr));

        groupBox_4->setTitle(QApplication::translate("CalibrateCamera", "Distortion", nullptr));
        calibrateButton->setText(QApplication::translate("CalibrateCamera", "Calibrate", nullptr));
        distortionCamera->setItemText(0, QApplication::translate("CalibrateCamera", "640X480", nullptr));
        distortionCamera->setItemText(1, QApplication::translate("CalibrateCamera", "800X600", nullptr));
        distortionCamera->setItemText(2, QApplication::translate("CalibrateCamera", "CUSTOM", nullptr));

        applyDistortion->setText(QApplication::translate("CalibrateCamera", "Apply Correction", nullptr));
        groupBox_3->setTitle(QApplication::translate("CalibrateCamera", "Perspective", nullptr));
        warpBottomRight->setText(QString());
        warpTopLeft->setText(QString());
        warpBottomLeft->setText(QString());
        warpTopRight->setText(QString());
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CalibrateCamera", "Input", nullptr));
        groupBox_2->setTitle(QApplication::translate("CalibrateCamera", "Settings", nullptr));
        label_6->setText(QApplication::translate("CalibrateCamera", "Saturation", nullptr));
        label_5->setText(QApplication::translate("CalibrateCamera", "Constrast", nullptr));
        label_4->setText(QApplication::translate("CalibrateCamera", "Brightness", nullptr));
        label_7->setText(QApplication::translate("CalibrateCamera", "Gamma", nullptr));
        label_8->setText(QApplication::translate("CalibrateCamera", "Gain", nullptr));
        label_9->setText(QApplication::translate("CalibrateCamera", "Sharpness", nullptr));
        label_10->setText(QApplication::translate("CalibrateCamera", "Backlight", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CalibrateCamera", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalibrateCamera: public Ui_CalibrateCamera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATECAMERA_H
