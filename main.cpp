#include "mainwindow.h"
#include "loginwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.show();

    LoginWindow login;
    login.show();
    return a.exec();
}
