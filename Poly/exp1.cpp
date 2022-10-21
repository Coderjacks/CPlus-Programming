#include<iostream>
using namespace std;
class Demo
{
       int x=12;
       int y=23;

    public:
        void operator +()
        {
            cout<<"x= "<<x<<endl;
            cout<<"y= "<<y<<endl;
        }
      void operator -()
      {
          x=-x;
          y=-y;
           cout<<"x= "<<x<<endl;
            cout<<"y= "<<y<<endl;
      }

};
main()
{
    Demo d1;
    +d1;
    -d1;
}
