#include<iostream>
using namespace std;
class  student
{
    int rollno;
    char name[20];
    int marks[5];
    int total=0;
    float per;
    public:
        student()
        {
            cout<<"enter student rollno: "<<endl;
            cin>>rollno;
            cout<<"enter student name: "<<endl;
            cin>>name;
            cout<<"enter student marks: "<<endl;
            for(int i=0;i<5;i++)
            {
                cin>>marks[i];
            }
        }
        void UpdateDetails()
        {
            int x;
            cout<<"press 1 to change name:"<<endl;
             cout<<"press 2 to change marks:"<<endl;
               cout<<"enter your choice: "<<endl;
               cin>>x;
               switch(x)
               {
               case 1:cout<<"enter your correct name: "<<endl;
                           cin>>name;
                           cout<<"your name update is Done"<<endl;
                           break;
               case 2:
                            cout<<"enter your marks: "<<endl;
                           for(int i=0;i<5;i++)
                            {
                                cin>>marks[i];
                            }
                           cout<<"your marks update is Done"<<endl;
                           break;
               default:cout<<"wrong input."<<endl;
               }
        }
        void showDetails()
        {
            cout<<"Rollno: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"marks: "<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<i+1<<". Subject: "<<marks[i]<<endl;
                total=total+marks[i];
            }
            cout<<"Total Marks: "<<total<<endl;
            per=total/5.0;
            cout<<"Per: "<<per<<endl;
        }
};
main()
{
    student a1,a2,a3;
    a1.showDetails();
    a2.showDetails();
    a3.showDetails();
    a1.UpdateDetails();
    a2.UpdateDetails();
    a3.UpdateDetails();
     a1.showDetails();
    a2.showDetails();
    a3.showDetails();
}
