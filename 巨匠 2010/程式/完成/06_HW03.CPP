#include<stdio.h>
#include <stdlib.h>

int main()
{
   char str[11];
   int i,size=0;

   printf("please input a string\n");
   scanf("%s",str);

   for (i=0;i<11;i++)
   {
     if (str[i]=='\0')
	break;
     else
	size++;
   }

   printf("the string is %s\n",str);
   printf("the inverse string is ");

   for (i=size-1;i>=0;i--)
      printf("%c",str[i]);
   printf("\n");
   
   system("PAUSE");
   return 0;   
}
