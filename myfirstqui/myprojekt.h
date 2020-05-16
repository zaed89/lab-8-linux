#ifndef MYPROJEKT_H
#define MYPROJEKT_H
#include <QMainWindow>
namespace Ui {
class myprojekt;
}
class myprojekt : public QMainWindow
{
    Q_OBJECT

public:
    explicit myprojekt(QWidget *parent = 0);
    ~myprojekt();

private:
     Ui::myprojekt *ui;

};

#endif // MYPROJEKT_H
