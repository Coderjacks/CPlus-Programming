#include<iostream>
using namespace std;
int Display(int num)
{

    cout<<"num in Display= "<<num<<endl;
    num=30;
    return num;
}
main()
{
    int num=10;
    cout<<"num in main= "<<num<<endl;
    num= Display(num);
    cout<<"num in main= "<<num<<endl;
}

