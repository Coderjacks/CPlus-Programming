#include<iostream>
#include<string.h>
using namespace std;
main()
{
    char word1[20],word2[20];
   cout<<"enter first word: "<<endl;
    cin>>word1;
   cout<<"enter second word: "<<endl;
    cin>>word2;
     cout<<"word1= "<<word1<<endl;
      cout<<"word2= "<<word2<<endl;
     strcat(word1, word2);
    cout<<"after concat: "<<endl;
    cout<<"word1= "<<word1<<endl;
      cout<<"word2= "<<word2<<endl;
}


