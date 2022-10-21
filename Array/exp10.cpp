#include<iostream>
using namespace std;
main()
{
  int a[5],num,x=0;
  cout<<"enter five numbers: "<<endl;
  for(int i=0;i<5;i++)
  {
      cin>>a[i];
  }
  cout<<"five numbers are : "<<endl;
  for(int i=0;i<5;i++)
  {
      cout<<"a["<<i<<"]= "<<a[i]<<endl;
  }
   cout<<"enter a number to search: "<<endl;
   cin>>num;
    for(int i=0;i<5;i++)
  {
      if(num==a[i])
      {
          x++;
      }
  }

     if(x!=0)
    {
          cout<<num <<" is found. "<<x<<" times "<<endl;
      }
      else{
        cout<<num <<" is not found"<<endl;
      }

}
