#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()   
{
    int a[10],i;
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++)
    {
    a[i]=rand()%100+1;
    cout<<a[i]<<" ";
    }
    system ("PAUSE");
    return 0;
}
