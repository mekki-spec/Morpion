#include "mainwindow.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
     Ui::MainWindow *ui;
    w.show();


    return a.exec();
}
