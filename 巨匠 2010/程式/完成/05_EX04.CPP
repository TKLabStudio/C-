#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=0;
   char ch;
   for (i=128;i<=255;i++)
   {
      ch=i;
      printf("%3d=%c\t",i,ch);
   }
   system("PAUSE");
   return 0;
}
