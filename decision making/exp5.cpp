#include<iostream>
using namespace std;
main()
{
    int age;
    cout<<"enter age: "<<endl;
    cin>>age;
    if(age>=1 && age <=10)
    {
        cout<<"kid"<<endl;
    }
    else if(age>=11 && age <=18)
    {
        cout<<"teenage"<<endl;
    }
    else if(age>=19 && age <=40)
    {
        cout<<"young"<<endl;
    }
    else if(age>=41 && age <=75)
    {
        cout<<"adult"<<endl;
    }
    else if(age>=76 && age <=100)
    {
        cout<<"oldage"<<endl;
    }
    else{
        cout<<"invalid age. "<<endl;
    }
    cout<<"end of program."<<endl;
}


