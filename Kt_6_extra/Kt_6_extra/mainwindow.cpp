#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initializeBoard();
    enableDisable(true);
    game_in_progress = false;
    MainWindow::setFixedSize(503,329);
    ui->Player_turn->setText(QString("Aloita peli"));
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            QString btn_name = QString('N') + QString::number(row) + QString::number(col);
            QPushButton * button = this->findChild<QPushButton*>(btn_name);
            if(button) {
                connect(button,SIGNAL(clicked()),this,SLOT(onButtonClick()));
            }
        }
    }
    connect(ui->Start,SIGNAL(clicked()),this,SLOT(gameStart()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClick()
{
    QPushButton * cnt = qobject_cast<QPushButton*>(sender());
    if(cnt->text()== "") {
        cnt->setText(QString(this->currentPlayer));
        cnt->setDisabled(true);
        count++;
    }
    if(winCheck()) {
        ui->Player_turn->setText(QString("Pelaaja "+QString(this->currentPlayer)+" voitti"));
        enableDisable(true);
    }
    else if(count == 9) {
        ui->Player_turn->setText(QString("Tasapeli"));
        enableDisable(true);
    }
    else {
        if(currentPlayer == 'X') {
            currentPlayer = 'O';
            ui->Player_turn->setText(QString("Pelaajan O vuoro"));
        }
        else {
            currentPlayer = 'X';
            ui->Player_turn->setText(QString("Pelaajan X vuoro"));
        }
    }
}

void MainWindow::gameStart()
{
    enableDisable(false);
    resetBoard();
    game_in_progress = true;
    count = 0;
    currentPlayer = 'X';
    ui->Start->setText(QString("Restart"));
    ui->Player_turn->setText(QString("Pelaajan "+QString(this->currentPlayer)+" vuoro"));
}

void MainWindow::initializeBoard()
{
    game_board.resize(3, std::vector<QPushButton*>(3,nullptr));
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            QString btn_name = QString('N') + QString::number(row) + QString::number(col);
            QPushButton * button = this->findChild<QPushButton*>(btn_name);
            if(button) {
                game_board[row][col] = button;
            }
        }
    }
}

bool MainWindow::winCheck()
{
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            if(game_board[row][0]->text() == this->currentPlayer &&
               game_board[row][1]->text() == this->currentPlayer &&
               game_board[row][2]->text() == this->currentPlayer) {
                return true;
            }
            if(game_board[0][col]->text() == this->currentPlayer &&
               game_board[1][col]->text() == this->currentPlayer &&
               game_board[2][col]->text() == this->currentPlayer) {
                return true;
            }
        }
    }

    if((game_board[0][0]->text() == this->currentPlayer &&
         game_board[1][1]->text() == this->currentPlayer &&
         game_board[2][2]->text() == this->currentPlayer) ||
        (game_board[0][2]->text() == this->currentPlayer &&
         game_board[1][1]->text() == this->currentPlayer &&
         game_board[2][0]->text() == this->currentPlayer))
    {
        return true;
    }
    return false;
}

void MainWindow::enableDisable(bool init_start)
{
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            game_board[row][col]->setDisabled(init_start);

        }
    }
}

void MainWindow::resetBoard()
{
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            game_board[row][col]->setText(QString(""));
        }
    }
}

