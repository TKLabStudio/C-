#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void To_upper(int);

int main()
{
   char ch;
   printf("input a lower char until press Enter exit\n");
//   while ((ch=getche())!='\r')
//     To_upper(ch);
     
   do
   {
      ch=getche();
      To_upper(ch);
   } while(ch!='\r');

   system("PAUSE");
   return 0;
}

void To_upper(int up)
{
   if ((up>=97) && (up<=122))
   {
      up-=32;
      printf("%c\n",up);
   }
}
