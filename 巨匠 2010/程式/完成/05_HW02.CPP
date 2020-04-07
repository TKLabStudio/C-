#include <stdio.h>								
#include <stdlib.h>

int main()
{
   int grade=0;
   
   printf("please input your grade\n");
   scanf("%d",&grade);

   if (grade>=90) 
     printf("your grade is A!\n");
   else if (grade>=80)
     printf("your grade is B!\n");
   else if (grade>=70)
     printf("your grade is C!\n");
   else if (grade>=60)
     printf("your grade is D!\n");
   else
     printf("your grade is E!\n");

   system("PAUSE");
   return 0;
}
