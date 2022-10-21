#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream x;
    x.open("Hello.txt",ios::in);
    char ch;
    x.get(ch);// read from file
      cout.put(ch);  // write on screen
    x.close();
}


