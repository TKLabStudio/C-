#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()   
{
    int a[2][3]={10,20,30,40,50,60};
    int b[2][3]={99,88,77,66,55,44};
    int c[2][3];
    int i,j;

    
    for(i=0;i<2;i++)
    for(j=0;j<3;j++)
    {
    c[i][j]=a[i][j]+b[i][j];
    }
    
    for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
    cout<<c[i][j]<<" ";
    }
    cout<<"\n";
    }
    system ("PAUSE");
    return 0;
}
