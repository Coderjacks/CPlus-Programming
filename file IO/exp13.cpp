#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream x;
    x.open("Hello.txt",ios::app);
    char ch;
    cout<<"enter a char : "<<endl;
    ch=cin.get();
    while(ch!='\n')
    {
        x.put(ch);
        ch=cin.get();
    }
    x.close();
    x.open("Hello.txt",ios::in);
     ch=x.get();
    while(ch!=EOF)
    {
       cout.put(ch);
        ch=x.get();
    }
    x.close();
}

