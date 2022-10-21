#include<iostream>
using namespace std;

template<class x, class y, class z>
void add(x a,y b, int e)
{
     int d;
    d=a+b+e;
    cout<<"addition of three number: "<<d<<endl;
}
main()
{

    add(23,45.78,89);

}

