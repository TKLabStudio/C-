#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
   char ans='y',str[21];
   while(ans=='Y'||ans=='y')
   {
   int count=0,i=0;
   cout<<count<<"\n";
   cout<<"please input word\n";
   cin>>str;
   while (str[i]!='\0')
   {
      count++;
      i++;
   }
   cout<<str<<" long:"<<count<<"\n";
   
    cout<<"Contiune ? Y/N";
    ans=getch();
    cout<<"\n";
   }
   system("PAUSE");
   return 0;   
}
