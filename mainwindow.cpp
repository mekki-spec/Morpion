#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_10_clicked()
{
    close();
}

void MainWindow::on_bouton1_clicked()
{
    change1(atour);
    tour(atour);
    victoire(atour);
}

int MainWindow::tour(int atour)
{
    if (atour == 1)
{       joueur.remove(6,1);
        joueur.insert(6,QString("2"));
        atour = 2;
        return atour;
    }
    else{
        joueur.remove(6,1);
        joueur.insert(6,QString("1"));
        atour = 1;
        return atour;}
}
    bool MainWindow::victoire(int atour){
    if(ca1==ca4==ca7||ca1==ca2==ca3||ca3==ca6==ca9||ca7==ca8==ca9||ca2==ca5==ca8||ca1==ca5==ca9||ca3==ca5==ca7){
           vic = true;
        if(atour == 1)
            //victoire j1
            else
            //victoire j2


    }

}

void MainWindow::change1(int atour){
    //vert = j1  rouge = j2
     ui->setupUi(this);
    if(case1 == 0){
    if(atour == 1)
      ui -> bouton1 ->setText("x");
    ca1=1;}
      else
     { ui -> player -> setStyleSheet("background-color: red;");
      ca1=2;}
         case1=1;
    }

void MainWindow::change2(int atour){
    //vert = j1  rouge = j2
     ui->setupUi(this);
    if(case1 == 0){
    if(atour == 1)
      ui -> bouton2 ->setStyleSheet("background-color: green;");
    ca1=1;}
      else
     { ui -> bouton2 -> setStyleSheet("background-color: red;");
      ca1=2;}
         case1=1;
    }

void MainWindow::change3(int atour){
    //vert = j1  rouge = j2
     ui->setupUi(this);
    if(case1 == 0){
    if(atour == 1)
      ui -> bouton3 ->setStyleSheet("background-color: green;");
    ca1=1;}
      else
     { ui -> bouton3 -> setStyleSheet("background-color: red;");
      ca1=2;}
         case1=1;
    }

void MainWindow::change4(int atour){
    //vert = j1  rouge = j2
     ui->setupUi(this);
    if(case1 == 0){
    if(atour == 1)
      ui -> bouton4 ->setStyleSheet("background-color: green;");
    ca1=1;}
      else
     { ui -> bouton4 -> setStyleSheet("background-color: red;");
      ca1=2;}
         case1=1;
    }

void MainWindow::change5(int atour){
    //vert = j1  rouge = j2
     ui->setupUi(this);
    if(case1 == 0){
    if(atour == 1)
      ui -> bouton5 ->setStyleSheet("background-color: green;");
    ca1=1;}
      else
     { ui -> bouton5 -> setStyleSheet("background-color: red;");
      ca1=2;}
         case1=1;
    }

void MainWindow::change6(int atour){
    //vert = j1  rouge = j2
     ui->setupUi(this);
    if(case1 == 0){
    if(atour == 1)
      ui -> bouton6 ->setStyleSheet("background-color: green;");
    ca1=1;}
      else
     { ui -> bouton6 -> setStyleSheet("background-color: red;");
      ca1=2;}
         case1=1;
    }

void MainWindow::change7(int atour){
    //vert = j1  rouge = j2
     ui->setupUi(this);
    if(case1 == 0){
    if(atour == 1)
      ui -> bouton7 ->setStyleSheet("background-color: green;");
    ca1=1;}
      else
     { ui -> bouton7 -> setStyleSheet("background-color: red;");
      ca1=2;}
         case1=1;
    }

void MainWindow::change8(int atour){
    //vert = j1  rouge = j2
     ui->setupUi(this);
    if(case1 == 0){
    if(atour == 1)
      ui -> bouton8 ->setStyleSheet("background-color: green;");
    ca1=1;}
      else
     { ui -> bouton8 -> setStyleSheet("background-color: red;");
      ca1=2;}
         case1=1;
    }

void MainWindow::change9(int atour){
    //vert = j1  rouge = j2
     ui->setupUi(this);
    if(case1 == 0){
    if(atour == 1)
      ui -> bouton9 ->setStyleSheet("background-color: green;");
    ca1=1;}
      else
     { ui -> bouton9 -> setStyleSheet("background-color: red;");
      ca1=2;}
         case1=1;
    }








void MainWindow::on_pushButton_2_clicked()
{
    change2(atour);
    tour(atour);
    victoire(atour);
}

void MainWindow::on_pushButton_3_clicked()
{
    change3(atour);
    tour(atour);
    victoire(atour);
}

void MainWindow::on_pushButton_4_clicked()
{
    change4(atour);
    tour(atour);
    victoire(atour);
}

void MainWindow::on_pushButton_6_clicked()
{
    change6(atour);
    tour(atour);
    victoire(atour);
}

void MainWindow::on_pushButton_7_clicked()
{
    change7(atour);
    tour(atour);
    victoire(atour);
}

void MainWindow::on_pushButton_5_clicked()
{
    change5(atour);
    tour(atour);
    victoire(atour);
}

void MainWindow::on_pushButton_8_clicked()
{
    change8(atour);
    tour(atour);
    victoire(atour);
}

void MainWindow::on_pushButton_9_clicked()
{
    change9(atour);
    tour(atour);
    victoire(atour);
}
