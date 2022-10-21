#include<iostream>
using namespace std;
main()
{
    int a[6],i,j,temp;
    cout<<"enter six number:"<<endl;
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
     cout<<"six numbers are :"<<endl;
    for(i=0;i<6;i++)
    {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
        }
    }
      cout<<"six numbers are after sorting :"<<endl;
    for(i=0;i<6;i++)
    {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }

}
