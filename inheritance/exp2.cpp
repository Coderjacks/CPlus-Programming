#include<iostream>
using namespace std;
class A
{
            int x=30;
      public:
            int a=10;
            A()
            {
                cout<<"a class constructor."<<endl;
            }
             void DisplayA()
             {
                 cout<<"A class DisplayA Function.   x= "<<x<<endl;
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

             void DisplayB()
             {
                 DisplayA();
                 //  cout<<"A class member                x= "<<x<<endl;
                 cout<<"A class member                a= "<<a<<endl;
                 a=23;
                 cout<<"B class DisplayB Function.     b= "<<b<<endl;
             }
};
main()
{
    B b1;
    b1.DisplayB();
}

