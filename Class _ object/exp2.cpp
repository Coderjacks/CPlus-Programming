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
    Student s1,s2,s3;
      s1.inputdetails();
      s2.inputdetails();
      s3.inputdetails();
       s3.showdetails();
      s2.showdetails();
      s1.showdetails();

}

