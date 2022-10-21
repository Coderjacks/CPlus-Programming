#include<iostream>
using namespace std;
void add(int a,int b)
{
    int c;
    c=a+b;
    cout<<"addition of two integer number: "<<c<<endl;
}
void add(float a,float b)
{
    int d;
    d=a+b;
    cout<<"addition of two float number: "<<d<<endl;
}
void add(double a,double b)
{
    double d;
    d=a+b;
    cout<<"addition of two double number: "<<d<<endl;
}
void add(char a,char b)
{
   unsigned char d;
    d=a+b;
    cout<<"addition of two char : "<<d<<"  acsii d= "<<(int)d<<endl;
}
main()
{
   add(23,45);
   add(23.78,45.87);
   add(256.67f,78.677f);
   add('a','b');
}
