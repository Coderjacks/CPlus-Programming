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
        void showDetails()
        {
            cout<<"x= "<<x<<endl;
             cout<<"y= "<<y<<endl;
        }
};
main()
{
    Demo d1,d2,d3;
    d1.showDetails();
    d2.showDetails();
    d3.showDetails();
}

