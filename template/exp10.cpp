#include<iostream>
using namespace std;
 template<class x, class y, class z>
class addition
{
        x num1;
        y num2;
        z num3;
    public:
           addition(x a1, y a2, z a3)
           {
               num1= a1;
               num2= a2;
               num3= a3;
               cout<<"construtor"<<endl;
           }

            void add(x a,y b, z  c)
            {
                 z d;
                d=a+b+c;
                cout<<"addition of three number: "<<d<<endl;
            }

};
main()
{
      addition <int, float, char>a1(12,45.67f,'a');
      cout<<"......................................"<<endl;
      a1.add(1,45.67,'a');
}


