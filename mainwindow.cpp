#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"
MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow){ui->setupUi(this);ui->pushButton_e->setFocus();}
void MainWindow::keyPressEvent(QKeyEvent *event){
    switch (event->key()){
    case Qt::Key_0:input(0);break;
    case Qt::Key_1:input(1);break;
    case Qt::Key_2:input(2);break;
    case Qt::Key_3:input(3);break;
    case Qt::Key_4:input(4);break;
    case Qt::Key_5:input(5);break;
    case Qt::Key_6:input(6);break;
    case Qt::Key_7:input(7);break;
    case Qt::Key_8:input(8);break;
    case Qt::Key_9:input(9);break;
    case Qt::Key_Plus:on_pushButton_jia_clicked();break;
    case Qt::Key_Minus:on_pushButton_jian_clicked();break;
    case Qt::Key_Asterisk:on_pushButton_cheng_clicked();break;
    case Qt::Key_Slash:on_pushButton_chu_clicked();break;
    case Qt::Key_Backspace:on_pushButton_c_clicked();break;
    case Qt::Key_Period:on_pushButton_dian_clicked();break;
    case Qt::Key_Enter:case Qt::Key_Return:case Qt::Key_Equal:on_pushButton_e_clicked();break;}}
MainWindow::~MainWindow(){delete ui;}
void MainWindow::on_pushButton_0_clicked(){input(0);}
void MainWindow::on_pushButton_1_clicked(){input(1);}
void MainWindow::on_pushButton_2_clicked(){input(2);}
void MainWindow::on_pushButton_3_clicked(){input(3);}
void MainWindow::on_pushButton_4_clicked(){input(4);}
void MainWindow::on_pushButton_5_clicked(){input(5);}
void MainWindow::on_pushButton_6_clicked(){input(6);}
void MainWindow::on_pushButton_7_clicked(){input(7);}
void MainWindow::on_pushButton_8_clicked(){input(8);}
void MainWindow::on_pushButton_9_clicked(){input(9);}
void MainWindow::on_pushButton_jia_clicked()
{
    if (sta == 0)
    {
        sta = 1;
        cal = 1;
    }
    else if(sta==1)
    {
        ///处理连续按计算符
        switch (cal)
        {
        case 1:
            ui->lineEdit->setText(QString::number(num1+num2));
            break;
        case 2:
            ui->lineEdit->setText(QString::number(num1-num2));
            break;
        case 3:
            ui->lineEdit->setText(QString::number(num1*num2));
            break;
        case 4:
            ui->lineEdit->setText(QString::number(num1/num2));
            break;
        }
        num1=ui->lineEdit->text().toDouble();
        sta = 3;
        cal = 1;
    }
    else if (sta == 2)
    {
        sta = 3;
        cal = 1;
    }
}
void MainWindow::on_pushButton_jian_clicked()
{
    if (sta == 0)
    {
        sta = 1;
        cal = 2;
    }
    else if (sta == 1)
    {
        ///处理连续按计算符
        switch (cal)
        {
        case 1:
            ui->lineEdit->setText(QString::number(num1+num2));
            break;
        case 2:
            ui->lineEdit->setText(QString::number(num1-num2));
            break;
        case 3:
            ui->lineEdit->setText(QString::number(num1*num2));
            break;
        case 4:
            ui->lineEdit->setText(QString::number(num1/num2));
            break;
        }
        num1=ui->lineEdit->text().toDouble();
        sta = 3;
        cal = 2;
    }
    else if (sta == 2)
    {
        sta = 3;
        cal = 2;
    }
}
void MainWindow::on_pushButton_cheng_clicked()
{
    if (sta == 0)
    {
        sta = 1;
        cal = 3;
    }
    else if (sta == 1)
    {
        ///处理连续按计算符
        switch (cal)
        {
        case 1:
            ui->lineEdit->setText(QString::number(num1+num2));
            break;
        case 2:
            ui->lineEdit->setText(QString::number(num1-num2));
            break;
        case 3:
            ui->lineEdit->setText(QString::number(num1*num2));
            break;
        case 4:
            ui->lineEdit->setText(QString::number(num1/num2));
            break;
        }
        num1=ui->lineEdit->text().toDouble();
        sta = 3;
        cal = 3;
    }
    else if (sta == 2)
    {
        sta = 3;
        cal = 3;
    }
}
void MainWindow::on_pushButton_chu_clicked()
{
    if (sta == 0)
    {
        sta = 1;
        cal = 4;
    }
    else if (sta == 1)
    {
        ///处理连续按计算符
        switch (cal)
        {
        case 1:
            ui->lineEdit->setText(QString::number(num1+num2));
            break;
        case 2:
            ui->lineEdit->setText(QString::number(num1-num2));
            break;
        case 3:
            ui->lineEdit->setText(QString::number(num1*num2));
            break;
        case 4:
            ui->lineEdit->setText(QString::number(num1/num2));
            break;
        }
        num1=ui->lineEdit->text().toDouble();
        sta = 3;
        cal = 4;
    }
    else if (sta == 2)
    {
        sta = 3;
        cal = 4;
    }
}
void MainWindow::on_pushButton_dian_clicked()
{
    if (sta == 0)
    {
        if (ps1 == 0)
        {
            poi1 = 1;
            ps1 = 1;
        }
    }
    else if (sta == 1)
    {
        if (ps2 == 0)
        {
            poi2 = 1;
            ps2 = 1;
        }
    }
}
void MainWindow::on_pushButton_e_clicked()
{
    switch (cal)
    {
    case 1:
        ui->lineEdit->setText(QString::number(num1+num2));
        break;
    case 2:
        ui->lineEdit->setText(QString::number(num1-num2));
        break;
    case 3:
        ui->lineEdit->setText(QString::number(num1*num2));
        break;
    case 4:
        ui->lineEdit->setText(QString::number(num1/num2));
        break;
    }
    num1=ui->lineEdit->text().toDouble();
    sta=2;
}
void MainWindow::on_pushButton_c_clicked()
{
    num1 = 0;
    num2 = 0;
    sta = 0;
    poi1 = 0;
    poi2 = 0;
    ps1 = 0;
    ps2 = 0;
    cal = 0;
    ui->lineEdit->setText("0");
}
void MainWindow::input(int key)
{
    if (sta == 0)
    {
        if (poi1 != 0)
        {
            num1 = num1 + key / pow(10, poi1++);
        }
        else
        {
            num1 = num1 * 10 + key;
        }
        ui->lineEdit->setText(QString::number(num1));
    }
    else if (sta == 1)
    {
        if (poi2 != 0)
        {
            num2 += key / pow(10, poi2++);
        }
        else
        {
            num2 = num2 * 10 + key;
        }
        ui->lineEdit->setText(QString::number(num2));
    }
    else if (sta == 2)
    {
        num1 = 0;
        num2 = 0;
        sta = 0;
        poi1 = 0;
        poi2 = 0;
        ps1 = 0;
        ps2 = 0;
        cal = 0;
        if (poi1 != 0)
        {
            num1 = num1 + key / pow(10, poi1++);
        }
        else
        {
            num1 = num1 * 10 + key;
        }
        ui->lineEdit->setText(QString::number(num1));
    }
    else if (sta == 3)
    {
        num2 = 0;
        sta = 1;
        poi2 = 0;
        //对直接按小数点的输入可能会有问题
        ps2 = 0;
        if (poi2 != 0)
        {
            num2 += key / pow(10, poi2++);
        }
        else
        {
            num2 = num2 * 10 + key;
        }
        ui->lineEdit->setText(QString::number(num2));
    }
}
