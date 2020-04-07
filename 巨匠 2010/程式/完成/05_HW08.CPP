#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grade=0;
   int option=0;

   while (1)
   {
      printf("please input your grade -1:exit\n");
      scanf("%d",&grade);

      if (grade > 100 || grade <-1)
      {
	 printf("the input is error!\n");
	 continue;
      }
      if (grade == -1) break;
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
