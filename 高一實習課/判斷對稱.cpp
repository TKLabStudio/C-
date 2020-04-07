#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int count=0,i=0,p=0;
   char ans='y',str[21];
   
   while(ans=='Y'||ans=='y')
   {
   cout<<"please input word\n";
   cin>>str;
   while (str[i]!='\0')
   {
      count++;
      i++;
   }
   for (i=count-1;i>=0;i--)
      printf("%c",str[i]);
   printf("\n");
   
   for (i=i/2;i>=0;i--)
   {
   if(str[count-i]==str[i])
   cout<<"fuck";
   }
    cout<<"Contiune ? Y/N";
    ans=getch();
    cout<<"\n";
   }
   system("PAUSE");
   return 0;   
}
