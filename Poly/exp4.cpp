#include<iostream>
using namespace std;
class Demo
{
       int x;
       int y;
    public:
        Demo(int a=0,int b=0)
        {
            x=a;
            y= b;
        }
        void Display()
        {
            cout<<"x= "<<x<<endl;
              cout<<"y= "<<y<<endl;
        }
        Demo operator +(Demo d)
        {
                  d.x  = x+d.x;
                  d.y=y+d.y;
                  return d;
        }
};
main()
{
    Demo d1(3,9),d2(5,10),d4(10,20);
    cout<<"d1 Object values : "<<endl;
    d1.Display();
     cout<<"d2 Object values : "<<endl;
    d2.Display();
    Demo d3=d1+d2+d4;
     cout<<"d3 Object values : "<<endl;
    d3.Display();
}

