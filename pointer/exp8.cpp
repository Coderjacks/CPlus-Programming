#include<iostream>
using namespace std;
main()
{

  int *x=new int(10);
  cout<<"enter x value: "<<endl;
  cin>>*x;
  cout<<"value of address x= "<<*x<<endl;
    cout<<"address of x= "<<&x<<endl;
      cout<<"value of x= "<<x<<endl;
  delete x;
    cout<<"value of address x= "<<*x<<endl;
      cout<<"value of x= "<<x<<endl;

}
