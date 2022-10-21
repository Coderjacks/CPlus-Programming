#include<iostream>
using namespace std;
class Student
{
       private:
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
class Demo
{
public:
       void Display()
       {
           Student s;
           cout<<"Display Function in Demo Class"<<endl;
                s.inputdetails();
                s.showdetails();
            cout<<"Display Function in Demo Class after student class "<<endl;
       }
}d;
main()
{
       cout<<"main: "<<endl;
    d.Display();
    Student s1;
    s1.rollno;

}

