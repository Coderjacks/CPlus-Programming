#include<iostream>
using namespace std;
void showdetails(int s1,int s2,int s3,int *total,float *per)
{
    *total= s1+s2+s3;   // *total= *&t
    *per=*total/3.0;  //*per=*&p
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
}

