#include<iostream>
using namespace std;
class Demo
{
       int x;
        int y;
    public :
         Demo()
         {
             cout<<"enter the value of x & y: "<<endl;
             cin>>x>>y;
         }
         Demo(int a, int b)
         {
            x=a;
            y=b;
         }
        void showDetails()
        {
            cout<<"x= "<<x<<endl;
             cout<<"y= "<<y<<endl;
        }
};
main()
{

    Demo d1(2,3),d2;
    d1.showDetails();
    d2.showDetails();

}


