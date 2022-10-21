#include<iostream>
using namespace std;
class A
{

      public:
            int a=10;
            A()
            {
                cout<<"a class constructor."<<endl;
            }
             void Display()
             {
                 cout<<"A class DisplayA Function.   a= "<<a<<endl;
             }
};
class B: public A
{
      public:
            int b=20;
            B()
            {
                cout<<"B class constructor."<<endl;
            }
             void Display()
             {
                 cout<<"B class DisplayB Function.     b= "<<b<<endl;
             }
};
class C: public B
{
      public:
            int c=50;
            C()
            {
                cout<<"C class constructor."<<endl;
            }
             void Display()
             {
                 cout<<"C class DisplayC Function.     C= "<<c<<endl;
             }
};
main()
{
     C c1;
     c1.Display();
     c1.A::Display();
}



