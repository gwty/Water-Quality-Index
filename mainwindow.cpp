#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "coding.h"
#include "QLineEdit"
#include "QLCDNumber"
#include "QVBoxLayout"
#include<QString>
#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include<qwt_plot_histogram.h>
#include<QString>
#include <qwt_series_data.h>
#include<qcustomplot.h>
QVector<QString> labels;
QVector<double> ticks;
QVector<double> wqivector;
QCustomPlot *hell;
QCPBars *hell2;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QCustomPlot *myPlot = new QCustomPlot(ui->graph);
    QCPBars *bar=new QCPBars(myPlot->xAxis, myPlot->yAxis);
    hell=myPlot;
    hell2=bar;
    ui->graphh->addWidget(myPlot);
    myPlot->rescaleAxes();
    myPlot->replot();
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
     savetofile(file);
}

void MainWindow::on_CO3_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,6);
     temp=0;
     refreshme();
}

void MainWindow::on_HCO3_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,7);
     temp=0;
     refreshme();
}


void MainWindow::on_Mg_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,4);
     temp=0;
     refreshme();
}


void MainWindow::on_Ca_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,3);
     temp=0;
     refreshme();
}


void MainWindow::on_TDS_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,1);
     temp=0;
     refreshme();
}

void MainWindow::on_CL_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,8);
     temp=0;
     refreshme();
}


void MainWindow::on_SO4_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,9);
     temp=0;
     refreshme();
}


void MainWindow::on_Fe_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,10);
     temp=0;
     refreshme();
}



void MainWindow::on_EC_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,2);
     temp=0;
     refreshme();
}



void MainWindow::on_PH_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,0);
     temp=7;
     refreshme();
}


void MainWindow::on_Na_ob_textEdited(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,5);
     temp=0;
     refreshme();
}


void MainWindow::on_newparam_clicked()
{
    QLineEdit *newparameter[6];
    for(int i=0;i<6;i++)
    newparameter[i]=new QLineEdit;
    ui->verticalLayout_2->addWidget(newparameter[0]);
    ui->verticalLayout->addWidget(newparameter[1]);
    ui->verticalLayout_3->addWidget(newparameter[2]);
    ui->verticalLayout_4->addWidget(newparameter[3]);
    ui->verticalLayout_5->addWidget(newparameter[4]);
    ui->verticalLayout_6->addWidget(newparameter[5]);

}


void MainWindow::refreshme()
{
    QString str;
    str.setNum(s[Y].values[0].v_std);
    ui->v1->setText(str);
    str.setNum(s[Y].values[1].v_std);
    ui->v2->setText(str);
    str.setNum(s[Y].values[2].v_std);
    ui->v3->setText(str);
    str.setNum(s[Y].values[3].v_std);
    ui->v4->setText(str);
    str.setNum(s[Y].values[4].v_std);
    ui->v5->setText(str);
    str.setNum(s[Y].values[5].v_std);
    ui->v6->setText(str);
    str.setNum(s[Y].values[6].v_std);
    ui->v7->setText(str);
    str.setNum(s[Y].values[7].v_std);
    ui->v8->setText(str);
    str.setNum(s[Y].values[8].v_std);
    ui->v9->setText(str);
    str.setNum(s[Y].values[9].v_std);
    ui->v10->setText(str);
/*
    str.setNum(s[Y].values[0].obs_val);
    ui->BOD_ob->setText(str);
    str.setNum(s[Y].values[1].obs_val);
    ui->TH_ob->setText(str);
    str.setNum(s[Y].values[2].obs_val);
    ui->Mg_ob->setText(str);
    str.setNum(s[Y].values[3].obs_val);
    ui->Ca_ob->setText(str);
    str.setNum(s[Y].values[4].obs_val);
    ui->TDS_ob->setText(str);
    str.setNum(s[Y].values[5].obs_val);
    ui->CL_ob->setText(str);
    str.setNum(s[Y].values[6].obs_val);
    ui->SO4_ob->setText(str);
    str.setNum(s[Y].values[7].obs_val);
    ui->NO3_ob->setText(str);
    str.setNum(s[Y].values[8].obs_val);
    ui->PO4_ob->setText(str);
    str.setNum(s[Y].values[9].obs_val);
    ui->EC_ob->setText(str);
    str.setNum(s[Y].values[10].obs_val);
    ui->PH_ob->setText(str);
    str.setNum(s[Y].values[11].obs_val);
    ui->Na_ob->setText(str);
*/




    ui->v1->setNum(s[Y].values[0].v_std);
    ui->v2->setNum(s[Y].values[1].v_std);
    ui->v3->setNum(s[Y].values[2].v_std);
    ui->v4->setNum(s[Y].values[3].v_std);
    ui->v5->setNum(s[Y].values[4].v_std);
    ui->v6->setNum(s[Y].values[5].v_std);
    ui->v7->setNum(s[Y].values[6].v_std);
    ui->v8->setNum(s[Y].values[7].v_std);
    ui->v9->setNum(s[Y].values[8].v_std);
    ui->v10->setNum(s[Y].values[9].v_std);
    ui->v11->setNum(s[Y].values[10].v_std);

    ui->uw1->setNum(s[Y].values[0].uwt);
    ui->uw2->setNum(s[Y].values[1].uwt);
    ui->uw3->setNum(s[Y].values[2].uwt);
    ui->uw4->setNum(s[Y].values[3].uwt);
    ui->uw5->setNum(s[Y].values[4].uwt);
    ui->uw6->setNum(s[Y].values[5].uwt);
    ui->uw7->setNum(s[Y].values[6].uwt);
    ui->uw8->setNum(s[Y].values[7].uwt);
    ui->uw9->setNum(s[Y].values[8].uwt);
    ui->uw10->setNum(s[Y].values[9].uwt);
    ui->uw11->setNum(s[Y].values[10].uwt);


    ui->sum1->setNum(s[Y].sum[0]);
    ui->sum2->setNum(s[Y].sum[1]);
    ui->sum3->setNum(s[Y].sum[2]);
    ui->sum4->setNum(s[Y].sum[3]);
    ui->sum5->setNum(s[Y].sum[4]);
    ui->q1->setNum(s[Y].values[0].qr);
    ui->q2->setNum(s[Y].values[1].qr);
    ui->q3->setNum(s[Y].values[2].qr);
    ui->q4->setNum(s[Y].values[3].qr);
    ui->q5->setNum(s[Y].values[4].qr);
    ui->q6->setNum(s[Y].values[5].qr);
    ui->q7->setNum(s[Y].values[6].qr);
    ui->q8->setNum(s[Y].values[7].qr);
    ui->q9->setNum(s[Y].values[8].qr);
    ui->q10->setNum(s[Y].values[9].qr);
    ui->q11->setNum(s[Y].values[10].qr);


    ui->w1->setNum(s[Y].values[0].qn);
    ui->w2->setNum(s[Y].values[1].qn);
    ui->w3->setNum(s[Y].values[2].qn);
    ui->w4->setNum(s[Y].values[3].qn);
    ui->w5->setNum(s[Y].values[4].qn);
    ui->w6->setNum(s[Y].values[5].qn);
    ui->w7->setNum(s[Y].values[6].qn);
    ui->w8->setNum(s[Y].values[7].qn);
    ui->w9->setNum(s[Y].values[8].qn);
    ui->w10->setNum(s[Y].values[9].qn);
    ui->w11->setNum(s[Y].values[10].qn);
    s[Y].wqi=100*(s[Y].sum[4]/s[Y].sum[3]);
            ui->wqi->setNum(s[Y].wqi);

            if(s[Y].wqi>=0 && s[Y].wqi<25)
                str="Very Good";
            else  if(s[Y].wqi>=25 && s[Y].wqi<50)
                str="Good";
            else if(s[Y].wqi>=50 && s[Y].wqi<75)
                str="Poor";
            else if(s[Y].wqi>=75 && s[Y].wqi<100)
                str="Very Poor";
            else
                str="Unsuitable";

            ui->wqiresult->setText(str);

    str=str.fromStdString(s[Y].place);
    ui->place->setText(str);
    s[Y].updgraph();

 // add curves


 //copy the data into the curves
 ///delete c1;

 //c1=new QwtPlotCurve;
 //c1->setRawSamples(incr,wqiglobal,100);
 //c1->attach(hell);
 //hell->setAxisAutoScale(QwtPlot::xBottom);
 //hell->setAxisAutoScale(QwtPlot::yLeft);
 // curve2->setRawSamples(wqi,years,400);
 //hell->setAxisScale(QwtPlot::xBottom,0,20,1);
 //curve2->attach(hell);

 // finally, refresh the plot
 //for(int i=50;i<Y;i++)
  //       hell2->addData(s[i].wqi,s[i].wqi);
 //hell->replot();
}

void MainWindow::settozero()
{
    QString str;
    str.setNum(s[Y].values[0].obs_val);
    ui->PH_ob->setText(str);
    str.setNum(s[Y].values[1].obs_val);
    ui->TDS_ob->setText(str);
    str.setNum(s[Y].values[2].obs_val);
    ui->EC_ob->setText(str);
    str.setNum(s[Y].values[3].obs_val);
    ui->Ca_ob->setText(str);
    str.setNum(s[Y].values[4].obs_val);
    ui->Mg_ob->setText(str);
    str.setNum(s[Y].values[5].obs_val);
    ui->Na_ob->setText(str);
    str.setNum(s[Y].values[6].obs_val);
    ui->CO3_ob->setText(str);
    str.setNum(s[Y].values[7].obs_val);
    ui->HCO3_ob->setText(str);
    str.setNum(s[Y].values[8].obs_val);
    ui->CL_ob->setText(str);
    str.setNum(s[Y].values[9].obs_val);
    ui->SO4_ob->setText(str);
    str.setNum(s[Y].values[10].obs_val);
    ui->Fe_ob->setText(str);
}

void MainWindow::on_CO3_ob_editingFinished()
{
    refreshme();
}

void MainWindow::on_CO3_ob_textChanged(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,6);
     temp=0;
     refreshme();
}

void MainWindow::on_HCO3_ob_textChanged(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,7);
     temp=0;
     refreshme();
}

void MainWindow::on_Mg_ob_textChanged(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,4);
     temp=0;
     refreshme();
}

void MainWindow::on_Ca_ob_textChanged(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,3);
     temp=0;
     refreshme();
}

void MainWindow::on_TDS_ob_textChanged(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,1);
     temp=0;
     refreshme();
}

void MainWindow::on_CL_ob_textChanged(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,8);
     temp=0;
     refreshme();
}

void MainWindow::on_SO4_ob_textChanged(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,9);
     temp=0;
     refreshme();
}

void MainWindow::on_Fe_ob_textChanged(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,10);
     temp=0;
     refreshme();
}


void MainWindow::on_EC_ob_textChanged(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,2);
     temp=0;
     refreshme();
}

void MainWindow::on_PH_ob_textChanged(const QString &arg1)
{
   double temp=arg1.toDouble();
   s[Y].insert(temp,0);
    temp=0;
    refreshme();
}

void MainWindow::on_Na_ob_textChanged(const QString &arg1)
{
    float temp=arg1.toFloat();
    s[Y].insert(temp,5);
     temp=0;
     refreshme();
}



void MainWindow::on_prev_clicked()
{
    hell2->setAntialiased(1);
    hell2->addData(wqiglobal[Y],Y-50);
    hell->rescaleAxes();
    hell->replot();
    Y--;
    settozero();
    refreshme();
}

void MainWindow::on_next_clicked()
{
    Y++;
    settozero();
    refreshme();
    hell->clearPlottables();
    hell2->clearData();
    hell2->setAntialiased(1);
    hell->setTitle("Water Quality Index");
    hell->xAxis->setLabel("Places");
    hell->yAxis->setLabel("Water Quality Index");
    ticks << Y-49;
    labels <<s[Y].place;
    wqivector<<s[Y].wqi;
   // hell->plottable(Y);
    hell2->addData(ticks,wqivector);
      hell->xAxis->setAutoTicks(false);
      hell->xAxis->setAutoTickLabels(false);
      hell->xAxis->setTickVector(ticks);
      hell->xAxis->setTickVectorLabels(labels);
      hell->xAxis->setTickLabelRotation(60);
      hell->xAxis->setSubTickCount(0);
      hell->xAxis->setTickLength(0, 4);
      hell->xAxis->setGrid(false);
      hell->xAxis->setRange(0,40);
    hell->rescaleAxes();
    hell2->rescaleValueAxis();
    hell->replot();
}

void MainWindow::on_actionLoad_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    string file=fileName.toStdString();
    loadfromfile(file);
    refreshme();
}

void MainWindow::on_place_editingFinished()
{
    ;
}

void MainWindow::on_place_textEdited(const QString &arg1)
{
    string a=arg1.toStdString();
    s[Y].tostorestr(a);
}


void MainWindow::on_HCO3_ob_editingFinished()
{
    refreshme();
}

void saveme(QString name)
{
     hell->saveJpg(name,1280,1024);
}


void MainWindow::on_actionSave_As_Text_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this);
    string file=fileName.toStdString();
    savetotextfile(file);
}

void MainWindow::on_actionSave_Graph_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this);
    saveme(fileName);
}
