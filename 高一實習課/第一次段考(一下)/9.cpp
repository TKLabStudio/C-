#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int count=0,i=0,j;
   char s1[10];

   cout<<"please input word：\n";
   cin>>s1;
   while (s1[i]!='\0')
   {
      for(j=48;j<=57;j++)
      {
      if(s1[i]==j)
      count++;
      }
      i++;
   }
   cout<<s1<<"中出現數字的次數為:"<<count<<"\n";

   system("PAUSE");
   return 0;   
}
