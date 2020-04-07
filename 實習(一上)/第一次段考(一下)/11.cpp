#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()   
{
    int b[4][6];
    int i,j;
    srand((unsigned)time(NULL));
    for(i=0;i<4;i++)
    for(j=0;j<6;j++)
    {
    b[i][j]=rand()%100+1;
    }
    
    for(i=0;i<4;i++)
    {
    for(j=0;j<6;j++)
    {
    cout<<b[i][j]<<" ";
    }
    cout<<"\n";
    }
    system ("PAUSE");
    return 0;
}
