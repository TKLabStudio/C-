#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1,num2;
   printf("please input two numbers\n");
   scanf("%d%d",&num1,&num2);

   if (num1 == num2)
   {
      printf("%d is equal to %d\n",num1,num2);
      
      if (num1 > num2)
      printf("%d > %d\n",num1,num2);   

   if (num2 > num1) 
   printf("%d < %d\n",num1,num2);
        }
        
   system("PAUSE");
   return 0;
}
