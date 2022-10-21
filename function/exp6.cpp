#include<iostream>
using namespace std;
int Add()
{
     int sum;
    int n1,n2;
    cout<<"enter two number: "<<endl;
    cin>>n1>>n2;
    sum=n1+n2;
    return sum;

}
int Sub()
{
     int s;
       int n1,n2;
    cout<<"enter two number: "<<endl;
    cin>>n1>>n2;
    s=n1-n2;
  return s;
}
main()
{
  int x,y;
  x=Add();

     cout<<"sum = "<<x<<endl;
     y=Sub();

      cout<<"sub = "<<y<<endl;
}

