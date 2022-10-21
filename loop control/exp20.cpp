#include<iostream>
using namespace std;
main()
{
    for(int i=1;i<=10000;i++)
    {
                int num,d,temp,sum=0,l=0;
             num=i;
            temp=num;
            while(temp!=0)
            {
                temp=temp/10;
                l++;
            }
            temp=num;
            while(temp!=0)
            {
                d=temp%10;
                temp/=10;
                int r=1;
                for(int i=1;i<=l;i++)
                {
                    r=r*d;

                }
                sum=sum+r;
            }
            if(num==sum)
            {
                 cout<<num<< " is a armstrong number. sum= "<<sum<<endl;
            }

    }
}

