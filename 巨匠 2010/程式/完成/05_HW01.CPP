#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,ans=0;
   printf("please input a num\n");
   scanf("%d",&num);

   if (num < 0)
      ans=-num;
   else
      ans=num;
   printf("the absolute is %d\n",ans);

   system("PAUSE");
   return 0;
}
