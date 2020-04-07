#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int i,n,sum=0;
    char ans='y';
    
    while(ans=='Y'||ans=='y')
    {
    cout<<"請輸入一數字:\n"; 
    cin>>n;
           for(i=1;i<=(100/n);i++)
           {
            sum=(n*i)+sum;
           }
     cout<<sum<<"\n"<<"Contiune ? Y/N";
     ans=getch();
     cout<<"\n";
     sum=0;
    }
    system("PAUSE");
    return 0;
}



    
