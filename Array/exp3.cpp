#include<iostream>
using namespace std;
void Display(int n)
{
    cout<<"Display Function. n= "<<n<<" add: "<<&n<<endl;
    n--;
    if(n!=0)
    {
         Display(n);
    }
    cout<<"after calling Display Function.  n="<<n<<" add: "<<&n<<endl;
}
main()
{
    int num;
    cout<<"enter a number: "<<endl;
    cin>>num;
    Display(num);
     cout<<"end of programs"<<endl;
}

