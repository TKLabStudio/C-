#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()    
{
   float a=0,b=0;
   char s;
   cout<<"請輸入a:\n";
   cin>>a;
   cout<<"請輸入s:\n";
   cin>>s;
   cout<<"請輸入b:\n";
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
    	      cout<<"輸入錯誤!\n";
      }
   system("PAUSE");
   return 0;   
}
