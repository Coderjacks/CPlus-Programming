#include<iostream>
using namespace std;
int main()
{
   int a=10,b;
         // b=++a;
		// b=++a - ++a;
		  // b=++a - ++a - ++a ;
		 //  b=++a - ++a - a;
         // b=++a - a + a++;
		//  b=a-- + a++ - a + a++;
		   b=--a + --a  ;
   cout<<"a= "<<a<<endl;
   cout<<"b= "<<b<<endl;
    return 0;
}

