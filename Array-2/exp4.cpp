#include<iostream>
using namespace std;
main()
{
    int n,m;
    cout<<"enter the no of student: "<<endl;
    cin>>n;
    cout<<"enter the no of subjects: "<<endl;
    cin>>m;
    int marks[n][m],total[n],p;
    float per[n],topper;
    for(int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" student marks: "<<endl;
        for(int j=0;j<m;j++)
        {
            cout<<"Subject "<<j+1<<" =";
            cin>>marks[i][j];
        }
    }
    cout<<"\n...............student details are..........."<<endl;
    for(int i=0;i<n;i++)
    {
        total[i]=0;
        cout<<i+1<<" student marks: "<<endl;
        for(int j=0;j<m;j++)
        {
            cout<<"Subject "<<j+1<<" ="<<marks[i][j]<<endl;
            total[i]+=marks[i][j];
        }
        cout<<"Total Marks: "<<total[i]<<endl;
        per[i]=(float)total[i]/m;
          cout<<"Per: "<<per[i]<<endl;
          cout<<"--------------------------------------"<<endl;
    }
    topper=per[0];
    p=0;
     for(int i=1;i<n;i++)
    {
        if(topper< per[i])
        {
            topper=per[i];
            p=i;
        }
    }
   cout<<p+1<<" student is the topper of the class.\n total marks: "
   <<total[p]<<" Per : "<<per[p]<<endl;
}
