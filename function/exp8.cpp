#include<iostream>
using namespace std;
void Display()
{
     int num=20;
    cout<<"num in Display= "<<num<<endl;
    num=30;
}
main()
{
    int num=10;
    cout<<"num in main= "<<num<<endl;
    Display();
    cout<<"num in main= "<<num<<endl;
}
