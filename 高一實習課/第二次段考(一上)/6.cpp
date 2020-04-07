#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int i,n;
    cout<<"請輸入一數字:\n"; 
    cin>>n;
    cout<<n<<"的因數有:\n";
    for(i=1;i<=n;i++)
      {
      if((n%i==0)&&(i!=n)&&(i!=1)) 
      cout<<i<<"\n";
      }
    
    system("PAUSE");
    return 0;

}


