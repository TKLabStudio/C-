#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=0,j=0;

   while (i<10)
   {
     while (j<10)
     {
    	if(i%2==0)
    	   printf("%c%c",219,0);
    	else
    	   printf("%c%c",0,219);
    	j++;
     }
     printf("\n");
     i++;
     j=0;
   }
   system("PAUSE");
   return 0;
}
