#include<iostream>
using namespace std;
main()
{
    int a=123,*b,c=100,d=200;
    cout<<"a= "<<a<<endl;
    cout<<"address of a= "<<&a<<endl;
    cout<<"a= "<<*&a<<endl;
      b=&a;
      cout<<"address of a: "<<b<<endl;
      cout<<" a: "<<*b<<endl;
        cout<<"address of b: "<<&b<<endl;
           b=&c;
      cout<<"address of c: "<<b<<endl;
       cout<<"address of c: "<<&c<<endl;
        cout<<" c: "<<c<<endl;
      cout<<" c: "<<*b<<endl;
        cout<<"address of b: "<<&b<<endl;
           b=&d;
      cout<<"address of d= "<<b<<endl;
       cout<<"address of d= "<<&d<<endl;
        cout<<" d= "<<d<<endl;
      cout<<" d= "<<*b<<endl;
        cout<<"address of b= "<<&b<<endl;

}
