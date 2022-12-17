#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include "aboutgame.h"
#include <QMediaPlayer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


 setStyleSheet("background-image: url(:/img/img/bagraund.png);");
   ui->setupUi(this);

    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    player->setSource(QUrl::fromLocalFile("qrc:/music/sound/pirati.mp3"));
    player->play();
}


MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::on_Game_clicked()
{

    SecondWindow window;
    window.setModal(true);
    window.exec();


}


void MainWindow::on_About_clicked()
{
    AboutGame *window = new AboutGame;

    window->setModal(true);
    window->show();
}



void MainWindow::on_Setting_clicked()
{
    setting = new Setting(player,audioOutput) ;

 setting->show();
}

