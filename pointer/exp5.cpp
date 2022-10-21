#include<iostream>
using namespace std;
void showdetails(int s1,int s2,int s3,int *total,float *per)
{
    *total= s1+s2+s3;   // *total= *&t
    *per=*total/3.0;  //*per=*&p
    cout<<"address of total : "<<&total<<endl;
    cout<<"address of per : "<<&per<<endl;
     cout<<"value of total : "<<total<<endl;
    cout<<"value of per : "<<per<<endl;
}
main()
{
   int m1,m2,m3,t;
   float p;
   cout<<"enter three subject marks: "<<endl;
   cin>>m1>>m2>>m3;
    showdetails(m1,m2,m3,&t,&p);
    cout<<"total : "<<t<<endl;
    cout<<"per : "<<p<<endl;
      cout<<"address of t : "<<&t<<endl;
    cout<<"address of p : "<<&p<<endl;
}


