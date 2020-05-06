#include "myprojekt.h"
#include "ui_myprojekt.h"
#include <QSlider>
#include <QPushButton>
#include <QMessageBox>

myprojekt::myprojekt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myprojekt)
{
    ui->setupUi(this);

}
myprojekt::~myprojekt()
{
    delete ui;
}
void myprojekt::closeWindow()
{
    qApp->exit();
}

void myprojekt::oke()
{
    int step = ui->lineEdit->text().toUInt();
    nuvarandevrde += step;
    if (nuvarandevrde > maxvrde)
        nuvarandevrde = maxvrde;
    ui->pushButton1->setText(QString().setNum(nuvarandevrde));
    ui->pushButton2->setText(QString().setNum(nuvarandevrde));
    ui->pushButton3->setText(QString().setNum(nuvarandevrde));
    if (nuvarandevrde == maxvrde)
        QMessageBox::information(this, "app meddelande", "Det blir maxvärde på appen ");
}

void myprojekt::minska()
{
    int step = ui->lineEdit->text().toUInt();
    nuvarandevrde -= step;
    if (nuvarandevrde < minvrde)
        nuvarandevrde = minvrde;
    ui->pushButton1->setText(QString().setNum(nuvarandevrde));
    ui->pushButton2->setText(QString().setNum(nuvarandevrde));
    ui->pushButton3->setText(QString().setNum(nuvarandevrde));
    if (nuvarandevrde == minvrde)
        QMessageBox::information(this, "app meddelande", "Det blir minvärde på appen");
}

void myprojekt::on_pushButton1_clicked()
{
    oke();
}

void myprojekt::on_pushButton2_clicked()
{
    minska();
}

void myprojekt::on_pushButton3_clicked()
{
    closeWindow();
}
void myprojekt::on_pushButton_clicked()
{
    close();
}
