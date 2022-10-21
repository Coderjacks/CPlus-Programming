#include<iostream>
using namespace std;
class Demo
{
       int x;
        int y;
    public :
         Demo()
         {

             cout<<"non para const. "<<endl;
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
}



