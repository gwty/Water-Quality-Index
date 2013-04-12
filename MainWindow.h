/*
Author: Gowtham Ashok
E-mail: gwty93@gmail.com
Program: Water Quality Index Calculator
Note:
Runs in 1600x900, resolutions lesser than 1600x900 are badly supported
to compile
mkdir build
cd build
qmake ..
make
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_pressed();

    void on_actionOpen_triggered();

    void on_actionSave_As_triggered();

    void on_CO3_ob_textEdited(const QString &arg1);


    void on_HCO3_ob_textEdited(const QString &arg1);

    void on_Mg_ob_textEdited(const QString &arg1);


    void on_Ca_ob_textEdited(const QString &arg1);


    void on_TDS_ob_textEdited(const QString &arg1);



    void on_CL_ob_textEdited(const QString &arg1);


    void on_SO4_ob_textEdited(const QString &arg1);


    void on_EC_ob_textEdited(const QString &arg1);



    void on_PH_ob_textEdited(const QString &arg1);


    void on_Na_ob_textEdited(const QString &arg1);


    void on_newparam_clicked();


    void refreshme();


    void on_HCO3_ob_textChanged(const QString &arg1);

    void on_Mg_ob_textChanged(const QString &arg1);

    void on_Ca_ob_textChanged(const QString &arg1);

    void on_TDS_ob_textChanged(const QString &arg1);

    void on_CL_ob_textChanged(const QString &arg1);

    void on_SO4_ob_textChanged(const QString &arg1);

    void on_Fe_ob_textChanged(const QString &arg1);

    void on_EC_ob_textChanged(const QString &arg1);

    void on_PH_ob_textChanged(const QString &arg1);

    void on_Na_ob_textChanged(const QString &arg1);

    void on_prev_clicked();

    void on_next_clicked();

    void on_actionLoad_triggered();

    void on_place_editingFinished();

    void on_place_textEdited(const QString &arg1);
    void settozero();

    void on_CO3_ob_editingFinished();

    void on_HCO3_ob_editingFinished();

    void on_CO3_ob_textChanged(const QString &arg1);

    void on_Fe_ob_textEdited(const QString &arg1);

    void on_actionSave_As_Text_triggered();

    void on_actionSave_Graph_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
