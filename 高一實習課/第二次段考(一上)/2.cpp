#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    float number,ads;
    cout<<"請輸入一數字:";
    cin>>number;
    if(number >= 0 )
    {
        ads = number;
    }
    else
    {
        ads = -number;
    }
    cout<<number<<"的絕對值是:"<<ads<<"\n"; 
    
    system("PAUSE");
    return 0;
}
