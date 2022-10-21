#include<iostream>
using namespace std;
main()
{
    int array[5];
   cout<<"enter 5 numbers: "<<endl;
  for(int i=0;i<5;i++)
  {
      cin>>array[i];
  }
    cout<<"5 numbers are : "<<endl;
  for(int i=0;i<5;i++)
  {
      cout<<"array["<<i<<"]= "<<array[i]<<endl;
  }
}

