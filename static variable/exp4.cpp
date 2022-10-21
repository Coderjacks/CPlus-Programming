#include<iostream>
using namespace std;
class Demo
{
       int x=12;
       int y=20;
       static int z;
    public :
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
    Demo d1,d2,d3;
    cout<<"First Object: "<<endl;
    d1.showDetails();
     cout<<"second Object: "<<endl;
     d2.showDetails();
     cout<<"third Object: "<<endl;
      d3.showDetails();
      cout<<"change by d2 object: "<<endl;
      d2.changeDetails();
      cout<<"First Object: "<<endl;
    d1.showDetails();
     cout<<"second Object: "<<endl;
     d2.showDetails();
     cout<<"third Object: "<<endl;
      d3.showDetails();



}

