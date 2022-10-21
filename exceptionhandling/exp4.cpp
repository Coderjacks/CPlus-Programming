#include<iostream>
using namespace std;   // try catch throw

void display(int n)
{
     if(n==1)
             {
                 throw 10;
             }
             else if(n==2)
             {
                 throw 'G';
             }
             else if(n==3)
             {
                 throw 12.78f;
             }
             else if(n==4)
             {
                 throw 1111.78;
             }
             else{
                 cout<<"no exception in this program."<<endl;
             }
}
main()
{
    int n;
   cout<<"press 1 to int exception."<<endl;
    cout<<"press 2 to char exception."<<endl;
     cout<<"press 3 to float exception."<<endl;
      cout<<"press 4 to double exception."<<endl;
   cout<<"enter a number: "<<endl;
   cin>>n;
   try{
            display(n);
   }

   catch(int a)
   {
       cout<<"this is a integer exception    a= "<<a<<endl;
   }
    catch(float a)
   {
       cout<<"this is a float exception    a= "<<a<<endl;
   }
    catch(double a)
   {
       cout<<"this is a double exception    a= "<<a<<endl;
   }
 catch(char ch)
   {
       cout<<"char type exception  ch = "<<ch<<endl;
   }
    cout<<"end of program"<<endl;
}

