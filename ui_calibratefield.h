/********************************************************************************
** Form generated from reading UI file 'calibratefield.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATEFIELD_H
#define UI_CALIBRATEFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>
#include <videolabel.h>

QT_BEGIN_NAMESPACE

class Ui_CalibrateField
{
public:
    VideoLabel *cameraLabel;
    QPushButton *saveButton;
    QGroupBox *groupBox;
    QComboBox *adjustBox1;
    QRadioButton *bottomLeft;
    QRadioButton *topLeft;
    QRadioButton *bottomRight;
    QRadioButton *topRight;
    QLabel *label;
    QPushButton *saveButton_2;

    void setupUi(QWidget *CalibrateField)
    {
        if (CalibrateField->objectName().isEmpty())
            CalibrateField->setObjectName(QStringLiteral("CalibrateField"));
        CalibrateField->resize(821, 501);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalibrateField->sizePolicy().hasHeightForWidth());
        CalibrateField->setSizePolicy(sizePolicy);
        CalibrateField->setMinimumSize(QSize(821, 501));
        CalibrateField->setMaximumSize(QSize(821, 501));
        cameraLabel = new VideoLabel(CalibrateField);
        cameraLabel->setObjectName(QStringLiteral("cameraLabel"));
        cameraLabel->setGeometry(QRect(10, 10, 640, 480));
        cameraLabel->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        cameraLabel->setFrameShape(QFrame::Panel);
        cameraLabel->setAlignment(Qt::AlignCenter);
        saveButton = new QPushButton(CalibrateField);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(660, 440, 151, 51));
        QFont font;
        font.setPointSize(13);
        saveButton->setFont(font);
        groupBox = new QGroupBox(CalibrateField);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(660, 10, 151, 171));
        QFont font1;
        font1.setPointSize(14);
        groupBox->setFont(font1);
        groupBox->setAlignment(Qt::AlignCenter);
        adjustBox1 = new QComboBox(groupBox);
        adjustBox1->addItem(QString());
        adjustBox1->addItem(QString());
        adjustBox1->addItem(QString());
        adjustBox1->addItem(QString());
        adjustBox1->setObjectName(QStringLiteral("adjustBox1"));
        adjustBox1->setGeometry(QRect(10, 40, 131, 31));
        QFont font2;
        font2.setPointSize(10);
        adjustBox1->setFont(font2);
        bottomLeft = new QRadioButton(groupBox);
        bottomLeft->setObjectName(QStringLiteral("bottomLeft"));
        bottomLeft->setGeometry(QRect(10, 140, 31, 31));
        bottomLeft->setFont(font2);
        topLeft = new QRadioButton(groupBox);
        topLeft->setObjectName(QStringLiteral("topLeft"));
        topLeft->setGeometry(QRect(10, 80, 31, 31));
        topLeft->setFont(font2);
        topLeft->setChecked(true);
        bottomRight = new QRadioButton(groupBox);
        bottomRight->setObjectName(QStringLiteral("bottomRight"));
        bottomRight->setGeometry(QRect(110, 140, 31, 31));
        bottomRight->setFont(font2);
        bottomRight->setLayoutDirection(Qt::RightToLeft);
        topRight = new QRadioButton(groupBox);
        topRight->setObjectName(QStringLiteral("topRight"));
        topRight->setGeometry(QRect(110, 80, 31, 31));
        topRight->setFont(font2);
        topRight->setLayoutDirection(Qt::RightToLeft);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 100, 71, 51));
        label->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 83);"));
        saveButton_2 = new QPushButton(CalibrateField);
        saveButton_2->setObjectName(QStringLiteral("saveButton_2"));
        saveButton_2->setGeometry(QRect(660, 390, 151, 41));
        QFont font3;
        font3.setPointSize(11);
        saveButton_2->setFont(font3);

        retranslateUi(CalibrateField);

        QMetaObject::connectSlotsByName(CalibrateField);
    } // setupUi

    void retranslateUi(QWidget *CalibrateField)
    {
        CalibrateField->setWindowTitle(QApplication::translate("CalibrateField", "Field Settings", nullptr));
        cameraLabel->setText(QString());
        saveButton->setText(QApplication::translate("CalibrateField", "Save", nullptr));
        groupBox->setTitle(QApplication::translate("CalibrateField", "Reference", nullptr));
        adjustBox1->setItemText(0, QApplication::translate("CalibrateField", "Field", nullptr));
        adjustBox1->setItemText(1, QApplication::translate("CalibrateField", "Left Area", nullptr));
        adjustBox1->setItemText(2, QApplication::translate("CalibrateField", "Right Area", nullptr));
        adjustBox1->setItemText(3, QApplication::translate("CalibrateField", "Goal", nullptr));

        bottomLeft->setText(QString());
        topLeft->setText(QString());
        bottomRight->setText(QString());
        topRight->setText(QString());
        label->setText(QString());
        saveButton_2->setText(QApplication::translate("CalibrateField", "Reset All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalibrateField: public Ui_CalibrateField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATEFIELD_H
