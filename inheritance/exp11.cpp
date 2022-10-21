#include<iostream>
using namespace std;
class A
{

      public:
            int a=10;
            A(int y)
            {
                cout<<"a class constructor. "<<endl;
                a=y;
                cout<<"a class variable  a. "<<a<<endl;
            }
             void Display()
             {
                 cout<<"A class DisplayA Function.   a= "<<a<<endl;
             }
};
class B:  public A
{
      public:
            int b=20;
            B(int x):A(7)
            {
                cout<<"B class constructor."<<endl;
                b=x;
                cout<<"B class variable  b. "<<b<<endl;
            }
             void Display()
             {
                 cout<<"B class DisplayB Function.     b= "<<b<<endl;
             }
};

main()
{

    B b1(6);
    A a1(9);
}



