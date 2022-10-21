#include<iostream>
using namespace std;
void addtwoint(int a,int b)
{
    int c;
    c=a+b;
    cout<<"addition of two integer number: "<<c<<endl;
}
void addthreeint(int a,int b,int c)
{
    int d;
    d=a+b+c;
    cout<<"addition of three integer number: "<<d<<endl;
}
void addfourint(int a,int b,int c,int e)
{
    int d;
    d=a+b+c+e;
    cout<<"addition of four integer number: "<<d<<endl;
}
main()
{
    addtwoint(23,45);
    addthreeint(12,34,56);
    addfourint(12,34,56,78);
}


