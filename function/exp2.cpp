#include<iostream>
using namespace std;
void Add()
{
     int num1,num2,sum;
    cout<<"enter two number: "<<endl;
    cin>>num1>>num2;
    sum=num1+num2;
    cout<<"sum = "<<sum<<endl;
}
void Sub()
{
     int num1,num2,s;
    cout<<"enter two number: "<<endl;
    cin>>num1>>num2;
    s=num1-num2;
    cout<<"sub = "<<s<<endl;
}
main()
{
    Add();
    cout<<"..................................................."<<endl;
   Sub();
    cout<<"..................................................."<<endl;
   Add();
}

