#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()    
{
   float a=0,b=0;
   char s;
   cout<<"�п�Ja:\n";
   cin>>a;
   cout<<"�п�Js:\n";
   cin>>s;
   cout<<"�п�Jb:\n";
   cin>>b;
   
      switch (s)
      {
    	 case '+':
    	     cout<<a<<"+"<<b<<"="<<a+b<<"\n";
    	     break;
    	 case '-':
    	     cout<<a<<"-"<<b<<"="<<a-b<<"\n";
    	     break;
    	 case '*':
    	     cout<<a<<"*"<<b<<"="<<a*b<<"\n";
    	     break;
    	 case '/':
    	     cout<<a<<"/"<<b<<"="<<a/b<<"\n";
    	     break;
    	 default:
    	      cout<<"��J���~!\n";
      }
   system("PAUSE");
   return 0;   
}
