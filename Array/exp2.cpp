#include<iostream>
using namespace std;

void Display(int n)
{
    cout<<"Display Function.  "<<&n<<endl;

    cout<<"after  calling Display Function."<<endl;
}

main()
{
    cout<<"hello"<<endl;
    Display(5);
     cout<<"end of programs"<<endl;
      Display(10);
}

