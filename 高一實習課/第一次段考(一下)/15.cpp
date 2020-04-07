#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()   
{
    int a[2][3],i,j;
    for(i=0;i<2;i++)
    for(j=0;j<3;j++)
    {
    cout<<"½Ð¿é¤Ja["<<i+1<<"]["<<j+1<<"]="; 
    cin>>a[i][j];
    }
    
    for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
    cout<<a[i][j]<<" ";
    }
    cout<<"\n";
    }
    system ("PAUSE");
    return 0;
}
