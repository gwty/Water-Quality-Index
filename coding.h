#ifndef CODING_H
#define CODING_H

#include <fstream>
#include <iostream>
#include "mainwindow.h"
#include "QString"
#include "QFile"
using namespace std;
double sum[5]={0.0};
class sample
{
      private:
        struct rows
                   {
                        float param;
                        float obs_val;
                        float v_std;
                        float uwt;
                        float qr;
                        float qn;
                        rows()
                        {
                            param=0;
                            obs_val=0;
                            v_std=0;
                            uwt=0;
                            qr=0;
                            qn=0;
                        }
                    }values[20];        //the number of parameters, like Ca,BOD... extendible upto 20
       public:
        void insert(float,int);
        void calculate();
        void updatesum();

};


void sample::insert(float value,int where)
{
    int times=0;
    int count=0;
    int i=0;
    int temp=0;
    temp=where%10;
    while(where/5!=0)
    {
    where/=5;
    count++;
    }
    i=where/5;
    if(temp<5)
           times=temp;
    else
        times=temp-5;


    switch(times)
    {
           //case 1:values[i].param=value;break;
           case 0:values[i].obs_val=value;break;
           case 1:values[i].v_std=value;break;
           case 2:values[i].uwt=value;break;
           case 3:values[i].qr=value;break;
           case 4:values[i].qn=value;break;
     default:cout<<"Error dude!"<<endl;
    }


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
    for(int j=0;j<20;j++)
    {
        cout<<values[6].obs_val;
            sum[0]+=values[j].obs_val;
            sum[1]+=values[j].v_std;
            sum[2]+=values[j].uwt;
            sum[3]+=values[j].qr;
            sum[4]+=values[j].qn;
    }
}

sample s;

void savetofile(string file,sample &s)
{
    ofstream op;
    op.open(file.c_str(),ios::binary|ios::app);
    op.write((char *)&s,sizeof(s));
    op.close();
}

void hello()
{
    std::cout<<"Hello!";
    savetofile("Hello",s);
}
#endif // CODING_H
