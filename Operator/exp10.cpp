#include<iostream>
using namespace std;
int main()
{
    int a=13,b=34,d=33,e=12,c;

    c=a++<=--b?d++ :e--;

    cout<<"a=  "<<a<<endl;
    cout<<"b=  "<<b<<endl;
    cout<<"d=  "<<d<<endl;
    cout<<"e=  "<<e<<endl;
    cout<<"c=  "<<c<<endl;

    return 0;
}

