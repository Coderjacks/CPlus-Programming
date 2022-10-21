#include<iostream>
using namespace std;
 template<class x, class y, class z>
class addition
{
        x num1;
        y num2;
        z num3;
    public:
           addition(x num1, y num2, z num3)
           {
               this->num1= num1;
               this->num2= num2;
              this-> num3= num3;
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

