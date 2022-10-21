#include<iostream>
using namespace std;
main()
{
    int num,d,temp,sum=0;
    cout<<"enter a number: "<<endl;
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        d=temp%10;
        cout<<"d= "<<d<<endl;
        temp/=10;   //num=num/10;
        cout<<"temp: "<<temp<<endl;
        sum=sum*10+d;
        cout<<"sum: "<<sum<<endl;
        cout<<"-------------------------------"<<endl;
    }
   cout<<"reverse number ="<<sum<<endl;
}

