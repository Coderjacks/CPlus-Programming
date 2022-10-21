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
                 cout<<"A class member                a= "<<a<<endl;
                  cout<<"A class member                Y= "<<y<<endl;
                 cout<<"B class DisplayB Function.     b= "<<b<<endl;
             }
};
main()
{
      B b1;
      cout<<"a= "<<b1.a<<endl;
      b1.DisplayB();

   //   cout<<"y= "<<b1.y<<endl;   not allow
}


