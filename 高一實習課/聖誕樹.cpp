#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()    
{
   int i,j;
   for(i=0;i<10;i++)
   {
      for (j=40-i;j>0;j--) 
         cout<<" ";
      for (j=0;j<=i*2;j++)
         cout<<"¡¯";
      cout<<"\n";
   } 
   for(i=5;i<15;i++)
   {
      for (j=40-i;j>0;j--)
         cout<<" ";
      for (j=0;j<=i*2;j++)
         cout<<"¡¯";
      cout<<"\n";
   } 
      for(i=10;i<25;i++)
   {
      for (j=40-i;j>0;j--)
         cout<<" ";
      for (j=0;j<=i*2;j++)
         cout<<"¡¯";
      cout<<"\n";
   } 
   for(i=0;i<7;i++)
   {
      for (j=0;j<38;j++)
         cout<<" ";
      for (j=0;j<6;j++)
         cout<<"¡¯";
      cout<<"\n";
      } 
   system("PAUSE");
   return 0;
}
