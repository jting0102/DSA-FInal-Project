#include "mainwindow.h"
#include "hashtabl1.cpp"
#include "redblacktreev1.cpp"

#include <QApplication>

int main(int argc, char *argv[])
{



    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
