#include<iostream>
using namespace std;
main()
{
    int a,b,c;
    cout<<"enter two numbers for division"<<endl;
    cin>>a>>b;
    try
    {
           if(b==0)
           {
               throw 56.89;
           }
           else
           {
               c=a/b;
                cout<<"result= "<<c<<endl;
           }
    }
    catch(int x)
    {
        cout<<"number can't divide by zero. x= "<<x<<endl;
    }
  cout<<"end of programs"<<endl;

}
