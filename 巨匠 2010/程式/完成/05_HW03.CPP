#include <stdio.h>								
#include <stdlib.h>

int main()
{
   int grade=0;
   int option=0;

   printf("please input your grade\n");
   scanf("%d",&grade);

   if (grade > 100 || grade <0)
      printf("the input is error!\n");
   else
   {
      option=grade/10;
      switch (option)
      {
    	 case 10:
    	 case 9:
    	     printf("your grade is A!\n");
    	     break;
    	 case 8:
    	     printf("your grade is B!\n");
    	     break;
    	 case 7:
    	     printf("your grade is C!\n");
    	     break;
    	 case 6:
    	     printf("your grade is D!\n");
    	     break;
    	 default:
    	     printf("your grade is E!\n");
      }
   }
   system("PAUSE");
   return 0;   
}
