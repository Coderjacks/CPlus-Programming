#include<iostream>
using namespace std;
class Demo
{
       int x=12;
       int y=20;
    public :
        void showDetails()
        {
            cout<<"x= "<<x<<endl;
             cout<<"y= "<<y<<endl;

        }
        void changeDetails()
        {
            x=100;
            y=200;
        }

};
main()
{
    Demo d1,d2,d3;
    cout<<"First Object: "<<endl;
    d1.showDetails();
     cout<<"second Object: "<<endl;
     d2.showDetails();
     cout<<"third Object: "<<endl;
      d3.showDetails();
      cout<<"change: "<<endl;
      d2.changeDetails();
      cout<<"First Object: "<<endl;
    d1.showDetails();
     cout<<"second Object: "<<endl;
     d2.showDetails();
     cout<<"third Object: "<<endl;
      d3.showDetails();

}
