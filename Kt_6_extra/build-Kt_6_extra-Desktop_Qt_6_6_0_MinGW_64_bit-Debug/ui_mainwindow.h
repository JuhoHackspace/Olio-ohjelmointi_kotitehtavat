/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *N00;
    QPushButton *N01;
    QPushButton *N02;
    QPushButton *N10;
    QPushButton *N11;
    QPushButton *N12;
    QPushButton *N20;
    QPushButton *N21;
    QPushButton *N22;
    QPushButton *Start;
    QLabel *Player_turn;
    QLabel *background;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(503, 329);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        N00 = new QPushButton(centralwidget);
        N00->setObjectName("N00");
        N00->setGeometry(QRect(50, 50, 51, 51));
        N00->setStyleSheet(QString::fromUtf8("font: 18pt \"Ravie\";"));
        N01 = new QPushButton(centralwidget);
        N01->setObjectName("N01");
        N01->setGeometry(QRect(110, 50, 51, 51));
        N01->setStyleSheet(QString::fromUtf8("font: 18pt \"Ravie\";"));
        N02 = new QPushButton(centralwidget);
        N02->setObjectName("N02");
        N02->setGeometry(QRect(170, 50, 51, 51));
        N02->setStyleSheet(QString::fromUtf8("font: 18pt \"Ravie\";"));
        N10 = new QPushButton(centralwidget);
        N10->setObjectName("N10");
        N10->setGeometry(QRect(50, 110, 51, 51));
        N10->setStyleSheet(QString::fromUtf8("font: 18pt \"Ravie\";"));
        N11 = new QPushButton(centralwidget);
        N11->setObjectName("N11");
        N11->setGeometry(QRect(110, 110, 51, 51));
        N11->setStyleSheet(QString::fromUtf8("font: 18pt \"Ravie\";"));
        N12 = new QPushButton(centralwidget);
        N12->setObjectName("N12");
        N12->setGeometry(QRect(170, 110, 51, 51));
        N12->setStyleSheet(QString::fromUtf8("font: 18pt \"Ravie\";"));
        N20 = new QPushButton(centralwidget);
        N20->setObjectName("N20");
        N20->setGeometry(QRect(50, 170, 51, 51));
        N20->setStyleSheet(QString::fromUtf8("font: 18pt \"Ravie\";"));
        N21 = new QPushButton(centralwidget);
        N21->setObjectName("N21");
        N21->setGeometry(QRect(110, 170, 51, 51));
        N21->setStyleSheet(QString::fromUtf8("font: 18pt \"Ravie\";"));
        N22 = new QPushButton(centralwidget);
        N22->setObjectName("N22");
        N22->setGeometry(QRect(170, 170, 51, 51));
        N22->setStyleSheet(QString::fromUtf8("font: 18pt \"Ravie\";"));
        Start = new QPushButton(centralwidget);
        Start->setObjectName("Start");
        Start->setGeometry(QRect(290, 50, 101, 41));
        Start->setStyleSheet(QString::fromUtf8("font: 14pt \"Imprint MT Shadow\";\n"
"color: rgb(255, 255, 255);\n"
"background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.995, fx:0.5, fy:0.5, stop:0.0828729 rgba(255, 185, 185, 255), stop:0.325967 rgba(165, 18, 0, 255))\n"
"\n"
""));
        Player_turn = new QLabel(centralwidget);
        Player_turn->setObjectName("Player_turn");
        Player_turn->setGeometry(QRect(290, 100, 191, 31));
        Player_turn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 24pt \"Rockwell Condensed\";\n"
""));
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(0, -20, 511, 331));
        background->setStyleSheet(QString::fromUtf8("background-image: url(../TicTacToe.jpg)"));
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        N00->raise();
        N01->raise();
        N02->raise();
        N10->raise();
        N11->raise();
        N12->raise();
        N20->raise();
        N21->raise();
        N22->raise();
        Start->raise();
        Player_turn->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 503, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        N00->setText(QString());
        N01->setText(QString());
        N02->setText(QString());
        N10->setText(QString());
        N11->setText(QString());
        N12->setText(QString());
        N20->setText(QString());
        N21->setText(QString());
        N22->setText(QString());
        Start->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        Player_turn->setText(QString());
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
