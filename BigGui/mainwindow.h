#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "updateform.h"

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
        void on_pushButton_clicked();
        void on_pushButton_2_clicked(); //show_service();
        void on_pushButton_3_clicked(); //go_update();
        void on_pushButton_4_clicked(); // runOmnet()

private:
    Ui::MainWindow *ui;
    QPushButton *m_service_Button;
    UpdateForm *updateFormDialog;
};
#endif // MAINWINDOW_H
