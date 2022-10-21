#include<iostream>
using namespace std;
class A
{
         private:  int x=30;
      protected:  int y= 40;
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
class C: public B
{
      public:
            int c=50;
            C()
            {
                cout<<"C class constructor."<<endl;
            }
             void DisplayC()
             {
                   cout<<"A class member                a= "<<a<<endl;
                  cout<<"A class member                y= "<<y<<endl;
                //   cout<<"A class member                x= "<<x<<endl;  not allow
                  cout<<"B class member                b= "<<b<<endl;
                 cout<<"C class DisplayC Function.     C= "<<c<<endl;
             }
};
main()
{
   C c1;
   c1.DisplayC();
}

