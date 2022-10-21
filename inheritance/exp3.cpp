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

main()
{
      A a1;
      cout<<"a= "<<a1.a<<endl;
      // cout<<"x= "<<a1.x<<endl;   not allow
     //   cout<<"y= "<<a1.y<<endl;    not allow
}


