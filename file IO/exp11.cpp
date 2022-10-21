#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream x;
    x.open("exp11.cpp",ios::in);
    char ch;
     ch=x.get();
    while(ch!=EOF)
    {
       cout.put(ch);
        ch=x.get();
    }

    x.close();
}

