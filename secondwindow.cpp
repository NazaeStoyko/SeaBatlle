#include "secondwindow.h"
#include "ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
     setStyleSheet("background-image: url(:/img/img/field.png);");
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}
