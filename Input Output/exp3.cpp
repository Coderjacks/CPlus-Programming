#include<iostream>
#include<string.h>
using namespace std;
main()
{
     char ch[20];
     cout<<"enter : "<<endl;
     cin.getline(ch,20);    //cin>>ch;
     cout.write(ch,20);             //cout<<ch;
    cout<<endl<<ch;
    int l=strlen(ch);
    cout<<endl;
     cout.write(ch,l);
     cout.write(ch,strlen(ch));


}

