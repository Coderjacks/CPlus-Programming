#include<iostream>
using namespace std;
main()
{
    int s,a;
    cout<<"enter the size: "<<endl;
    cin>>s;
    a=s;
     for(int i=1;i<=s;i++)
     {
         for(int j=s;j>=i;j--)
         {
             cout<<" * ";
         }

         cout<<endl;
     }
}


