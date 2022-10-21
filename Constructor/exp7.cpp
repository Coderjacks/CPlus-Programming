#include<iostream>
using namespace std;
class A
{
    int x=10,y=20;
        public:

            A(int a,int b)
            {
               x=a;
               y=b;
             cout<<"x= "<<x<<"   y= "<<y<<endl;
            }
        void Display()
        {
            cout<<"x= "<<x<<"   y= "<<y<<endl;
        }
};
main()
{
   A a1(12,34),a2(34,56);
}

