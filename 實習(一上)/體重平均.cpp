#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a[5],sum=0,i;
   char ans='y';
   
   while(ans=='Y'||ans=='y')
   {
   sum=0;
   cout<<"please input student weight\n";
   
   for (i=0;i<5;i++)
   {
      cout<<"please input:"<<i+1<<"student weight\n";
      cin>>a[i];
      sum=a[i]+sum;
   }
   
   cout<<"ave:"<<sum/i<<"\n";
   
    cout<<"Contiune ? Y/N";
    ans=getch();
    cout<<"\n";
    }
   system("PAUSE");
   return 0;   
}
