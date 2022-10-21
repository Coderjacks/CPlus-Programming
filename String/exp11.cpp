#include<iostream>
#include<string.h>
using namespace std;
main()
{
    char word1[20],word2[20];

    cout<<"enter first word: "<<endl;
    cin>>word1;
      int l= strlen(word1);
     for(int i=0,j=l-1;j>=0;i++,j--)
     {

         word2[i]=word1[j];
     }
     cout<<"word1= "<<word1<<endl;
     cout<<"word2= "<<word2<<endl;
}


