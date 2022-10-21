#include<iostream>
using namespace std;
template<class h>
void add(h a,h b)
{
    h c;
    c=a+b;
    cout<<"addition of two number: "<<c<<endl;
}
template<class h>
void add(h a,h b, h  c)
{
     h d;
    d=a+b+c;
    cout<<"addition of three number: "<<d<<endl;
}
main()
{
   add(23,45);
   add('a','r','y');
}

