#include<iostream>
using namespace std;
void add(int a,int b)
{
    int c;
    c=a+b;
    cout<<"addition of two integer number: "<<c<<endl;
}

void add(int a,int b,int c)
{
    int d;
    d=a+b+c;
    cout<<"addition of three integer number: "<<d<<endl;
}
void add(int a,int b,int c,int e)
{
    int d;
    d=a+b+c+e;
    cout<<"addition of four integer number: "<<d<<endl;
}
main()
{
   add(23,45);
   add(12,34,56);
   add(12,34,56,78);
}



