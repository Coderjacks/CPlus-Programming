#include<iostream>
using namespace std;
class A
{
    public:
        int a=10;
        virtual void Display()
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
class C: public A
{
    public:
        int c=30;
        void Display()
        {
            cout<<"Display C Class Member.  c= "<<c<<endl;
        }

};
main()
{
    A *a,a1;
    a=&a1;
    a->Display();
    B b1;
    a=&b1;
   a->Display();
   C c1;
   a=&c1;
   a->Display();

}
