#include<iostream>
#include<string.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
    char a,b,e;
    do
        {

            system("cls");
            cout<<"Give input two inputs"<<endl;
    cin>>a>>b;
    char ch[11];     //={'"','c','o','l','o','r',' ',a,b,'"'};
    ch[0]=char(34);
    ch[1]='c';
    ch[2]='o';
    ch[3]='l';
    ch[4]='o';
    ch[5]='r';
    ch[6]=' ';
    ch[7]=a;
    ch[8]=b;
    ch[9]=char(34);
    system(ch);
    cout<<"Do you want to continue (y/n): ";
    cin>>e;
        }while(e=='y'||e=='Y');
}
