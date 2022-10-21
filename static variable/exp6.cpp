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
        }
        static void printDetails()
        {
             cout<<"printDetails static z= "<<z<<endl;
        }
};
int Demo::z=50;
main()
{
    cout<<Demo::z<<endl;
    Demo::printDetails();

}



