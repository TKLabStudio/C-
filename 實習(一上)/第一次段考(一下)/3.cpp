#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()   
{
    int  a[10],temp,i,n;
    srand((unsigned)time(NULL));
    cout<<"¶Ã¼Æ¡G";
    for(i=0;i<10;i++)
    {
    a[i]=rand()%26+1;
      cout.width(3);
      cout<<a[i];
    }
      
       cout<<"\n";
     for(n=0;n<10;n++)
     {
        for(i=0;i<10;i++)
        {
           if(a[n]<a[i])
           {
             temp=a[n];
             a[n]=a[i];
             a[i]=temp;
            }
        }
     }
     
     cout<<"±Æ¦C¡G";
    for(i=0;i<10;i++)
    {
      cout.width(3);
      cout<<a[i];
    }
     cout<<"\n";
    system ("PAUSE");
    return 0;
}
