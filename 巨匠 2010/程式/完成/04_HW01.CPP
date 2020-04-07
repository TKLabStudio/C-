#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fa=0;
   float ce=0.0;

   printf("please input fa defree\n");
   scanf("%d",&fa);
   ce=(fa-32)*5.0/9.0;
   printf("the ce degree is %.3f\n",ce);
   
   system("PAUSE");
   return 0;
}
