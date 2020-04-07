#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2;

   do
   {
      printf("please input two numbers\n");
      scanf("%d%d",&num1,&num2);
      if (num1 == num2)
         printf("%d is equal to %d\n",num1,num2);
      else if (num1 > num2)
           printf("%d > %d\n",num1,num2);
      else
          printf("%d < %d\n",num1,num2);
      printf("do you want again? -1 exit\n");
      scanf("%d",&num1);
   } while (num1!=-1);

   system("PAUSE");
   return 0;
}
