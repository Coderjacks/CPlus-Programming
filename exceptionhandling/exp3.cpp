#include<iostream>
using namespace std;
void show(int a,int b)
{
    int c;
         if(b==0)
           {
               throw b;
           }
           else
           {
               c=a/b;
                cout<<"result= "<<c<<endl;
           }
}
main()
{
    int a,b,c;
    cout<<"enter two numbers for division"<<endl;
    cin>>a>>b;
    try
    {
          show(a,b);
    }
    catch(int x)
    {
        cout<<"number can't divide by zero. x= "<<x<<endl;
    }
  cout<<"end of programs"<<endl;

}

