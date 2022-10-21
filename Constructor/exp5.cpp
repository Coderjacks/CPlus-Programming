#include<iostream>
using namespace std;
class A
{
    int x,y;
        public:
            A()
            {
                cout<<"enter x & y value: "<<endl;
                cin>>x>>y;
            }
        void Display()
        {
            cout<<"x= "<<x<<"   y= "<<y<<endl;
        }
};
main()
{
   A a1,a2,a3,a4;
   a4.Display();
   a3.Display();
   a1.Display();

}
