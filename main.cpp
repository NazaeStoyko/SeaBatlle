#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QPainter>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget widget;
//  widget.show();
    MainWindow w;
   w.show();
  //  widget.show();

    return a.exec();
}
