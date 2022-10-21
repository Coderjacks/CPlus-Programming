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
     if(age>=11 && age <=18)
    {
        cout<<"teenage"<<endl;
    }
     if(age>=19 && age <=40)
    {
        cout<<"young"<<endl;
    }
     if(age>=41 && age <=75)
    {
        cout<<"adult"<<endl;
    }
     if(age>=76 && age <=100)
    {
        cout<<"oldage"<<endl;
    }

    cout<<"end of program."<<endl;
}

