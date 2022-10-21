#include<iostream>
using namespace std;
template<class x, class y, class z>
void add(x a,y b, z  c)
{
     z d;
    d=a+b+c;
    cout<<"addition of three number: "<<d<<endl;
}
template<class x, class y, class z>
void add(x a,y b, z  c,int e)
{
     z d;
    d=a+b+c+e;
    cout<<"addition of three number: "<<d<<endl;
}
main()
{
   add(23,45.78,'a');
    add(23,45.78,'a',89);

}
