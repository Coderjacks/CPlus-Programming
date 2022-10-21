#include<iostream>
using namespace std;
main()
{
    int num,total=0;
    cout<<"enter the size of array: "<<endl;
    cin>>num;
    int marks[num];
    cout<<"enter marks of "<<num<<" subject ."<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>marks[i];
    }
     cout<<"marks of "<<num<<" subject are ."<<endl;
    for(int i=0;i<num;i++)
    {
        total=total+marks[i];
        cout<<"subject "<<i+1<<" = "<<marks[i]<<endl;;
    }
   cout<<"total marks= "<<total<<endl;
}

