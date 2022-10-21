#include<iostream>
using namespace std;
class Student
{
       int rollno;
       char name[20];
       int age;
       public:
       void inputdetails()
       {
           cout<<"enter student rollno: "<<endl;
           cin>>rollno;
            cout<<"enter student name: "<<endl;
           cin>>name;
            cout<<"enter student age: "<<endl;
           cin>>age;
       }
       void showdetails()
       {
           cout<<"student rollno: "<<rollno<<endl;
            cout<<"student name: "<<name<<endl;
            cout<<"student age: "<<age<<endl;
       }
};
main()
{
    Student s[3];
      for(int i=0;i<3;i++)
      {
          cout<<"enter "<<i+1<<" student details: "<<endl;
          s[i].inputdetails();
      }
    for(int i=0;i<3;i++)
      {
          cout<<i+1<<". student details are: "<<endl;
          s[i].showdetails();
      }
}

