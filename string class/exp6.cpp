#include<iostream>
#include<string>
using namespace std;
main()
{
   string word1, word2;
   cout<<"enter first word: "<<endl;
   cin>>word1;
    cout<<"enter second word: "<<endl;
   cin>>word2;
    cout<<"word1: "<<word1<<endl;
    cout<<"word2: "<<word2<<endl;
  word2.append(word1);
    cout<<"word1: "<<word1<<endl;
    cout<<"word2: "<<word2<<endl;
}


