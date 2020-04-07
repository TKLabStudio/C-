#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int a,a4,a100,a400;
    cout<<"請輸入年分:";
    cin>>a;
    a4=a%4;
    a100=a%100;
    a400=a%400;
    
    if(a4!=0)
    {
         cout<<"這是平年！！\n"; 
    }
    else if(a100!=0)
    {
         cout<<"這是閏年！！\n"; 
    }
        
    else if(a400!=0)
    {
         cout<<"這是平年！！\n"; 
    }   
    else
    {
         cout<<"這是閏年！！\n"; 
    }
    system("PAUSE");
    return 0;
}
