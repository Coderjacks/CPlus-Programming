#include<iostream>
using namespace std;
main()
{
    for(int i=1000;i<=9999;i++)
    {
                int num,d,temp,sum=0;
             num=i;
            temp=num;
            while(temp!=0)
            {
                d=temp%10;
                temp/=10;
                sum=sum+d*d*d*d;
            }
            if(num==sum)
            {
                 cout<<num<< " is a armstrong number. sum= "<<sum<<endl;
            }

    }
}


