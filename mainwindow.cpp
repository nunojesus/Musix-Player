#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QMediaPlayer>
#include <QMultimedia>
#include <QtMultimediaWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAbout_Musix_Player_triggered()
{
    QTextEdit* message=new QTextEdit();
    message->setWindowFlags(Qt::Window);
    message->setWindowIcon(QIcon(":/Images/icon.jpg"));
    message->setReadOnly(true);
    message->append("This Music Player is completely open source.Anyone who wants the code please go to my GitHub: moghir2004");
    message->show();
}

void MainWindow::on_actionOpen_triggered()
{
    QList<QUrl> urls = QFileDialog::getOpenFileUrls(
                       this,
                       tr("Import files"),
                       QUrl(),
                       tr( "Music Files (*.mp3 *.ogg)"));

               //Get outta here if no files were chosen
               if (urls.isEmpty()) return;

               for (int i = 0; i < urls.size(); i++) {
                   QFile *f = new QFile(urls.at(i).toLocalFile());
               }
}

void MainWindow::on_actionOpen_2_triggered()
{
    QList<QUrl> urls = QFileDialog::getOpenFileUrls(
                       this,
                       tr("Import files"),
                       QUrl(),
                       tr( "Music Files (*.mp3 *.ogg)"));

               //Get outta here if no files were chosen
               if (urls.isEmpty()) return;

               for (int i = 0; i < urls.size(); i++) {
                   QFile *f = new QFile(urls.at(i).toLocalFile());
               }

}
