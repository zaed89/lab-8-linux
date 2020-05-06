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
public slots:
    void closeWindow();
    void oke();
    void minska();

private slots:
    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton_clicked();

private:
     Ui::myprojekt *ui;
    int nuvarandevrde = 50;
    int maxvrde = 70;
    int minvrde = 30;
};

#endif // MYPROJEKT_H
