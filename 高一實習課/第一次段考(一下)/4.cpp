#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()    
{
    int x,n,m;
    cout<<"��J�}�ơG";
    cin>>x;
    if(x%2==1) 
    {
    cout<<"��J���~�I\n";
    }
    else
    {
     for(n=1;4*n<x;n++)
     {
     m=(x-(4*n))/2 ;
     cout<<"�ߤl:"<<n<<"\n"<<"��:"<<m<<"\n";
     }
    }
    system ("PAUSE");
    return 0;
}

