#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_0_clicked();

    void on_pushButton_dian_clicked();

    void on_pushButton_e_clicked();

    void on_pushButton_chu_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_cheng_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_jian_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_jia_clicked();

    void on_pushButton_c_clicked();

protected:
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
    double num1 = 0;
    double num2 = 0;
    int poi1 = 0;
    int ps1 = 0;
    int poi2 = 0;
    int ps2 = 0;
    int sta = 0;
    int cal = 0;
    // 1+; 2-; 3*; 4/
    void input(int key);
};

#endif // MAINWINDOW_H
