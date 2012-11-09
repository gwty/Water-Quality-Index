#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButton_pressed();

    void on_actionOpen_triggered();

    void on_actionSave_As_triggered();

    void on_BOD_ob_textEdited(const QString &arg1);


    void on_TH_ob_textEdited(const QString &arg1);

    void on_Mg_ob_textEdited(const QString &arg1);


    void on_Ca_ob_textEdited(const QString &arg1);


    void on_TDS_ob_textEdited(const QString &arg1);



    void on_CL_ob_textEdited(const QString &arg1);


    void on_SO4_ob_textEdited(const QString &arg1);



    void on_NO3_ob_textEdited(const QString &arg1);


    void on_PO4_ob_textEdited(const QString &arg1);


    void on_EC_ob_textEdited(const QString &arg1);



    void on_PH_ob_textEdited(const QString &arg1);


    void on_Na_ob_textEdited(const QString &arg1);


    void on_newparam_clicked();

    void on_BOD_ob_editingFinished();

    void refreshme();

    void on_BOD_ob_textChanged(const QString &arg1);

    void on_TH_ob_textChanged(const QString &arg1);

    void on_Mg_ob_textChanged(const QString &arg1);

    void on_Ca_ob_textChanged(const QString &arg1);

    void on_TDS_ob_textChanged(const QString &arg1);

    void on_CL_ob_textChanged(const QString &arg1);

    void on_SO4_ob_textChanged(const QString &arg1);

    void on_NO3_ob_textChanged(const QString &arg1);

    void on_PO4_ob_textChanged(const QString &arg1);

    void on_EC_ob_textChanged(const QString &arg1);

    void on_PH_ob_textChanged(const QString &arg1);

    void on_Na_ob_textChanged(const QString &arg1);

    void on_prev_clicked();

    void on_next_clicked();

    void on_actionLoad_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
