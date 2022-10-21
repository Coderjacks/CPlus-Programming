#include<iostream>
using namespace std;
main()
{
    int num,d,temp,sum=0,l=0;
    cout<<"enter a number: "<<endl;
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        l++;
    }
    cout<<"total number of digit: "<<l<<endl;
    temp=num;
    while(temp!=0)
    {
        d=temp%10;
        temp/=10;
        int r=1;
        for(int i=1;i<=l;i++)
        {
            r=r*d;

        }
        cout<<"r= "<<r<<endl;
        sum=sum+r;
    }
    if(num==sum)
    {
         cout<<num<< " is a armstrong number. sum= "<<sum<<endl;
    }
    else{
         cout<<num<< " is not a armstrong number. sum= "<<sum<<endl;
    }
}

