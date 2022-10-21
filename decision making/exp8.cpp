#include<iostream>
using namespace std;
main()
{
   int a,b,c,d;
   cout<<"enter four numbers: "<<endl;
   cin>>a>>b>>c>>d;
   if(a>b)
   {
       if(a>c)
       {
           if(a>d)
           {
               cout<<a <<" is greatest"<<endl;
           }
           else{
              cout<<d <<" is greatest"<<endl;
           }
       }
       else{
                 if(c>d)
                 {
                     cout<<c <<" is greatest"<<endl;
                 }
                 else
                 {
                     cout<<d <<" is greatest"<<endl;
                 }
       }
   }
   else{
             if(b>c)
       {
           if(b>d)
           {
               cout<<b <<" is greatest"<<endl;
           }
           else{
              cout<<d <<" is greatest"<<endl;
           }
       }
       else{
                 if(c>d)
                 {
                     cout<<c <<" is greatest"<<endl;
                 }
                 else
                 {
                     cout<<d <<" is greatest"<<endl;
                 }
       }
   }
    cout<<"end of program."<<endl;
}


