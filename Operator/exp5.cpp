#include<iostream>
using namespace std;
int main()
{
   int a=12,b=23,c=34,d=45,e;
   e= (a++ >= --b) || (c-- >= ++d);
   cout<<"a= "<<a<<endl;
   cout<<"b= "<<b<<endl;
   cout<<"c= "<<c<<endl;
   cout<<"d= "<<d<<endl;
   cout<<"e= "<<e<<endl;
    return 0;
}

