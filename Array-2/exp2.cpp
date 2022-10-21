#include<iostream>
using namespace std;
main()
{
    int a[3][2],b[3][2];
    cout<<"enter 6 number:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"6 numbers are :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"b matrix numbers are :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            b[i][j]=a[i][j];   //sum=sum+a[i][j];    c[i][j]=a[i][j]+b[i][j];
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }

}

