#include<stdio.h>
#include<iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;
 void gotoxy(int x, int y)
{
            COORD c;
            c.X = x;
            c.Y = y;

            SetConsoleCursorPosition(
                GetStdHandle(STD_OUTPUT_HANDLE), c);
}
main()
{
         int a=10, b=20;
         gotoxy(20,4);
         cout<<"a= "<<a<<endl;
         gotoxy(10,4);
         cout<<"b= "<<b<<endl;
}
