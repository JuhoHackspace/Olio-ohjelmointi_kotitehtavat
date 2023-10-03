#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>

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
    void numberClickedHandler();
    void clearHandler();
    void enterHandler();
    void addSubMulDivClickHandler();
    void dotHandler();
    void prefixHandler();
    void eraseHandler();

private:
    Ui::MainWindow *ui;
    QString number1,number2;
    int state;
    float result;
    short operand;
    bool result_displayed;
    void resetLineEdits();
};
#endif // MAINWINDOW_H
