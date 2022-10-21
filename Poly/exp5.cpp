#include<iostream>
using namespace std;
class A
{
    public:
        int a=10;
        void Display()
        {
            cout<<"Display A Class Member.  a= "<<a<<endl;
        }

};
class B: public A
{
    public:
        int b=20;
        void Display()
        {
            cout<<"Display B Class Member.  b= "<<b<<endl;
        }

};
main()
{
    B b1;
    b1.Display();
    b1.A::Display();
}
