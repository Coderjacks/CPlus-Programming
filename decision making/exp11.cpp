#include<iostream>
using namespace std;
int main()
{
    int num1,num2,result,x;
    cout<<"enter two numbers: "<<endl;
    cin>>num1>>num2;
    cout<<"press 1 for addition of two numbers."<<endl;
    cout<<"press 2 for Sub of two numbers."<<endl;
    cout<<"press 3 for Multi of two numbers."<<endl;
    cout<<"press 4 for Div of two numbers."<<endl;
    cout<<"press 5 for Mod of two numbers."<<endl;
    cout<<"Please enter your choice"<<endl;
    cin>>x;
    switch(x)
    {
        case 3: result=num1*num2;
                        cout<<"Multi of two numbers are : "<<result<<endl;
                        break;
        case 1:result=num1+num2;
                    cout<<"addition of two numbers are : "<<result<<endl;
                   break;
        case 2:  result=num1-num2;
                    cout<<"sub of two numbers are : "<<result<<endl;
                    break;

        case 4: result=num1/num2;
                        cout<<"div of two numbers are : "<<result<<endl;
                        break;
        case 5:  result=num1%num2;
                    cout<<"Mod of two numbers are : "<<result<<endl;
                    break;
        default:cout<<"wrong choice."<<endl;
    }
}

