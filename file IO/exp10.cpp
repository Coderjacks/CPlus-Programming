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
}



