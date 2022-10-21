#include<iostream>
using namespace std;
main()
{
  int *x=new int[5];
  cout<<"enter x value: "<<endl;
  for(int i=0;i<5;i++)
  {
      cin>>x[i];
  }
   for(int i=0;i<5;i++)
  {
      cout<<x[i]<<endl;
  }
  delete x;
}
