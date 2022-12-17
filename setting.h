#ifndef SETTING_H
#define SETTING_H

#include <QDialog>
#include <qmediaplayer.h>
#include <QMediaPlayer>
#include <QAudioOutput>
namespace Ui {
class Setting;
}

class Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Setting(QMediaPlayer *player, QAudioOutput *audioOutput, QWidget *parent = nullptr);
    ~Setting();

private slots:
    void on_musicslider_sliderMoved(int position);

private:
    Ui::Setting *ui;

    QMediaPlayer* player;
    QAudioOutput* audioOutput;
};

#endif // SETTING_H
