#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
   int  r,s,t,z,m,n;
   scanf("%d %d %d",&r,&s,&t);
  z=(r+s+t)/2;
  m=sqrt(z*(z-r)*(z-s)*(z-t)*1);
  
  printf("�Ӥg�a�����Ȭ�%d(�@�W10�U���p��)",m);
  
  return 0;
}
