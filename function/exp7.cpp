//#include<iostream>
using namespace std;
void Add(int a,int b)
{
   cout<<"add of two integer: "<<a+b<<endl;
}
void Add(float a,float b)
{
    cout<<"add of two Float: "<<a+b<<endl;
}
void Add(double a,double b)
{
    cout<<"add of two double: "<<a+b<<endl;
}
void Add(int a,double b)
{
    int c= a+b;
    cout<<"add of one int & one double: "<<c<<endl;
}
main()
{
   Add(12.56f,45.78f);
     Add(12,45);
     Add(34.45,67.67);
     Add(3,67.67);
}

