#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    union data
    {
     int n;
     char a; 
    } ascii;
    
    cout<<"¿é¤J¼Æ¦r¡G"; 
    cin>>ascii.n;
    ascii.a=ascii.n;
    cout<<"ASCII¡G"; 
    cout<<ascii.a<<"\n";
    system("PAUSE");
    return 0;
}
