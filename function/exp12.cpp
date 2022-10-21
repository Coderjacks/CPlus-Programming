#include<iostream>
using namespace std;
int x=100;
void Display()
{
    int num=20;
     cout<<"X in Display= "<<x<<endl;
     x=200;
}
main()
{
    int num=10;
    cout<<"X in main= "<<x<<endl;
    Display();
    cout<<"X in main= "<<x<<endl;
    x=300;
    Display();
    cout<<"X in main= "<<x<<endl;
}
