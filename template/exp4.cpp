#include<iostream>
using namespace std;
template<class x,class y>
void add(x a,y b)
{
    y c;
    c=a+b;
    cout<<"addition of two number: "<<c<<endl;
}

main()
{
   add(23,45.78);
   add(23.45,45);
   add(256.67f,89.89);
   add('a',67);
}

