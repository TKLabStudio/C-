#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>
int main()
{
    char ch;
    cout<<"請輸入一鍵位值:";
    cin>>ch;
    if((ch>='A')&&(ch<='Z'))
    {
         cout<<"這是英文「"<<ch<<"」大寫\n";
    }
    else if((ch>='a')&&(ch<='z'))
    {
         cout<<"這是英文「"<<ch<<"」小寫\n";
    }
    else if((ch>='0')&&(ch<='9'))
    {
         cout<<"這是數字「"<<ch<<"」\n";
    }
    else
    {
         cout<<"這是其他「"<<ch<<"」\n";
    }

    system("PAUSE");
    return 0;
}
