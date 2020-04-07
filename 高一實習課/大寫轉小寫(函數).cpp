#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
char To_lower(char);

int main()
  {
      char w='y';
      while(w=='y')
  {    
   char ch;
   cout<<"請輸入大寫：\n";
   cin>>ch;
   cout<<To_lower(ch)<<"\n";

  cout<<"continue=? Y/N";
  w=getch();
  cout<<"\n";
  if(w!='y')
  return 0;  
  }
  }

char To_lower(char up)
{
   if ((up>=65) && (up<=90))
   {
      up+=32;
      return up;
   }
   else
   cout<<"輸入錯誤\n"; 
}
