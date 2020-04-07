#include <stdio.h>
#include <stdlib.h>

int main()
{
   int chinese,math,english;
   float avg=0.0;
   printf("please input three grades\n");
   scanf("%d%d%d",&chinese,&math,&english);
   avg=(chinese+english+math)/3.0;
   printf("your average grade is %.3f\n",avg);

   system("PAUSE");
   return 0;

}
