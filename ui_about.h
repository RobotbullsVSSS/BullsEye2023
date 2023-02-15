/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label;
    QLabel *label_8;
    QLabel *label_9;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(401, 231);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(About->sizePolicy().hasHeightForWidth());
        About->setSizePolicy(sizePolicy);
        About->setMinimumSize(QSize(401, 231));
        About->setMaximumSize(QSize(401, 231));
        label = new QLabel(About);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 130, 381, 111));
        label_8 = new QLabel(About);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 60, 371, 91));
        label_9 = new QLabel(About);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, -10, 371, 91));
        line = new QFrame(About);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 50, 291, 41));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(About);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(60, 120, 291, 41));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About", nullptr));
        label->setText(QApplication::translate("About", "<html><head/><body><p align=\"center\">Todos cr\303\251ditos a Drauzio Ramos Oppenheimer,</p><p align=\"center\">autor integral do programa, ao INATEL e a</p><p align=\"center\">RobotBulls por me fornecerem apoio.</p></body></html>", nullptr));
        label_8->setText(QApplication::translate("About", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-style:italic; color:#0055ff;\">INATEL</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("About", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-style:italic; color:#ffff07;\">ROBOTBULLS</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
