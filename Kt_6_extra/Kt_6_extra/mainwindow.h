#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <vector>
#include <QMainWindow>
#include <QPushButton>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onButtonClick();
    void gameStart();

private:
    Ui::MainWindow *ui;
    char currentPlayer;
    std::vector<std::vector<QPushButton*>> game_board; //Pelialusta 2-D vektorina
    int count; //Kokonaispainallusten määrä tasapelitilannetta varten.
    void initializeBoard(); //Pelipainonapit laitetaan kaksiulotteiseen vektoriin game_board
    bool winCheck(); //Tarkistetaan voittiko edellisen painalluksen tehnyt pelaaja
    void enableDisable(bool); //Enabloidaan tai disabloidaan kaikki pelipainonapit
    void resetBoard(); //Pyyhitään teksti kaikista pelipainonapeista
};
#endif // MAINWINDOW_H
