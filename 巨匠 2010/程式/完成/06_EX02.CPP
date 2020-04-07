#include <stdio.h>

void local();
void stat();
void autodef();

int x=1;  //global

int main()
{
   int x=5; //local
   printf("local x in main is %d\n",x);
   {
      int x=7; // new scope
      printf("new local x is %d\n",x);
   }
   printf("local x in main is %d\n",x);

   local();
   stat();
   autodef();

   local();
   stat();
   autodef();

   printf("local x in main is %d\n",x);

   system("PAUSE");
   return 0;
}

void local()
{
   int x=20;
   printf("\nlocal in function on entering is %d\n",x);
   x++;
   printf("local in function on exiting is %d\n",x);
}

void stat()
{
   static int x=30;
   printf("\nstatic in function on entering is %d\n",x);
   x++;
   printf("static in function on exiting is %d\n",x);
}

void autodef()
{
   printf("\nauto in function on entering is %d\n",x);
   x++;
   printf("auto in function on exiting is %d\n",x);
}
