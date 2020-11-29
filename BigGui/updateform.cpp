#include "updateform.h"
#include "ui_updateform.h"
#include <QMessageBox>


UpdateForm::UpdateForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateForm)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Timing");
    ui->comboBox->addItem("Bandwidth");
}

UpdateForm::~UpdateForm()
{
    delete ui;
}

void UpdateForm::on_label_2_linkActivated(const QString &link)
{

}

void UpdateForm::on_buttonBox_accepted()
{
    QMessageBox::information(this," You chosed QoS:", ui->comboBox->currentText());
    //QMessageBox::information(this," Your chosen QoS:", QString::bool( ui->checkBox-) )
}

void UpdateForm::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        QMessageBox::information(this," SUVC Status", "Activated!");
    }
    else
    {
        QMessageBox::information(this," SUVC Status", "Disactivated!");
    }
}
