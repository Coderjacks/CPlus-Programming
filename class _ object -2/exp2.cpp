#include<iostream>
using namespace std;
class Demo
{
  public:
            int x;
            int y;
             Demo(int a,int b)
             {
                 x=a;
                 y=b;
                 cout<<" const. x : "<<x<<endl;
                   cout<<"const  y : "<<y<<endl;
             }
             void Show()
             {
                 cout<<"Show x : "<<x<<endl;
                   cout<<"Show y : "<<y<<endl;
             }

};
main()
{
  Demo d(2,4);
  d.Show();
}

