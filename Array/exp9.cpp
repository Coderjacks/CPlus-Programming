#include<iostream>
using namespace std;
main()
{
    int num,max;
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
        cout<<"subject "<<i+1<<" = "<<marks[i]<<endl;;
    }
    max=marks[num-1];
    for(int i=0;i<num;i++)
    {
        if(max<marks[i])
        {
            max=marks[i];
        }
    }
    cout<<"max marks: "<<max<<endl;

}

