#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream x;
    x.open("Hello.txt");
    int y=x.fail();
    cout<<"y= "<<y<<endl;
    if(y)
    {
        cout<<"file is not found"<<endl;
    }
    else{
        cout<<"file is found"<<endl;
    }
    x.close();
}


