#include<iostream>
using namespace std;
class A
{

      public:
            int a=10;
            A()
            {
                cout<<"a class constructor. "<<endl;
                cout<<"a class variable address a. "<<&a<<endl;
            }
             void Display()
             {
                 cout<<"A class DisplayA Function.   a= "<<a<<endl;
             }
};
class B: virtual public A
{
      public:
            int b=20;
            B()
            {
                cout<<"B class constructor."<<endl;
                cout<<"B class variable address b. "<<&b<<endl;
            }
             void Display()
             {
                 cout<<"B class DisplayB Function.     b= "<<b<<endl;
             }
};
class C: virtual public A
{
      public:
            int c=50;
            C()
            {
                cout<<"C class constructor."<<endl;
                cout<<"C class variable address c. "<<&c<<endl;
            }
             void Display()
             {
                 cout<<"C class DisplayC Function.     C= "<<c<<endl;
             }
};
class D: public B,public C
{
      public:
            int d=100;
            D()
            {
                cout<<"D class constructor."<<endl;
                cout<<"D class variable address d. "<<&d<<endl;
            }
             void Display()
             {
                 cout<<"D class DisplayD Function.     d= "<<d<<endl;
             }
};
main()
{
     D d1;
     d1.A::Display();

     A a1,a2,a3;

}



