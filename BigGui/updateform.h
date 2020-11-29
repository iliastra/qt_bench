#ifndef UPDATEFORM_H
#define UPDATEFORM_H

#include <QDialog>

namespace Ui {
class UpdateForm;
}

class UpdateForm : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateForm(QWidget *parent = nullptr);
    ~UpdateForm();

private slots:
    void on_label_2_linkActivated(const QString &link);

    void on_buttonBox_accepted();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::UpdateForm *ui;

};

#endif // UPDATEFORM_H
