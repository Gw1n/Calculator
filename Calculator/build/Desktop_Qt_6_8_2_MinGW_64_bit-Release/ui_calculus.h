/********************************************************************************
** Form generated from reading UI file 'calculus.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULUS_H
#define UI_CALCULUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculus
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *delete_2;
    QPushButton *clear;
    QPushButton *mode_choosing;
    QPushButton *equality;
    QPushButton *zero;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *four;
    QPushButton *nine;
    QPushButton *seven;
    QPushButton *six;
    QPushButton *point;
    QPushButton *eight;
    QPushButton *five;
    QPushButton *percentage;
    QPushButton *multicplication;
    QPushButton *division;
    QPushButton *sum;
    QPushButton *difference;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculus)
    {
        if (Calculus->objectName().isEmpty())
            Calculus->setObjectName("Calculus");
        Calculus->resize(400, 767);
        Calculus->setStyleSheet(QString::fromUtf8("color: rgb(43, 43, 43);"));
        centralwidget = new QWidget(Calculus);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(5, 0, 390, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("SF Pro Display")});
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-color: rgb(255, 255, 255);\n"
"border-radius: 20px;\n"
""));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(5, 90, 390, 591));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(90, 90, 90);\n"
"border-style: solid;\n"
"border-radius: 20px;\n"
"border-width: 1px;\n"
"border-color: rgb(255, 255, 255)"));
        delete_2 = new QPushButton(groupBox);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(10, 10, 85, 85));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("SF Pro Display")});
        font1.setPointSize(12);
        font1.setBold(true);
        delete_2->setFont(font1);
        delete_2->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        clear = new QPushButton(groupBox);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(105, 10, 85, 85));
        clear->setFont(font1);
        clear->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        mode_choosing = new QPushButton(groupBox);
        mode_choosing->setObjectName("mode_choosing");
        mode_choosing->setGeometry(QRect(200, 10, 85, 85));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("SF Pro Display")});
        font2.setPointSize(12);
        font2.setBold(false);
        mode_choosing->setFont(font2);
        mode_choosing->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        equality = new QPushButton(groupBox);
        equality->setObjectName("equality");
        equality->setGeometry(QRect(295, 10, 85, 85));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("SF Pro Display")});
        font3.setPointSize(24);
        font3.setBold(false);
        equality->setFont(font3);
        equality->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 60, 0);\n"
"color: rgb(255, 255, 255);"));
        zero = new QPushButton(groupBox);
        zero->setObjectName("zero");
        zero->setGeometry(QRect(10, 105, 85, 85));
        zero->setFont(font3);
        zero->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        one = new QPushButton(groupBox);
        one->setObjectName("one");
        one->setGeometry(QRect(105, 105, 85, 85));
        one->setFont(font3);
        one->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        two = new QPushButton(groupBox);
        two->setObjectName("two");
        two->setGeometry(QRect(200, 105, 85, 85));
        two->setFont(font3);
        two->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        three = new QPushButton(groupBox);
        three->setObjectName("three");
        three->setGeometry(QRect(295, 105, 85, 85));
        three->setFont(font3);
        three->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        four = new QPushButton(groupBox);
        four->setObjectName("four");
        four->setGeometry(QRect(105, 200, 85, 85));
        four->setFont(font3);
        four->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        nine = new QPushButton(groupBox);
        nine->setObjectName("nine");
        nine->setGeometry(QRect(295, 295, 85, 85));
        nine->setFont(font3);
        nine->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        seven = new QPushButton(groupBox);
        seven->setObjectName("seven");
        seven->setGeometry(QRect(105, 295, 85, 85));
        seven->setFont(font3);
        seven->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        six = new QPushButton(groupBox);
        six->setObjectName("six");
        six->setGeometry(QRect(295, 200, 85, 85));
        six->setFont(font3);
        six->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        point = new QPushButton(groupBox);
        point->setObjectName("point");
        point->setGeometry(QRect(10, 200, 85, 85));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("SF Pro Display")});
        font4.setPointSize(24);
        font4.setBold(true);
        point->setFont(font4);
        point->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        eight = new QPushButton(groupBox);
        eight->setObjectName("eight");
        eight->setGeometry(QRect(200, 295, 85, 85));
        eight->setFont(font3);
        eight->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        five = new QPushButton(groupBox);
        five->setObjectName("five");
        five->setGeometry(QRect(200, 200, 85, 85));
        five->setFont(font3);
        five->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        percentage = new QPushButton(groupBox);
        percentage->setObjectName("percentage");
        percentage->setGeometry(QRect(10, 295, 85, 85));
        percentage->setFont(font4);
        percentage->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        multicplication = new QPushButton(groupBox);
        multicplication->setObjectName("multicplication");
        multicplication->setGeometry(QRect(200, 390, 85, 85));
        multicplication->setFont(font3);
        multicplication->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);\n"
""));
        division = new QPushButton(groupBox);
        division->setObjectName("division");
        division->setGeometry(QRect(295, 390, 85, 85));
        division->setFont(font3);
        division->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        sum = new QPushButton(groupBox);
        sum->setObjectName("sum");
        sum->setGeometry(QRect(10, 390, 85, 85));
        sum->setFont(font4);
        sum->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        difference = new QPushButton(groupBox);
        difference->setObjectName("difference");
        difference->setGeometry(QRect(105, 390, 85, 85));
        difference->setFont(font3);
        difference->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);\n"
"color: rgb(255, 255, 255);"));
        Calculus->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculus);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 25));
        Calculus->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculus);
        statusbar->setObjectName("statusbar");
        Calculus->setStatusBar(statusbar);

        retranslateUi(Calculus);

        QMetaObject::connectSlotsByName(Calculus);
    } // setupUi

    void retranslateUi(QMainWindow *Calculus)
    {
        Calculus->setWindowTitle(QCoreApplication::translate("Calculus", "Calculus", nullptr));
        label->setText(QCoreApplication::translate("Calculus", "0", nullptr));
        groupBox->setTitle(QString());
        delete_2->setText(QCoreApplication::translate("Calculus", "\342\214\246", nullptr));
        clear->setText(QCoreApplication::translate("Calculus", "Clear", nullptr));
        mode_choosing->setText(QCoreApplication::translate("Calculus", "Choose \n"
" mode", nullptr));
        equality->setText(QCoreApplication::translate("Calculus", "=", nullptr));
        zero->setText(QCoreApplication::translate("Calculus", "0", nullptr));
        one->setText(QCoreApplication::translate("Calculus", "1", nullptr));
        two->setText(QCoreApplication::translate("Calculus", "2", nullptr));
        three->setText(QCoreApplication::translate("Calculus", "3", nullptr));
        four->setText(QCoreApplication::translate("Calculus", "4", nullptr));
        nine->setText(QCoreApplication::translate("Calculus", "9", nullptr));
        seven->setText(QCoreApplication::translate("Calculus", "7", nullptr));
        six->setText(QCoreApplication::translate("Calculus", "6", nullptr));
        point->setText(QCoreApplication::translate("Calculus", ".", nullptr));
        eight->setText(QCoreApplication::translate("Calculus", "8", nullptr));
        five->setText(QCoreApplication::translate("Calculus", "5", nullptr));
        percentage->setText(QCoreApplication::translate("Calculus", "%", nullptr));
        multicplication->setText(QCoreApplication::translate("Calculus", "\303\227", nullptr));
        division->setText(QCoreApplication::translate("Calculus", "\303\267", nullptr));
        sum->setText(QCoreApplication::translate("Calculus", "+", nullptr));
        difference->setText(QCoreApplication::translate("Calculus", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculus: public Ui_Calculus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULUS_H
