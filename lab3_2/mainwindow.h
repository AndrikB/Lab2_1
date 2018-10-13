#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "timer.h"
#include "alarm_clock.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Timer_clicked();
    void on_Alarm_Clock_clicked();
    void show_time();
private:
    Ui::MainWindow *ui;
    Timer *timer;
    Alarm_Clock *clock;
};

#endif // MAINWINDOW_H