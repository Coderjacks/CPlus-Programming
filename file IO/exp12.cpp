#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream x;
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
    ifstream x1;
    x1.open("Hello.txt",ios::in);
     ch=x1.get();
    while(ch!=EOF)
    {
       cout.put(ch);
        ch=x1.get();
    }

    x1.close();
}

