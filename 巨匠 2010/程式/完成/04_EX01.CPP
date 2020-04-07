#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sumi=0;
   float floata=10.0, floatb=3.0,sumf=0.0;

   sumi=(int)floata/(int)floatb;
   sumi=(int)(floata/floatb);
   sumf=floata/floatb;

   printf("the int result is %d\n",sumi);
   printf("the float result is %.1000f\n",sumf);
   
   system("PAUSE");
   return 0;

}
