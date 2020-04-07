#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
void printstar(int);
void multiply99();
int main()    
{
    printstar(72);
    multiply99();
    printstar(72);
    
    system ("PAUSE");
    return 0;
}

void multiply99()
{
    int i,j;
    for (i=1;i<=9;i++) 
    {
    for (j=1;j<=9;j++)
    {
        cout<<j<<"*"<<i<<"=";
        cout.width(2);
        cout<<i*j<<" ";
    }
    cout<<"\n";
    }
}
void printstar(int n)
{
     int i;
     for(i=1;i<=n;i++)
     {
     cout<<"*";
     }
     cout<<"\n";
}
