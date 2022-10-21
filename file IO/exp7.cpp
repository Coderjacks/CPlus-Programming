#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream x;
    x.open("Hello.txt");
    char ch;
    cout<<"enter a char : "<<endl;
    cin>>ch;
    //cout.put(ch);// out data on monitor screen

      x.put(ch);
    x.close();
}

