#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 using namespace std;
 
 int main ()
 {
     int a[10],b[10],n,i;  
     srand((unsigned)time(NULL));
     for(i=0;i<10;i++)
        { 
         b[i]=1;
        } 
        
        for(i=0;i<10;i++)
        { 
         a[i]=rand()%10+1;
         }
         
     cout<<"¶Ã¼Æ¡G"; 
     for(i=0;i<10;i++)
     {
     cout.width(4);
      cout<<a[i]; 
     }   
     cout<<"\n"; 
      
      for(i=0;i<10;i++)
        {
          for(n=0;n<10;n++)
          {
            if(a[i]<a[n])
            {
            b[i]++;
            } 
          }
        }
      cout<<"¦W¦¸¡G"; 
      for(i=0;i<10;i++)
     {
     cout.width(4);
      cout<<b[i]; 
     }    
     cout<<"\n"; 
    system ("PAUSE");
    return 0;
}
     
