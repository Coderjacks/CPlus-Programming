#include<iostream>
using namespace std;
main()
{
    int a=123,*b;

    cout<<"a= "<<a<<endl;
    cout<<"address of a= "<<&a<<endl;
    cout<<"a= "<<*&a<<endl;
      b=&a;
      cout<<"address of a: "<<b<<endl;
      cout<<" a: "<<*b<<endl;
        cout<<"address of b: "<<&b<<endl;

}

