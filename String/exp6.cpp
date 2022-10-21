#include<iostream>
using namespace std;
main()
{
    char word[20];
    int  l=0;
    cout<<"enter word: "<<endl;
    cin>>word;
    for(int i=0; word[i]!='\0';i++)
    {
        l++;
    }
    cout<<"length of word= "<<l<<endl;
}


