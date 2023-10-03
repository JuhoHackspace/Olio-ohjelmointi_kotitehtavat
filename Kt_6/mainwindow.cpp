#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 1;
    result = 0.0;
    operand = 0;
    number1 = "";
    number2 = "";
    result_displayed = false;
    for (int i = 0; i <= 9; ++i) {
        QString buttonName = "N" + QString::number(i);
        QPushButton* button = MainWindow::findChild<QPushButton*>(buttonName);

        if (button) {
            connect(button, SIGNAL(clicked()), this, SLOT(numberClickedHandler()));
        }
    }
    connect(ui->enter,SIGNAL(clicked()),this,SLOT(enterHandler()));
    connect(ui->clear,SIGNAL(clicked()),this,SLOT(clearHandler()));
    connect(ui->add,SIGNAL(clicked()),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->sub,SIGNAL(clicked()),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->mul,SIGNAL(clicked()),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->div,SIGNAL(clicked()),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->dot,SIGNAL(clicked()),this,SLOT(dotHandler()));
    connect(ui->prefix,SIGNAL(clicked()),this,SLOT(prefixHandler()));
    connect(ui->erase,SIGNAL(clicked()),this,SLOT(eraseHandler()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * btn = qobject_cast<QPushButton*>(sender());
    QString name = btn->objectName();

    if(state == 1 && !result_displayed) {
        number1.append(name.last(1));
        ui->num1->setText(number1);

    }
    else if(state == 2 && !result_displayed) {
        number2.append(name.last(1));
        ui->num2->setText(number2);
    }
}

void MainWindow::clearHandler()
{
    state = 1;
    number1 = "";
    number2 = "";
    result_displayed = false;
    resetLineEdits();
}

void MainWindow::enterHandler()
{
    if(number1 != "" && number2 != "") {
        float nmbr1 = number1.toFloat();
        float nmbr2 = number2.toFloat();
        result_displayed = true;

        if(operand == 3 && nmbr2 == 0) {
            ui->result->setText(QString("Math error"));
        }
        else {
            switch(operand) {
            case 0: result = nmbr1 + nmbr2;
                break;
            case 1: result = nmbr1 - nmbr2;
                break;
            case 2: result = nmbr1 * nmbr2;
                break;
            case 3: result = nmbr1 / nmbr2;
                break;
            }
            ui->result->setText(QString::number(result));
        }
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * btn = qobject_cast<QPushButton*>(sender());
    QString name = btn->objectName();

    if(name == "add") {
        operand = 0;
    }
    else if(name == "sub") {
        operand = 1;
    }
    else if(name == "mul") {
        operand = 2;
    }
    else {
        operand = 3;
    }
    state = 2;
}

void MainWindow::dotHandler()
{
    if(state == 1) {
        if(!number1.isEmpty()) {
            number1.append(QString("."));
            ui->num1->setText(number1);
        }
    }
    else {
        if(!number2.isEmpty() && !result_displayed) {
            number2.append(QString("."));
            ui->num2->setText(number2);
        }
    }
}

void MainWindow::prefixHandler()
{
    if(state == 1) {
        if(number1.isEmpty()) {
            number1.append(QString("-"));
            ui->num1->setText(number1);
        }
        else if(number1.size() == 1) {
            if(number1[0] == '-') {
                number1.chop(1);
                ui->num1->setText(number1);
            }
        }
    }
    else {
        if(number2.isEmpty()) {
            number2.append(QString("-"));
            ui->num2->setText(number2);
        }
        else if(number2.size() == 1) {
            if(number2[0] == '-') {
                number2.chop(1);
                ui->num2->setText(number2);
            }
        }
    }

}

void MainWindow::eraseHandler()
{
    if(state == 1 && !number1.isEmpty()) {
        number1.chop(1);
        ui->num1->setText(number1);
    }
    else if(state == 2 && !number2.isEmpty() && !result_displayed) {
        number2.chop(1);
        ui->num2->setText(number2);
    }
}

void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

