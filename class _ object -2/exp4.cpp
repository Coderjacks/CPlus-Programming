#include<iostream>
using namespace std;

main()
{
   int a=12,&b=a;
   cout<<"a= "<<a<<endl;
     cout<<"b= "<<b<<endl;
       cout<<"address of a= "<<&a<<endl;
         cout<<"address of b= "<<&b<<endl;
         b=100;

   cout<<"a= "<<a<<endl;
     cout<<"b= "<<b<<endl;
       cout<<"address of a= "<<&a<<endl;
         cout<<"address of b= "<<&b<<endl;



}

