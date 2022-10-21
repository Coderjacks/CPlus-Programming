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
        temp/=10;
        sum=sum+d*d*d;
    }
    if(num==sum)
    {
         cout<<num<< " is a armstrong number. sum= "<<sum<<endl;
    }
    else{
         cout<<num<< " is not a armstrong number. sum= "<<sum<<endl;
    }
}


