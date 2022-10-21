#include<iostream>
using namespace std;
main()
{
    char word1[20],word2[20];
    cout<<"enter first word: "<<endl;
    cin>>word1;
     for(int i=0;word1[i]!='\0';i++)
     {
         word2[i]=word1[i];
     }
     cout<<"word1= "<<word1<<endl;
     cout<<"word2= "<<word2<<endl;
}


