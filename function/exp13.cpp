#include<iostream>
using namespace std;
int num=100;
void Display()
{
      int num=20;
     cout<<"num in Display= "<<num<<endl;
      cout<<"address num in Display= "<<&num<<endl;
     cout<<"Global  num in Display= "<<::num<<endl;
     cout<<"address Global  num in Display= "<<&(::num)<<endl;

}
main()
{
    int num=10;
    cout<<"num in main= "<<num<<endl;
     cout<<"address num in main= "<<&num<<endl;
    cout<<"Global  num in main= "<<::num<<endl;
    cout<<"address Global  num in main= "<<&(::num)<<endl;
    Display();
}

