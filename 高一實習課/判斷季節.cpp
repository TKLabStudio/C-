#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n; 
    cout<<"請輸入月份:";
    cin>>n;
    if ((n>12)||(n<1)) 
    {
    cout<<"錯誤！！\n";
    }
    else
    {
        switch (n)
        {
        case 12: 
        case 2: 
        case 1: 
        cout<<"冬天\n";
        break;
        case 11: 
        case 10: 
        case 9: 
        cout<<"秋天\n";
        break;
        case 8: 
        case 7: 
        case 6: 
        cout<<"夏天\n";
        break;
        case 5:
        case 4: 
        case 3:
        cout<<"春天\n";
        break;
        }
    }
    system("PAUSE");
    return 0;
}
