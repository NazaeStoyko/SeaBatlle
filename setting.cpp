#include "setting.h"
#include "ui_setting.h"

Setting::Setting(QMediaPlayer *player, QAudioOutput *audioOutput, QWidget *parent) :
    QDialog(parent), player(player), audioOutput(audioOutput),
    ui(new Ui::Setting)
{

    ui->musicslider->setRange(0,100);
    ui->musicslider->setSliderPosition(50);

     setStyleSheet("background-image: url(:/img/img/bagraund.png);");
    ui->setupUi(this);
}

Setting::~Setting()
{
    delete ui;
}

void Setting::on_musicslider_sliderMoved(int position)
{
    qreal linearVolume =  QAudio::convertVolume(ui->musicslider->value() / qreal(100), QAudio::LogarithmicVolumeScale,QAudio::LinearVolumeScale);
        audioOutput->setVolume(linearVolume);
}

