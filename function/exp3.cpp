#include<iostream>
using namespace std;
void Add(int n1,int n2)
{
     int sum;
    sum=n1+n2;
    cout<<"sum = "<<sum<<endl;
}
void Sub(int n1,int n2)
{
     int s;

    s=n1-n2;
    cout<<"sub = "<<s<<endl;
}
main()
{
    int num1,num2;
    cout<<"enter two number: "<<endl;
    cin>>num1>>num2;
    Add(num1,num2);
    Sub(num1,num2);
}

