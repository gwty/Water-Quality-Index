#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "coding.h"
#include "QLineEdit"
#include "QLCDNumber"
#include "QVBoxLayout"
#include<QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_pressed()
{
    exit(EXIT_SUCCESS);
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    //if (!fileName.isEmpty()) {
    //    addressWidget->readFromFile(fileName);
    //}
}

void MainWindow::on_actionSave_As_triggered()
{
     QString fileName = QFileDialog::getSaveFileName(this);
     string file=fileName.toStdString();
     savetofile(file,s);
}

void MainWindow::on_BOD_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,1);
     temp=0;
}

void MainWindow::on_BOD_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,2);
     temp=0;

}

void MainWindow::on_BOD_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,3);
     temp=0;
}

void MainWindow::on_BOD_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,4);
     temp=0;
}

void MainWindow::on_BOD_wnqn_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,5);
     temp=0;
}

void MainWindow::on_TH_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,6);
     temp=0;
}

void MainWindow::on_TH_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,7);
     temp=0;

}

void MainWindow::on_TH_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,8);
     temp=0;
}

void MainWindow::on_TH_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,9);
     temp=0;
}

void MainWindow::on_TH_wnqn_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,10);
     temp=0;
}

void MainWindow::on_Mg_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,11);
     temp=0;
}

void MainWindow::on_Mg_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,12);
     temp=0;

}

void MainWindow::on_Mg_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,13);
     temp=0;
}

void MainWindow::on_Mg_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,14);
     temp=0;
}

void MainWindow::on_Mg_wnqn_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,15);
     temp=0;
}

void MainWindow::on_Ca_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,16);
     temp=0;
}

void MainWindow::on_Ca_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,17);
     temp=0;

}

void MainWindow::on_Ca_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,18);
     temp=0;
}

void MainWindow::on_Ca_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,19);
     temp=0;
}

void MainWindow::on_Ca_wnqn_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,20);
     temp=0;
}

void MainWindow::on_TDS_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,21);
     temp=0;
}

void MainWindow::on_TDS_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,22);
     temp=0;

}

void MainWindow::on_TDS_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,23);
     temp=0;
}

void MainWindow::on_TDS_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,24);
     temp=0;
}

void MainWindow::on_TDS_wnqn_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,25);
     temp=0;
}

void MainWindow::on_CL_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,26);
     temp=0;
}

void MainWindow::on_CL_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,27);
     temp=0;

}

void MainWindow::on_CL_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,28);
     temp=0;
}

void MainWindow::on_CL_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,29);
     temp=0;
}

void MainWindow::on_CL_wnqn_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,30);
     temp=0;
}

void MainWindow::on_SO4_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,31);
     temp=0;
}

void MainWindow::on_SO4_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,32);
     temp=0;

}

void MainWindow::on_SO4_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,33);
     temp=0;
}

void MainWindow::on_SO4_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,34);
     temp=0;
}

void MainWindow::on_SO4_wnqn_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,35);
     temp=0;
}

void MainWindow::on_NO3_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,36);
     temp=0;
}

void MainWindow::on_NO3_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,37);
     temp=0;

}

void MainWindow::on_NO3_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,38);
     temp=0;
}

void MainWindow::on_NO3_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,39);
     temp=0;
}

void MainWindow::on_NO3_wnqn_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,40);
     temp=0;
}


void MainWindow::on_PO4_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,41);
     temp=0;
}

void MainWindow::on_PO4_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,42);
     temp=0;

}

void MainWindow::on_PO4_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,43);
     temp=0;
}

void MainWindow::on_PO4_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,44);
     temp=0;
}

void MainWindow::on_PO4_wnqn_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,45);
     temp=0;
}


void MainWindow::on_EC_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,46);
     temp=0;
}

void MainWindow::on_EC_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,47);
     temp=0;

}

void MainWindow::on_EC_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,48);
     temp=0;
}

void MainWindow::on_EC_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,49);
     temp=0;
}

void MainWindow::on_EC_wnqn_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,50);
     temp=0;
}


void MainWindow::on_PH_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,51);
     temp=0;
}

void MainWindow::on_PH_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,52);
     temp=0;

}

void MainWindow::on_PH_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,53);
     temp=0;
}

void MainWindow::on_PH_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,54);
     temp=0;
}

void MainWindow::on_PH_wnqn_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,55);
     temp=0;
}

void MainWindow::on_Na_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,56);
     temp=0;
}

void MainWindow::on_Na_vstd_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,57);
     temp=0;

}

void MainWindow::on_Na_uwt_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,58);
     temp=0;
}

void MainWindow::on_Na_qr_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s.insert(temp,59);
     temp=0;
}

void MainWindow::on_Na_wnqn_textEdited(const QString &arg1)
{
    string str=arg1.toStdString();
    int x=1000;
    float temp=arg1.toFloat();
    cout<<temp<<endl<<"POOP"<<endl;
    s.insert(temp,60);
    temp=0;
}

void MainWindow::on_newparam_clicked()
{
    MainWindow w;
    std::cout<<"kakapee";
    QVBoxLayout *v2= w.findChild<QVBoxLayout*>("verticalLayout_2");
    QLineEdit *newparameter;
    Q_ASSERT(v2);
    newparameter=new QLineEdit;
    v2->addStretch(20);
    v2->addWidget(newparameter);

}


void MainWindow::on_BOD_ob_editingFinished()
{

}
