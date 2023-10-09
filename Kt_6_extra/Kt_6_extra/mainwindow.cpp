#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initializeBoard(); //Alustetaan pelialusta
    enableDisable(true); //Disabloidaan kaikki pelinapit aluksi
    MainWindow::setFixedSize(503,329); //Asetetaan ikkunaan vakiokoko
    ui->Player_turn->setText(QString("Aloita peli"));
    for(int row = 0; row < 3; row++) { //Tässä jo käytetään hyödyksi game_boardia
        for(int col = 0; col < 3; col++) {
            QPushButton * button = game_board[row][col];
            connect(button,SIGNAL(clicked()),this,SLOT(onButtonClick()));
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
        enableDisable(true); //Disabloidaan voiton jälkeen kaikki napit
    }
    else if(count == 9) { //Jos painalluksia 9 ja ei voittoa, niin tasapeli
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
    enableDisable(false); //Enabloidaan pelin aluksi pelinapit
    resetBoard(); //Pyyhitään edellinen peli napeista
    count = 0;
    currentPlayer = 'X';
    ui->Start->setText(QString("Restart")); //Asetetaan tekstiksi Restart ensimmäisen painalluksen jälkeen
    ui->Player_turn->setText(QString("Pelaajan "+QString(this->currentPlayer)+" vuoro"));
}

void MainWindow::initializeBoard()
{
    game_board.resize(3, std::vector<QPushButton*>(3,nullptr)); //Laitetaan 2D-vektorille koko, jotta napit voidaan asettaa sinne
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            QString btn_name = QString('N') + QString::number(row) + QString::number(col); //Pelinapit on nimetty niin että rivi ja sarake indeksin avulla voidaan löytää ne
            QPushButton * button = this->findChild<QPushButton*>(btn_name); //Etsitään oikea nappula
            if(button) {
                game_board[row][col] = button;
            }
        }
    }
}

bool MainWindow::winCheck() // Täällä hyödynnetään myös tätä game_boardia. Muuten tarkistaminen olisi vaivalloista
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

void MainWindow::enableDisable(bool init_start) //Annetaan parametriksi true-false, eli halutaanko enabloida vai disabloida
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

