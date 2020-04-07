#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int count=0,i=0;
   char s1[10];

   cout<<"please input word\n";
   cin>>s1;
   while (s1[i]!='\0')
   {
      if(s1[i]=='s')
      count++;
      i++;
   }
   cout<<s1<<"中出現s的次數為:"<<count<<"\n";

   system("PAUSE");
   return 0;   
}
