#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n;
    cout<<"請輸入星期:";
    cin>>n;
    if ((n>7)&&(n<1)) 
    cout<<"錯誤！！";
    else
    {
        switch (n) 
        {
        case 7: 
        cout<<"星期日\n";
        break;
        case 6: 
        cout<<"星期六\n";
        break;
        case 5: 
        cout<<"星期五\n";
        break;
        case 4: 
        cout<<"星期四\n";
        break;
        case 3: 
        cout<<"星期三\n";
        break;
        case 2: 
        cout<<"星期二\n";
        break;
        case 1: 
        cout<<"星期一\n";
        break;
        }
    }
    system("PAUSE");
    return 0;
}
