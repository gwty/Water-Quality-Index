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

    void on_BOD_vstd_textEdited(const QString &arg1);

    void on_BOD_uwt_textEdited(const QString &arg1);

    void on_BOD_qr_textEdited(const QString &arg1);

    void on_BOD_wnqn_textEdited(const QString &arg1);

    void on_TH_ob_textEdited(const QString &arg1);

    void on_Mg_ob_textEdited(const QString &arg1);

    void on_TH_vstd_textEdited(const QString &arg1);

    void on_TH_uwt_textEdited(const QString &arg1);

    void on_TH_qr_textEdited(const QString &arg1);

    void on_TH_wnqn_textEdited(const QString &arg1);

    void on_Mg_vstd_textEdited(const QString &arg1);

    void on_Mg_uwt_textEdited(const QString &arg1);

    void on_Mg_qr_textEdited(const QString &arg1);

    void on_Mg_wnqn_textEdited(const QString &arg1);

    void on_Ca_ob_textEdited(const QString &arg1);

    void on_Ca_vstd_textEdited(const QString &arg1);

    void on_Ca_uwt_textEdited(const QString &arg1);

    void on_Ca_qr_textEdited(const QString &arg1);

    void on_Ca_wnqn_textEdited(const QString &arg1);

    void on_TDS_ob_textEdited(const QString &arg1);

    void on_TDS_vstd_textEdited(const QString &arg1);

    void on_TDS_uwt_textEdited(const QString &arg1);

    void on_TDS_qr_textEdited(const QString &arg1);

    void on_TDS_wnqn_textEdited(const QString &arg1);

    void on_CL_ob_textEdited(const QString &arg1);

    void on_CL_vstd_textEdited(const QString &arg1);

    void on_CL_uwt_textEdited(const QString &arg1);

    void on_CL_qr_textEdited(const QString &arg1);

    void on_CL_wnqn_textEdited(const QString &arg1);

    void on_SO4_ob_textEdited(const QString &arg1);

    void on_SO4_vstd_textEdited(const QString &arg1);

    void on_SO4_uwt_textEdited(const QString &arg1);

    void on_SO4_qr_textEdited(const QString &arg1);

    void on_SO4_wnqn_textEdited(const QString &arg1);

    void on_NO3_ob_textEdited(const QString &arg1);

    void on_NO3_vstd_textEdited(const QString &arg1);

    void on_NO3_uwt_textEdited(const QString &arg1);

    void on_NO3_qr_textEdited(const QString &arg1);

    void on_NO3_wnqn_textEdited(const QString &arg1);

    void on_PO4_ob_textEdited(const QString &arg1);

    void on_PO4_vstd_textEdited(const QString &arg1);

    void on_PO4_uwt_textEdited(const QString &arg1);

    void on_PO4_qr_textEdited(const QString &arg1);

    void on_PO4_wnqn_textEdited(const QString &arg1);

    void on_EC_ob_textEdited(const QString &arg1);

    void on_EC_vstd_textEdited(const QString &arg1);

    void on_EC_uwt_textEdited(const QString &arg1);

    void on_EC_qr_textEdited(const QString &arg1);

    void on_EC_wnqn_textEdited(const QString &arg1);

    void on_PH_ob_textEdited(const QString &arg1);

    void on_PH_vstd_textEdited(const QString &arg1);

    void on_PH_uwt_textEdited(const QString &arg1);

    void on_PH_qr_textEdited(const QString &arg1);

    void on_PH_wnqn_textEdited(const QString &arg1);

    void on_Na_ob_textEdited(const QString &arg1);

    void on_Na_vstd_textEdited(const QString &arg1);

    void on_Na_uwt_textEdited(const QString &arg1);

    void on_Na_qr_textEdited(const QString &arg1);

    void on_Na_wnqn_textEdited(const QString &arg1);


    void on_newparam_clicked();

    void on_BOD_ob_editingFinished();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
