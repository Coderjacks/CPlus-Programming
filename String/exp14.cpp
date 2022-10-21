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
    int l=strlen(word1);
    for(int i =0,j=l;word2[i]!='\0';i++,j++)
    {
        word1[j]=word2[i];
    }
    cout<<"after concat: "<<endl;
    cout<<"word1= "<<word1<<endl;
      cout<<"word2= "<<word2<<endl;
}



