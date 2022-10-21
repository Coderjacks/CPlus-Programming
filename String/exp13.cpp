#include<iostream>
#include<string.h>
using namespace std;
main()
{
    char word1[20],word2[20];

    cout<<"enter first word: "<<endl;
    cin>>word1;
       cout<<"word1= "<<word1<<endl;
      strcpy(word2,strrev(word1));

     cout<<"word2= "<<word2<<endl;
}


