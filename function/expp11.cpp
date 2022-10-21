#include<iostream>
using namespace std;
int x=100;
void Display()
{
    int num=20;
    cout<<"num in Display= "<<num<<endl;
    num=30;
     cout<<"X in Display= "<<x<<endl;
}
main()
{
    int num=10;
    cout<<"num in main= "<<num<<endl;
    cout<<"X in main= "<<x<<endl;
    Display();


}

