#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sum=0,i=1;

   printf("time sum\n");
   printf("--------\n");

   while (i<=10)
   {
      sum+=i;
      printf("%2d%6d\n",i,sum);
      i++;
   }
   system("PAUSE");
   return 0;
}
