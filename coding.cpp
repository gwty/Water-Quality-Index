#include<iostream>
#include<sstream>
#include<QString>
using namespace std;
namespace gwty
{
class sample
{
      private:
        struct rows
                   {
                        double param;
                        double obs_val;
                        double v_std;
                        double uwt;
                        double qr;
                        double qn;
                    }values[20];        //the number of parameters, like Ca,BOD... extendible upto 20

        double sum;
       public:
        void insert(double,int);
        void calculate();

};

void sample::insert(double value,int where)
{
    int times;
    times=where%6;
    where/=6;
    for(int i=0;i<where;i++)
    {
        switch(times)
        {
               case 1:values[i].param=value;break;
               case 2:values[i].obs_val=value;break;
               case 3:values[i].v_std=value;break;
               case 4:values[i].uwt=value;break;
               case 5:values[i].qr=value;break;
               case 6:values[i].qn=value;break;
         default:cout<<"Error dude!"<<endl;
        }
    }
}


void hello()
{
    std::cout<<"Hello!";
}
}
