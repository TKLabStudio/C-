#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
char To_upper(char);

int main()
  {
      char w='y';
      while(w=='y')
  {    
   char ch;
   cout<<"請輸入小寫：\n";
   cin>>ch;
   cout<<To_upper(ch)<<"\n";

  cout<<"continue=? Y/N";
  w=getch();
  cout<<"\n";
  if(w!='y')
  return 0;  
  }
  }

char To_upper(char up)
{
   if ((up>=97) && (up<=122))
   {
      up-=32;
      return up;
   }
   else if ((up>=65) && (up<=90))
   {
      up+=32;
      return up;
   }
   else
   cout<<"輸入錯誤\n"; 
}
