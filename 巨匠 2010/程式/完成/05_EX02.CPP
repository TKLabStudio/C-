#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num=0,rem=0;

   printf("please input a num\n");
   scanf("%d",&num);

   rem=num%2;

   if (rem==0)
      printf("the num %d is even\n",num);
   else
      printf("the num %d is add\n",num);

   system("PAUSE");
   return 0;
}
