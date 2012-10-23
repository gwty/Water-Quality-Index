#ifndef CODING_H
#define CODING_H

#include <fstream>
#include <iostream>
#include "mainwindow.h"
#include "QString"
#include "QFile"
using namespace std;
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
                    }values[20];        //the number of parameters, like Ca,BOD... extendible upto 20

        double sum[5];
       public:
        void insert(float,int);
        void calculate();
        sample()
        {
            for(int i=0;i<5;i++)
                sum[i]=0;
        }

};


void sample::insert(float value,int where)
{
    int times=0;
    int count=0;
    while(where/5!=0)
    {
    times=where%5;
    where/=5;
    count++;
    }
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


    sum[times]+=value;
    cout<<sum[times];
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
