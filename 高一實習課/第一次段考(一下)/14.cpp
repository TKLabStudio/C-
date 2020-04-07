#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int strlong(char s1[]);

int main()    
{
      cout<<"½Ð¿é¤J¦r¦ê¡G\n";
      char s1[10];
      cin>>s1;
      cout<<"¦@"<<strlong(s1)<<"¦r\n";
    
    
    system ("PAUSE");
    return 0;
}

int strlong(char s1[])
{
 int count=0,i=0;
     while (s1[i]!='\0')
   {
      count++;
      i++;
   }
   return count;
}
