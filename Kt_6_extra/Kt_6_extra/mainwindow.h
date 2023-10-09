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
    std::vector<std::vector<QPushButton*>> game_board;
    bool game_in_progress;
    int count;
    void initializeBoard();
    bool winCheck();
    void enableDisable(bool);
    void resetBoard();
};
#endif // MAINWINDOW_H
