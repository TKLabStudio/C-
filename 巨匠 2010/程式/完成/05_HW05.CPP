#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;

   for(i=0;i<5;i++)
   {
      for (j=5-i;j>0;j--)
         printf(" ");
      for (j=0;j<=i*2;j++)
         printf("*");
      printf("\n");
   }
/*   
   for(i=4;i>0;i--)
   {
      for (j=5-i;j>=0;j--)
         printf(" ");
      for (j=i*2-1;j>0;j--)
         printf("*");
      printf("\n");
   }
*/   
   system("PAUSE");
   return 0;
}
