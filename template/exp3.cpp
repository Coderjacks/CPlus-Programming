#include<iostream>
using namespace std;
template<class h>
void add(h a,h b)
{
    h c;
    c=a+b;
    cout<<"addition of two number: "<<c<<endl;
}
void add(float a,float b)
{
    int d;
    d=a+b;
    cout<<"addition of two float number: "<<d<<endl;
}
main()
{
   add(23,45);
   add(23.78,45.87);
   add(256.67f,78.677f);
   add('a','b');
}
