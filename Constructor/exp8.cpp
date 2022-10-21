#include<iostream>
using namespace std;
class A
{
    int x=10,y=20;
        public:
            A()
            {
                 cout<<"Non Para constructor : "<<endl;
                 cout<<"enter x & y value: "<<endl;
                 cin>>x>>y;
            }
            A(int a,int b=0)
            {
              cout<<"Para constructor : "<<endl;
               x=a;
               y=b;
            }
        void Display()
        {
            cout<<"display function"<<endl;
            cout<<"x= "<<x<<"   y= "<<y<<endl;
        }
};
main()
{
    A a2;

    a2.Display();
}


