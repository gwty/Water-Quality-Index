#ifndef CODING_H
#define CODING_H

#include <fstream>
#include <iostream>
#include "mainwindow.h"
#include "QString"
#include "QFile"
#include<string>
using namespace std;
double years[100];
double wqiglobal[100];
#define pH 0
#define TDS 1
#define EC 2
#define Ca 3
#define Mg 4
#define Na 5
#define CO3 6
#define HCO3 7
#define CL 8
#define SO4 9
#define Fe 10
//QString places[100];



int Y=50;
void saveme(QString file);
double qnformula(double vn,double std_val,double ph=0);
class sample
{
      public:
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
        char place[100];
        double wqi;
        sample()
        {
            values[pH].obs_val=7;
            values[pH].v_std=8.5;
            values[TDS].v_std=500;
            values[EC].v_std=1000;
            values[Ca].v_std=75;
            values[Mg].v_std=30;
            values[Na].v_std=200;
            values[CO3].v_std=200;
            values[HCO3].v_std=200;
            values[CL].v_std=200;
            values[SO4].v_std=200;
            values[Fe].v_std=0.1;
            wqi=-10000;
            for(int i=0;i<11;i++)
                values[i].uwt=(1/values[i].v_std);
        }
        void tostorestr(string a)
        {
            for(unsigned int i=0;i<a.size();i++)
                place[i]=a.at(i);
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

        //if(i==0)
        //    values[i].qr=qnformula(values[i].obs_val,values[i].v_std,1);

        values[i].qn=values[i].qr*values[i].uwt;
    }
    for(int j=0;j<11;j++)
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

void savetotextfile(string file)
{
    ofstream o;
    o.open(file.c_str(),ios::out);
    for(int i=0;i<100;i++)
    {
        if(s[i].values[1].obs_val!=0)
        {
        o<<s[i].place;
        o<<"\t\t\t";
        for(int j=0;j<11;j++)
        o<<s[i].values[j].obs_val<<"\t\t";
        o<<s[i].wqi<<"\t";
        if(s[i].wqi>=0 && s[i].wqi<25)
            o<<"Very Good";
        else  if(s[i].wqi>=25 && s[i].wqi<50)
            o<<"Good";
        else if(s[i].wqi>=50 && s[i].wqi<75)
            o<<"Poor";
        else if(s[i].wqi>=75 && s[i].wqi<100)
            o<<"Very Poor";
        else
            o<<"Unsuitable";
        o<<"\n\n";
        }
    }
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
                wqiglobal[times]=s[Y].wqi;
             //   ::wqi[times]=100*(s[i].sum[4]/s[i].sum[3]);
                times++;
            }

    }
}

#endif // CODING_H
