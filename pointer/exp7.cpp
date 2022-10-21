#include<iostream>
using namespace std;
main()
{
  int n;
  cout<<"enter a number: "<<endl;
  cin>>n;
  cout<<"n= "<<n<<endl;
  int *x=new int;
  cout<<"enter x value: "<<endl;
  cin>>*x;
  cout<<"value of x= "<<*x<<endl;
  delete x;
    cout<<"value of x= "<<*x<<endl;

}


