#include<iostream>
using namespace std;
main()
{
    int array[5];
    array[0]=12;
     array[1]=67;
     array[2]=11;
     array[3]=22;
     array[4]=45;
     cout<<"array[0]= "<<array[0]<<endl;
    cout<<"array[1]= "<<array[1]<<endl;
    cout<<"array[2]= "<<array[2]<<endl;
    cout<<"array[3]= "<<array[3]<<endl;
    cout<<"array[4]= "<<array[4]<<endl;
    array[3]=100;
     cout<<"array[3]= "<<array[3]<<endl;
}
