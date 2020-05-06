#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void increase();
    void decrease();
    void closeWindow();

private slots:
    void on_pushButton1_clicked();
    void on_pushButton2_clicked();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
