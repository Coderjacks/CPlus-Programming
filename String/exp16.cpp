#include<iostream>
#include<string.h>
using namespace std;
main()
{
    char name[3][20];
    cout<<"enter three name: "<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>name[i];
    }
     cout<<"three name are : "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<name[i]<<endl;
    }

}



