#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()   
{
    char a[5];
    int i;
    for(i=0;i<5;i++)
    {
    cout<<"½Ð¿é¤Ja["<<i<<"]="; 
    cin>>a[i];
    }
    
    for(i=0;i<5;i++)
    {
    cout<<"a["<<i<<"]="<<a[i]<<"\n";
    }
    system ("PAUSE");
    return 0;
}
