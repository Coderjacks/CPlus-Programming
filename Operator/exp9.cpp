#include<iostream>
using namespace std;
int main()
{
    int a=13,b=34,c;
    c=a<=b?a:b;
    cout<<"c=  "<<c<<endl;
      c=a<=b?a+b+10:b-a-5;
    cout<<"c=  "<<c<<endl;
    return 0;
}
