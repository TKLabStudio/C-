#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=9;
   int sum=0;

   while(i>1)
   {
      sum+=i*(i-1);
      i--;
   }
   printf("9*8+8*7+...+2*1=%d\n",sum);

   system("PAUSE");
   return 0;
}
