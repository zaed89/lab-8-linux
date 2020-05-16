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

