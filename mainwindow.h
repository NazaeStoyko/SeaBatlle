#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <setting.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_Game_clicked();

    void on_About_clicked();

    void on_Setting_clicked();

private:

    Ui::MainWindow *ui;
    Setting *setting;
    QMediaPlayer *player;
    QAudioOutput* audioOutput;
};
#endif // MAINWINDOW_H
