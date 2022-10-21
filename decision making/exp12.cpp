#include<iostream>
using namespace std;
int main()
{
    int num1,num2,result;
    char x;
    cout<<"enter two numbers: "<<endl;
    cin>>num1>>num2;
    cout<<"press a for addition of two numbers."<<endl;
    cout<<"press b for Sub of two numbers."<<endl;
    cout<<"press c for Multi of two numbers."<<endl;
    cout<<"press d for Div of two numbers."<<endl;
    cout<<"press e for Mod of two numbers."<<endl;
    cout<<"Please enter your choice"<<endl;
    cin>>x;
    switch(x)
    {
        case 'c': result=num1*num2;
                        cout<<"Multi of two numbers are : "<<result<<endl;
                        break;
        case 'a':result=num1+num2;
                    cout<<"addition of two numbers are : "<<result<<endl;
                   break;
        case 'b':  result=num1-num2;
                    cout<<"sub of two numbers are : "<<result<<endl;
                    break;

        case 'd': result=num1/num2;
                        cout<<"div of two numbers are : "<<result<<endl;
                        break;
        case 'e':  result=num1%num2;
                    cout<<"Mod of two numbers are : "<<result<<endl;
                    break;
        default:cout<<"wrong choice."<<endl;
    }
}

