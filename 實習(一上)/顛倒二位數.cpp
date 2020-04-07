#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int x,y,n10,n1; 
    cout <<"請輸入兩位數:";
    cin >>x;
    n10=x/10;
    n1=x%10; 
    y=n1*10+n10; 
    cout<<x<<"的倒數是:"<<y<<"\n";
    system ("PAUSE");
    return 0;
}
