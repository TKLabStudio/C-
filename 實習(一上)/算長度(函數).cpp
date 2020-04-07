#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int strlong(char str[]);

int main()    
{
  char w='y';
  while(w=='y'||w=='y')
  
  {   
      cout<<"½Ð¿é¤J¦r¦ê¡G\n";
      char str[100];
      cin>>str;
      cout<<"¦@"<<strlong(str)<<"¦r\n";
    
  cout<<"continue=? Y/N";
  w=getch();
  cout<<"\n";
  if(w!='y'||w!='y')
  return 0;  
  }
}

int strlong(char str[])
{
 int count=0,i=0;
     while (str[i]!='\0')
   {
      count++;
      i++;
   }
   return count;
}
