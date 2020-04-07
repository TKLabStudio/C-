#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a[5],hmax=-99,total,i;
   char ans='y';
   
   while(ans=='Y'||ans=='y')
   {
   
   cout<<"please input student high,input-99 exit\n";
   
   for (i=0;i<5;i++)
   {
      cout<<"please input:"<<i+1<<"student high\n";
      cin>>a[i];
      if(a[i]==-99)
      i=5;
      break;
      if(a[i]>hmax)
      hmax=a[i];
   }
   if(i==5)
   total=i-1;
   else
   total=i;
   

   for (i=0;i<=total;i++)
   cout<<"number:"<<i<<" ,high:"<<a[i]<<"\n";
   cout<<"highest:"<<hmax<<"\n";
   
    cout<<"Contiune ? Y/N";
    ans=getch();
    cout<<"\n";
    }
   system("PAUSE");
   return 0;   
}
