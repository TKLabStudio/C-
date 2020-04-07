#include <stdio.h>
#include <stdlib.h>

int Area(int,int);
void Compare(int,int);

int main()
{
   int l1,w1,l2,w2,sum1=0,sum2=0;
   printf("please input first length and weight\n");
   scanf("%d%d",&l1,&w1);
   printf("please input second length and weight\n");
   scanf("%d%d",&l2,&w2);
   sum1=Area(l1,w1);
   sum2=Area(l2,w2);
   Compare(sum1,sum2);

   system("PAUSE");
   return 0;   
}

int Area(int length, int width)
{
   return length*width;
}

void Compare(int a,int b)
{
   if (a>b)
      printf("the first %d area > the second %d area\n",a,b);
   else
      printf("the second %d area > the first %d area\n",b,a);
}
