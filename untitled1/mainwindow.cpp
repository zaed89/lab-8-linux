#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSlider>
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     connect(ui->pushButton1,SIGNAL(clicked(bool)), ui->verticalSlider1, SLOT(increase()));
     connect(ui->pushButton1,SIGNAL(clicked(bool)), ui->verticalSlider2, SLOT(increase()));
     connect(ui->pushButton1,SIGNAL(clicked(bool)), ui->verticalSlider3, SLOT(increase()));
     connect(ui->pushButton2,SIGNAL(clicked(bool)), ui->verticalSlider1, SLOT(decrease()));
     connect(ui->pushButton2,SIGNAL(clicked(bool)), ui->verticalSlider2, SLOT(decrease()));
     connect(ui->pushButton2,SIGNAL(clicked(bool)), ui->verticalSlider3, SLOT(decrease()));
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::increase()
     {

         ui->verticalSlider1->setValue(ui->verticalSlider1 -> value()+1);
         ui->verticalSlider2->setValue(ui->verticalSlider2 -> value()+1);
         ui->verticalSlider3->setValue(ui->verticalSlider3 -> value()+1);
     }

void MainWindow::decrease()
     {
        ui->verticalSlider1->setValue(ui->verticalSlider1 -> value()-1);
        ui->verticalSlider2->setValue(ui->verticalSlider2 -> value()-1);
        ui->verticalSlider3->setValue(ui->verticalSlider3 -> value()-1);
     }
void MainWindow::closeWindow()
{
    qApp->exit();
}
void MainWindow::on_pushButton1_clicked()
{
    increase();
}
void MainWindow::on_pushButton2_clicked()
{
    decrease();
}

void MainWindow::on_pushButton_clicked()
{
    closeWindow();
}
