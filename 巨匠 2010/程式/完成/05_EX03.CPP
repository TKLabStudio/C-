#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sum=0;

   printf("time sum\n");
   printf("--------\n");
   for (int i=1;i<11;i++)
   {
      sum+=i;
      printf("%3d%5d\n",i,sum);
   }   
   system("PAUSE");
   return 0;
}
