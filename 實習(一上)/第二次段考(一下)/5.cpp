#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
    char str[10],*q,*p;                  
    int i=0,tot;
    cout<<"請輸入一字串：";
    cin>>str;
    p=q=str;
    tot=strlen(str);
    while(i<tot)
    {
      if(*(p+i)==*(q+tot-i-1))
       {
         if(i==tot-1)
           {
             cout<<"對稱\n";
             system("PAUSE");
             return 0;
           }
         else
             i++;
       }
      else
      {
         cout<<"不對稱\n";
         system("PAUSE");
         return 0; 
      }
    }
}
