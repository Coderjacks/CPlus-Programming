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
    int num1,num2;
    cout<<"enter two number: "<<endl;
    cin>>num1>>num2;

     cout<<"sum = "<<Add(num1,num2)<<endl;
      cout<<"sub = "<<Sub(num1,num2)<<endl;
}


