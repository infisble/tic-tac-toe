#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogg.h"

int a = 0, ty = 0, xin = 0, oin = 0;
const QString PLAYER_X = "X";
const QString PLAYER_O = "O";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText(ab + "\t " + PLAYER_X);
    ui->label_2->setText(nt + "\t " + PLAYER_O);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateScore(QString g) {
    if (g == PLAYER_X) {
        xin++;
    } else if (g == PLAYER_O) {
        oin++;
    }
    ui->label_3->setText(QString::number(xin));
    ui->label_4->setText(QString::number(oin));
}

void MainWindow::checkWinner() {
    QStringList buttons = {
        ui->pushButton->text(), ui->pushButton_2->text(), ui->pushButton_3->text(),
        ui->pushButton_4->text(), ui->pushButton_5->text(), ui->pushButton_6->text(),
        ui->pushButton_7->text(), ui->pushButton_8->text(), ui->pushButton_9->text()
    };

    QList<QList<int>> winningCombinations = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columns
        {0, 4, 8}, {2, 4, 6}             // Diagonals
    };

    for (const auto& combination : winningCombinations) {
        if (buttons[combination[0]] == buttons[combination[1]] &&
            buttons[combination[1]] == buttons[combination[2]] &&
            !buttons[combination[0]].isEmpty()) {
            updateScore(buttons[combination[0]]);
            on_pushButton_11_clicked();
            return;
        }
    }
}

void MainWindow::handleButtonClick(QPushButton* button) {
    if (a % 2 == 0) {
        button->setText(PLAYER_X);
    } else {
        button->setText(PLAYER_O);
    }
    a++;
    button->setEnabled(false);
    checkWinner();
}

void MainWindow::on_pushButton_clicked() { handleButtonClick(ui->pushButton); }
void MainWindow::on_pushButton_2_clicked() { handleButtonClick(ui->pushButton_2); }
void MainWindow::on_pushButton_3_clicked() { handleButtonClick(ui->pushButton_3); }
void MainWindow::on_pushButton_4_clicked() { handleButtonClick(ui->pushButton_4); }
void MainWindow::on_pushButton_5_clicked() { handleButtonClick(ui->pushButton_5); }
void MainWindow::on_pushButton_6_clicked() { handleButtonClick(ui->pushButton_6); }
void MainWindow::on_pushButton_7_clicked() { handleButtonClick(ui->pushButton_7); }
void MainWindow::on_pushButton_8_clicked() { handleButtonClick(ui->pushButton_8); }
void MainWindow::on_pushButton_9_clicked() { handleButtonClick(ui->pushButton_9); }

void MainWindow::on_pushButton_11_clicked()
{
    a = 0;
    QList<QPushButton*> buttons = {
        ui->pushButton, ui->pushButton_2, ui->pushButton_3,
        ui->pushButton_4, ui->pushButton_5, ui->pushButton_6,
        ui->pushButton_7, ui->pushButton_8, ui->pushButton_9
    };

    for (auto button : buttons) {
        button->setText(" ");
        button->setEnabled(true);
    }

    ty++;
    if (ty % 2 == 0) {
        ui->label->setText(ab + "\t " + PLAYER_X);
        ui->label_2->setText(nt + "\t " + PLAYER_O);
    } else {
        ui->label->setText(ab + "\t " + PLAYER_O);
        ui->label_2->setText(nt + "\t " + PLAYER_X);
    }
}
