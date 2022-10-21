#include<iostream>
using namespace std;
class A
{
    int x=10,y=20;
        public:

            A(int a,int b)
            {
               x=a;
               y=b;
            }
        void Display()
        {
            cout<<"x= "<<x<<"   y= "<<y<<endl;
        }
};
main()
{
    int o,q;
    cout<<"enter a number: "<<endl;
    cin>>o>>q;
   A a1(o,q);

 //  a1.Display();

}

