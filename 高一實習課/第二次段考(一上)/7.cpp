#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    
    /*===============¸t½Ï¾ð==============*/ 
   int i,j;
   for(i=0;i<5;i++)
   {
      for (j=20-i;j>0;j--) 
         cout<<"  ";
      for (j=0;j<=i*2;j++)
         cout<<"¡¯";
      cout<<"\n";
   } 
   for(i=2;i<7;i++)
   {
      for (j=20-i;j>0;j--) 
         cout<<"  ";
      for (j=0;j<=i*2;j++)
         cout<<"¡¯";
      cout<<"\n";
   } 

   for(i=0;i<4;i++)
   {
      for (j=0;j<19;j++)
         cout<<"  ";
      for (j=0;j<3;j++)
         cout<<"¡¯";
      cout<<"\n";
      } 
      
    /*===============A==============*/ 
    for (i=1;i<=4;i++)
    {
    for (j=1;j<=i;j++)
    {
        cout<<"¡¹";
    }
    cout<<"\n";
    }
    cout<<"\n";
    /*===============B==============*/ 
    for (i=1;i<=4;i++)
    {
    for (j=1;j<=i;j++)
    {
        cout<<i;
    }
    cout<<"\n";
    }
    system("PAUSE");
    return 0;
    
}
