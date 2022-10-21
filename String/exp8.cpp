#include<iostream>
using namespace std;
main()
{
    char word[20],ch;
    cout<<"enter word: "<<endl;
    cin>>word;
    cout<<"enter a char to search: "<<endl;
    cin>>ch;
    for(int i=0; word[i]!='\0';i++)
    {
        if(word[i]==ch)
        {
            cout<<ch <<" is found."<<endl;
        }
    }
    cout<<"length of word= "<<l<<endl;
}

