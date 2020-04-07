#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1=0,num2=0,tmp=0;
   int i,j;

   printf("please input two number\n");
   scanf("%d%d",&num1,&num2);
   
   i=num1,j=num2;
   while (num2!=0)
   {
      tmp=num1%num2;
      num1=num2;
      num2=tmp;
   }
   printf("the gcd of %d and %d is %d\n",i,j,num1);

   system("PAUSE");
   return 0;
}
