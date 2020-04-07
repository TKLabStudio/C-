#include <stdio.h>
#include <stdlib.h>

int main()
{
   int mile=0;
   float km=0,yard=0;

   printf("please input miles and yards\n");
   scanf("%d %f",&mile,&yard);
   km = 1.609*(mile+yard/1760);
   printf("%dmile and %.fyard equal to %fkm\n",mile,yard,km);

   system("PAUSE");
   return 0;

}
