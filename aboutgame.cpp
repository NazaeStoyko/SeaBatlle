#include "aboutgame.h"
#include "ui_aboutgame.h"

AboutGame::AboutGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutGame)
{
     setStyleSheet("background-image: url(:/img/img/bagraund.png);");
    ui->setupUi(this);
}

AboutGame::~AboutGame()
{
    delete ui;
}
