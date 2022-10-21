#include<iostream>
using namespace std;
int Add(int n1,int n2)
{
     int sum;
    sum=n1+n2;
    return sum;

}
int Sub(int n1,int n2)
{
     int s;
    s=n1-n2;
  return s;
}
main()
{
    int num1,num2,x,y;
    cout<<"enter two number: "<<endl;
    cin>>num1>>num2;
    x=Add(num1,num2);
    y=Sub(num1,num2);
     cout<<"sum = "<<x<<endl;
      cout<<"sub = "<<y<<endl;
}

