#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/img/new.png"), "Serivce1");
    ui->listWidget->addItem(item);
    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/rec/img/new.png"), "Service2");
    ui->listWidget->addItem(item2);
    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/rec/img/new.png"), "Service3");
    ui->listWidget->addItem(item3);
   //m_input_listview = ui->listView;
   //m_input_listview->setT
    //ui->centralwidget->
   //connect(m_service_Button, SIGNAL(signal_clicked()), this, SLOT(show_service()));
}



void MainWindow::on_pushButton_clicked()
{
    QListWidgetItem *state;
    //ui->listWidget->currentItem()->listWidget(state);
    ui->listWidget->currentItem()->setBackgroundColor(Qt::red);
    ui->listWidget->currentItem()->setForeground(Qt::white);
    ui->listWidget->currentItem()->setIcon(QIcon(":/rec/img/open-file.png"));

}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked() //show_service();
{
    ui->listWidget->currentItem()->setBackgroundColor(Qt::white);
    ui->listWidget->currentItem()->setForeground(Qt::black);
    ui->listWidget->currentItem()->setIcon(QIcon(":/rec/img/new.png"));
}

void MainWindow::on_pushButton_3_clicked()
{
    hide();
    updateFormDialog = new UpdateForm(this);
    updateFormDialog->show();
}

void MainWindow::on_pushButton_4_clicked()
{
     QMessageBox::information(this, "in progress!" ,"run OmNeT++ Simulation");

}
