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
                 cout<<"B class DisplayB Function.     b= "<<b<<endl;
             }
};
main()
{
    B b1;
    b1.DisplayA();
    A a1;
    a1.DisplayA();
    cout<<b1.a<<endl;
     cout<<b1.b<<endl;
     //cout<<b1.x<<endl;// not allow
}
