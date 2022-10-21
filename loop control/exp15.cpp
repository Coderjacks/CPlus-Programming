#include<iostream>
using namespace std;
main()
{
    int l=0;
   for(int i=1000;i<=2000;i++)
   {
                int num,d,temp,sum=0;
            num=i;
            temp=num;
            while(temp!=0)
            {
                d=temp%10;
                temp/=10;   //num=num/10;
               sum=sum*10+d;
            }
            if(num==sum)
            {
                cout<<num <<" is a palaindrom number."<<endl;
                l++;
            }
           }
           cout<<"total number: "<<l<<endl;

}


