#include<iostream>
using namespace std;
class Demo
{
       int x;
       int y;
    public:
        Demo(int a,int b)
        {
            x=a;
            y= b;
        }
        Demo()
        {

        }
        void Display()
        {
            cout<<"x= "<<x<<endl;
              cout<<"y= "<<y<<endl;
        }
        Demo operator +(Demo d)
        {
            Demo A;
                  A.x  = x+d.x;
                  A.y=y+d.y;
                  return A;
        }
};
main()
{
    Demo d1(12,56),d2(5,10);
    cout<<"d1 Object values : "<<endl;
    d1.Display();
     cout<<"d2 Object values : "<<endl;
    d2.Display();
    Demo d3=d1+d2;
     cout<<"d3 Object values : "<<endl;
    d3.Display();
    cout<<"d1 Object values : "<<endl;
    d1.Display();
     cout<<"d2 Object values : "<<endl;
    d2.Display();

}
