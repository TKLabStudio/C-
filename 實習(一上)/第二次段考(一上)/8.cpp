#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()    
{
   int g=0;

   cout<<"�п�J�A�����Z:\n";
   cin>>g;

   if (g > 100 || g <0)
      cout<<"��J���~!\n";
   else
   {
      switch (g/10)
      {
    	 case 10:
    	 case 9:
    	     cout<<"A\n";
    	     break;
    	 case 8:
    	     cout<<"B\n";
    	     break;
    	 case 7:
    	     cout<<"C\n";
    	     break;
    	 case 6:
    	     cout<<"D\n";
    	     break;
    	 default:
    	     cout<<"F\n";
      }
   }
   system("PAUSE");
   return 0;   
}
