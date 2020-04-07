#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int i,n,;
    cout<<"請輸入因數:\n"; 
    cin>>n;
    for(i=1;i<=n;i++)
    {
    if(0==n%i)
    cout<<i<<"\n";
    }
    system("PAUSE");
    return 0;
    } 
