#include<iostream>
using namespace std;
class Student
{
       private:
         int rollno;
       char name[20];
       int age;
       static char sname[20];
       public:
       void inputdetails();
       void showdetails();
};
void Student::inputdetails()
  {
           cout<<"enter student rollno: "<<endl;
           cin>>rollno;
            cout<<"enter student name: "<<endl;
           cin>>name;
            cout<<"enter student age: "<<endl;
           cin>>age;
}
void Student::showdetails()
 {
            cout<<"school name: "<<sname<<endl;
           cout<<"student rollno: "<<rollno<<endl;
            cout<<"student name: "<<name<<endl;
            cout<<"student age: "<<age<<endl;

}
char Student :: sname[20]="Incapp";
main()
{
    Student s1,s2;
    s1.inputdetails();
    s1.showdetails();
     s2.inputdetails();
    s2.showdetails();
}


