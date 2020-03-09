#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int tour(int atour);
    void change1(int atour);
    void change2(int atour);
    void change3(int atour);
    void change4(int atour);
    void change5(int atour);
    void change6(int atour);
    void change7(int atour);
    void change8(int atour);
    void change9(int atour);
    bool victoire(int atour);


private slots:


    void on_pushButton_10_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;

protected :
   int atour = 1;
   int case1 = 0;
   int turn;
   bool vic = false;
   QString joueur = "Joueur 1";
    int ca1 = 3;
    int ca2 = 4;
    int ca3 = 5;
    int ca4 = 6;
    int ca5 = 7;
    int ca6 = 8;
    int ca7 = 9;
    int ca8 = 10;
    int ca9 = 11;

};

#endif // MAINWINDOW_H
