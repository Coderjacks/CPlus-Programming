#include<iostream>
using namespace std;
int main()
{
   int a=12,b=23,e;
   e= !(a++ <= --b) || (a++ >= --b);
   cout<<"a= "<<a<<endl;
   cout<<"b= "<<b<<endl;

   cout<<"e= "<<e<<endl;
    return 0;
}
