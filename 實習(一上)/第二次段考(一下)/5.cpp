#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main ()
{
    char str[10],*q,*p;                  
    int i=0,tot;
    cout<<"�п�J�@�r��G";
    cin>>str;
    p=q=str;
    tot=strlen(str);
    while(i<tot)
    {
      if(*(p+i)==*(q+tot-i-1))
       {
         if(i==tot-1)
           {
             cout<<"���\n";
             system("PAUSE");
             return 0;
           }
         else
             i++;
       }
      else
      {
         cout<<"�����\n";
         system("PAUSE");
         return 0; 
      }
    }
}
