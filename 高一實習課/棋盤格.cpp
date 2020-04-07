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
            for(j=0;j<10;j++)  
            {      
            if(i%2==0)
            cout<<"¢p"<<"  ";
            else
            cout<<"  "<<"¢p";
            } 
   cout<<"\n";
   } 
   system("PAUSE");
   return 0;
}
