#ifndef CODING_H
#define CODING_H

#include <fstream>
#include <iostream>
#include "mainwindow.h"
#include "QString"
#include "QFile"
using namespace std;
double years[100];
double wqi[100];
int Y=50;
double qnformula(double vn,double std_val,double ph=0);
class sample
{
      private:
        struct rows
                   {
                        char param[20];
                        double obs_val;
                        double v_std;
                        double uwt;
                        double qr;
                        double qn;
                        rows()
                        {
                            obs_val=0;
                            v_std=0;
                            uwt=0;
                            qr=0;
                            qn=0;
                        }
                    }values[20];        //the number of parameters, like Ca,BOD... extendible upto 20
       public:
        double sum[5];
        sample()
        {
            values[10].obs_val=7;
            values[0].v_std=5;
            values[1].v_std=30;
            values[2].v_std=200;
            values[3].v_std=200;
            values[4].v_std=500;
            values[5].v_std=250;
            values[6].v_std=200;
            values[7].v_std=10.0;
            values[8].v_std=0.05;
            values[9].v_std=1000;
            values[10].v_std=8.5;
            values[11].v_std=250;
            for(int i=0;i<12;i++)
                values[i].uwt=(1/values[i].v_std);
        }

        void insert(float,int);
        void calculate();
        void updatesum();
        void updgraph();
        friend class MainWindow;

};


void sample::insert(float value,int where)
{

    values[where].obs_val=value;


    /*
    for(int i=0;i<=count;i++)
    {
        switch(times)
        {
               //case 1:values[i].param=value;break;
               case 0:values[i+count].obs_val=value;break;
               case 1:values[i+count].v_std=value;break;
               case 2:values[i+count].uwt=value;break;
               case 3:values[i+count].qr=value;break;
               case 4:values[i+count].qn=value;break;
         default:cout<<"Error dude!"<<endl;
        }


    }
*/

   // sum[times]+=value;
    updatesum();
}

void sample::updatesum()
{
    sum[0]=0;
    sum[1]=0;
    sum[2]=0;
    sum[3]=0;
    sum[4]=0;
    for(int i=0;i<20;i++)
    {
        if(values[i].obs_val!=0)
            values[i].qr=qnformula(values[i].obs_val,values[i].v_std);

        if(i==10)
            values[i].qr=qnformula(values[i].obs_val,values[i].v_std,1);

        values[i].qn=values[i].qr*values[i].uwt;
    }
    for(int j=0;j<20;j++)
    {
            sum[0]+=values[j].obs_val;
            sum[1]+=values[j].v_std;
            sum[2]+=values[j].uwt;
            sum[3]+=values[j].qr;
            sum[4]+=values[j].qn;
    }
}

sample s[100];

void savetofile(string file)
{
    ofstream op;
    op.open(file.c_str(),ios::binary);
    op.write((char *)&s,sizeof(s));
    op.close();
}

void loadfromfile(string file)
{
    ifstream ip;
    ip.open(file.c_str(),ios::binary);
    ip.read((char *)&s,sizeof(s));
    ip.close();
}

void hello()
{
    std::cout<<"Hello!";
    savetofile("Hello");
}

double qnformula(double vn,double std_val,double ph)
{
    double qn;
    double vio=0;
    if(ph==1)
           vio=7;

    qn=((100*(vn-vio))/(std_val));
    return qn;
}

void sample::updgraph()
{
    int times=0;
    for(int i=0;i<100;i++)
    {
        if(s[i].sum[3]!=0)
            {
                years[times]=i+1962;
                wqi[times]=100*(s[i].sum[4]/s[i].sum[3]);
                times++;
            }

    }
}

#endif // CODING_H
