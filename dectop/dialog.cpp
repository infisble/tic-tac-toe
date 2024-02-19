#include "dialog.h"
#include "ui_dialog.h"
#include"mainwindow.h"
#include "dialogg.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{

ab=ui->lineEdit->text();
nt=ui->lineEdit_2->text();

MainWindow *t=new MainWindow();
           t->show();


}

