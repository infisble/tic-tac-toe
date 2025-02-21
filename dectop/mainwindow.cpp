#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogg.h"

int a=0,ty=0,xin=0,oin=0;
const QString PLAYER_X = "X";
const QString PLAYER_O = "O"; 

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
ui->label->setText(ab+"\t "+PLAYER_X);
ui->label_2->setText(nt+"\t "+PLAYER_O);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::tooo(QString g){
if(g==PLAYER_X||g==PLAYER_O){
    if(g==PLAYER_X){
if(ty%2!=0){
xin++;
}
oin++;
    }
    if(g==PLAYER_O){
if(ty%2!=0){
oin++;
}
else
    xin++;
    }

    ui->label_3->setText(QString::number(xin));
ui->label_4->setText(QString::number(oin));
on_pushButton_11_clicked();
}}
void MainWindow::touch(){
if(ui->pushButton->text()==ui->pushButton_2->text()&& ui->pushButton_3->text()==ui->pushButton->text())
{
tooo(ui->pushButton->text());
}
if(ui->pushButton->text()==ui->pushButton_6->text()&& ui->pushButton_9->text()==ui->pushButton->text())
{tooo(ui->pushButton->text());
}
if(ui->pushButton->text()==ui->pushButton_4->text()&& ui->pushButton_8->text()==ui->pushButton->text())
{
tooo(ui->pushButton->text());

}
if(ui->pushButton_2->text()==ui->pushButton_4->text()&& ui->pushButton_7->text()==ui->pushButton_2->text())
{tooo(ui->pushButton_2->text());}
if(ui->pushButton_5->text()==ui->pushButton_4->text()&& ui->pushButton_6->text()==ui->pushButton_4->text())
{tooo(ui->pushButton_5->text());}
if(ui->pushButton_7->text()==ui->pushButton_8->text()&& ui->pushButton_8->text()==ui->pushButton_9->text())
{tooo(ui->pushButton_7->text());}
if(ui->pushButton_3->text()==ui->pushButton_5->text()&& ui->pushButton_3->text()==ui->pushButton_8->text())
{tooo(ui->pushButton_3->text());}
if(ui->pushButton_9->text()==ui->pushButton_4->text()&& ui->pushButton_3->text()==ui->pushButton_9->text())
{tooo(ui->pushButton_4->text());}
}

void MainWindow::on_pushButton_2_clicked()
{ if(a % 2 == 0){
        ui->pushButton_2->setText("X");
    }else{
        ui->pushButton_2->setText("O");
    }
    a++;
    ui->pushButton_2->setEnabled(false);
touch();

}


void MainWindow::on_pushButton_clicked()
{ if(a % 2 == 0){
        ui->pushButton->setText("X");
    }else{
        ui->pushButton->setText("O");
    }
    a++;
    ui->pushButton->setEnabled(false);
touch();

}


void MainWindow::on_pushButton_3_clicked()
{
    if(a % 2 == 0){
           ui->pushButton_3->setText("X");
       }else{
           ui->pushButton_3->setText("O");
       }
       a++;
       ui->pushButton_3->setEnabled(false);
touch();
}


void MainWindow::on_pushButton_6_clicked()
{
    if(a % 2 == 0){
           ui->pushButton_6->setText("X");
       }else{
           ui->pushButton_6->setText("O");
       }
       a++;
       ui->pushButton_6->setEnabled(false);
touch();
}


void MainWindow::on_pushButton_4_clicked()
{
    if(a % 2 == 0){
           ui->pushButton_4->setText("X");
       }else{
           ui->pushButton_4->setText("O");
       }
       a++;
       ui->pushButton_4->setEnabled(false);
touch();}


void MainWindow::on_pushButton_5_clicked()
{
    if(a % 2 == 0){
           ui->pushButton_5->setText("X");
       }else{
           ui->pushButton_5->setText("O");
       }
       a++;
       ui->pushButton_5->setEnabled(false);
touch();}


void MainWindow::on_pushButton_9_clicked()
{    if(a % 2 == 0){
        ui->pushButton_9->setText("X");
    }else{
        ui->pushButton_9->setText("O");
    }
    a++;
    ui->pushButton_9->setEnabled(false);
touch();
}


void MainWindow::on_pushButton_7_clicked()
{
    if(a % 2 == 0){
           ui->pushButton_7->setText("X");
       }else{
           ui->pushButton_7->setText("O");
       }
       a++;
       ui->pushButton_7->setEnabled(false);
touch();}


void MainWindow::on_pushButton_8_clicked()
{
    if(a % 2 == 0){
           ui->pushButton_8->setText("X");
       }else{
           ui->pushButton_8->setText("O");
       }
       a++;
       ui->pushButton_8->setEnabled(false);
touch();}


void MainWindow::on_pushButton_11_clicked()
{
 a=0;
ui->pushButton_8->setText(" ");
ui->pushButton_9->setText(" ");
ui->pushButton_7->setText(" ");
ui->pushButton_8->setEnabled(true);
ui->pushButton_9->setEnabled(true);
ui->pushButton_7->setEnabled(true);
ui->pushButton_5->setText(" ");
ui->pushButton_6->setText(" ");
ui->pushButton_4->setText(" ");
ui->pushButton_5->setEnabled(true);
ui->pushButton_6->setEnabled(true);
ui->pushButton_4->setEnabled(true);
ui->pushButton->setText(" ");
ui->pushButton_2->setText(" ");
ui->pushButton_3->setText(" ");
ui->pushButton->setEnabled(true);
ui->pushButton_3->setEnabled(true);
ui->pushButton_2->setEnabled(true);
ty++;
if(ty%2==0){
ui->label->setText(ab+"\t " +PLAYER_X);
ui->label_2->setText(nt+"\t " +PLAYER_O);
}
else{

    ui->label->setText(ab+"\t " +PLAYER_O);
    ui->label_2->setText(nt+"\t " +PLAYER_X);

}


}
