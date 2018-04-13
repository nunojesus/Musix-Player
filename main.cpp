#include "mainwindow.h"
#include <QApplication>
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QAction>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
