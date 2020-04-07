#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grade[10],sum=0;
   int i;

   for (i=0;i<10;i++)
   {
      printf("please input %d grade\n",i+1);
      scanf("%d",&grade[i]);
      sum+=grade[i];
   }
   printf("the avg is %.2f\n",sum/10.0);

   system("PAUSE");
   return 0;   
}
