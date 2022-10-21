#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream x;
    x.open("Hello24.txt");
    if(x.good())
    {
        cout<<"file is found"<<endl;
    }
    else{
        cout<<"file is not found"<<endl;
    }


    x.close();
}

