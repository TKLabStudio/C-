#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    cout<<"================第一個===============//\n";
    int a,b,c;
    cout<<"請輸入一數字:";
    cin>>a;
    b=a%2;
    if(b == 0)
    {
         cout<<"這是偶數！！！\n";
    }
    else
    {
         cout<<"這是奇數！！！\n";
    }
    cout<<"================第二個===============//\n";
    cout<<"請輸入一數字:";
    cin>>a;
    b=a%3;
    c=a%7;
    if((b == 0)||(c == 0))
    {
         cout<<"這是7或3的倍數！！！\n";
    }
    else
    {
         cout<<"這不是7或3的倍數！！！\n";
    }
    cout<<"================第三個===============//\n";
    cout<<"請輸入一數字:";
    cin>>a;
    b=a%13;
    if(b==0)
    {
         cout<<"這是13的倍數！！！\n";
    }
    else
    {
         cout<<"這不是13的倍數！！！\n";
    }
    cout<<"================第四個===============//\n";
    cout<<"請輸入一數字:";
    cin>>a;
    b=a%3;
    if(b==0)
    {
         cout<<"這是3的倍數！！！\n";
    }
    else
    {
         cout<<"這不是3的倍數！！！\n";
    }
    cout<<"================第五個===============//\n";
    cout<<"請輸入a:";
    cin>>a;
    cout<<"請輸入b:";
    cin>>b;
    cout<<"請輸入c:";
    cin>>c;
    if((a>b)&&(a>c))
    {
         cout<<"a最大!!!!\n";
    }
    else if((b>a)&&(b>c))
    {
         cout<<"b最大!!!!\n";
    }
    else if((b==a)&&(b==c))
    {
         cout<<"一樣大!!!!\n";
    }
    else
    {
         cout<<"c最大!!!!\n";
    }

    system("PAUSE");
    return 0;
    
}
