#include<iostream>
using namespace std;
class A
{
     private:
       int x=10,y=12;
     public:
        DisplayA()
        {
            cout<<"x= "<<x<<endl;
            cout<<"y= "<<y<<endl;
        }
         friend void show(A a);
};
void show(A a)
{
           cout<<"x= "<<a.x<<endl;
            cout<<"y= "<<a.y<<endl;
}

main()
{
     A a1;
     a1.DisplayA();
}

