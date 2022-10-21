#include<iostream>
using namespace std;
template<class x,class y>
void add(x a,y b)
{
    y c;
    c=a+b;
    cout<<"addition of two number: "<<c<<endl;
}
template<class x, class y, class z>
void add(x a,y b, z  c)
{
     z d;
    d=a+b+c;
    cout<<"addition of three number: "<<d<<endl;
}
main()
{
   add(23,45.78,'a');
   add('a',89.8);
}


