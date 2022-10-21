#include<iostream>
using namespace std;
main()
{
    int num,l=0,temp;
    cout<<"enter a number: "<<endl;
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        temp/=10;   //num=num/10;
        l++;
        cout<<"num: "<<temp<<endl;
    }
    cout<<num<<" is "<<l<<" digit number."<<endl;
}
