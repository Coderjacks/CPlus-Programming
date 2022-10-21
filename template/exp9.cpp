#include<iostream>
using namespace std;
class addition
{
    public:
          template<class x, class y, class z>
            void add(x a,y b, z  c)
            {
                 z d;
                d=a+b+c;
                cout<<"addition of three number: "<<d<<endl;
            }
             template<class x, class y>
            void add(x a,y b)
            {
                 x d;
                d=a+b;
                cout<<"addition of two number: "<<d<<endl;
            }

};
main()
{

      addition a1;
      a1.add(1,45.67,'a');
      a1.add(1,45.67);
}

