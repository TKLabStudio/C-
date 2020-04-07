#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int count=0,i=0;
   char ans='y',str[21];
   
   while(ans=='Y'||ans=='y')
   {
   cout<<"please input word\n";
   cin>>str;
   while (str[i]!='\0')
   {
      if(str[i]=='a')
      count++;
      i++;
   }
   cout<<str<<"中出現a的次數為:"<<count<<"\n";
   
    cout<<"Contiune ? Y/N";
    ans=getch();
    cout<<"\n";
   }
   system("PAUSE");
   return 0;   
}
