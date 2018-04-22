#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

    void on_actionAbout_Musix_Player_triggered();

private slots:
    void on_actionOpen_triggered();

    void on_actionOpen_2_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
