#include<iostream>
using namespace std;
class Demo
{
    public :
         int x=12;
        int y=20;
           static int z;
        void showDetails()
        {
            cout<<"x= "<<x<<endl;
             cout<<"y= "<<y<<endl;
             cout<<"z= "<<z<<endl;
              cout<<"z= "<<&z<<endl;
        }
        void changeDetails()
        {
            x=100;
            y=200;
            z=300;
        }
};
int Demo::z=50;
main()
{
    cout<<Demo::z<<endl;

}


