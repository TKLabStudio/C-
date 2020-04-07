#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   float t[7];

   for (i=0;i<7;i++)
   {
      printf("please input %d day fa defree\n",i+1);
      scanf("%f",&t[i]);
   }

   for (i=0;i<7;i++)
   {
      t[i]=(t[i]-32)*5.0/9.0;
      printf("the %d day degree is %.3f\n",i+1,t[i]);
   }

   system("PAUSE");
   return 0;   
}
