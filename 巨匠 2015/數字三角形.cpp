#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j,a,k;
scanf ("%d",&k);
for(i=1;i<=k;i++)
  {
    for (a=k;a>=i;a--)
    { 
     printf("%d",a);
    }   
  printf("\n");
   
  }
}
