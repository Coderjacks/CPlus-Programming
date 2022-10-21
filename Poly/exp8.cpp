#include<iostream>
using namespace std;
class A
{
    public:
        int a=10;
        virtual void Display()=0;
        void show()
        {
            cout<<"show"<<endl;
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
    A *a;
    B b1;
    a=&b1;
   a->Display();
   C c1;
   a=&c1;
   a->Display();

}

