#include<iostream>
using namespace std;
main()
{
   int a,b,c,d;
   cout<<"enter four numbers: "<<endl;
   cin>>a>>b>>c>>d;
   if(a>b && a>c && a>d)
   {
       cout<<a <<" is greatest"<<endl;
   }
   else  if(b>a && b>c && b>d)
   {
       cout<<b <<" is greatest"<<endl;
   }
   else  if(c>a && c>b && c>d)
   {
       cout<<c <<" is greatest"<<endl;
   }
   else
    {
       cout<<d <<" is greatest"<<endl;
   }
    cout<<"end of program."<<endl;
}

