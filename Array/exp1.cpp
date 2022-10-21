#include<iostream>
using namespace std;
void show()
{
    cout<<"show Function."<<endl;
}
void Display()
{
    cout<<"Display Function."<<endl;
    show();
    cout<<"after show function calling Display Function."<<endl;
}

main()
{
    cout<<"hello"<<endl;
    Display();
     cout<<"end of programs"<<endl;
}
