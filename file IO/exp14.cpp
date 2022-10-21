#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
    fstream file;
    file.open("student.txt",ios::app);
    int rollno,age;
    string name;
    cout<<"enter rollno, name and age: "<<endl;
    cin>>rollno>>name>>age;
    file<<rollno<<" "<<name<<" "<<age<<endl;
    file.close();
    file.open("student.txt",ios::in);
    cout<<"data from file"<<endl;
    file>>rollno>>name>>age;
    cout<<rollno<<" "<<name<<" "<<age<<endl;
}


