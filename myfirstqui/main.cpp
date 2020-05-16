#include "myprojekt.h"
#include <QApplication>
#include <QSlider>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    myprojekt w;

    w.show();

    return a.exec();
}
