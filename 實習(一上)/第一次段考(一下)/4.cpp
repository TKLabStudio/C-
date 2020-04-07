#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()    
{
    int x,n,m;
    cout<<"輸入腳數：";
    cin>>x;
    if(x%2==1) 
    {
    cout<<"輸入錯誤！\n";
    }
    else
    {
     for(n=1;4*n<x;n++)
     {
     m=(x-(4*n))/2 ;
     cout<<"兔子:"<<n<<"\n"<<"雞:"<<m<<"\n";
     }
    }
    system ("PAUSE");
    return 0;
}

