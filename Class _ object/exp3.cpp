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
           cout<<"student rollno: "<<&rollno<<endl;
            cout<<"student name: "<<&name<<endl;
            cout<<"student age: "<<&age<<endl;
       }
};
main()
{
    Student s1,s2,s3;
       s1.showdetails();
      s2.showdetails();
      s3.showdetails();
      cout<<"address of s1: "<<&s1<<endl;
      cout<<"address of s2: "<<&s2<<endl;
      cout<<"address of s3: "<<&s3<<endl;

}

