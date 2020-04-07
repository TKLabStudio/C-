#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{    
    int a,b,c;
    cout<<"請輸入a:";
    cin>>a;
    cout<<"請輸入b:";
    cin>>b;
    cout<<"請輸入c:";
    cin>>c;
    if((a>b)&&(a>c))
    {
         cout<<"a= "<<a<<"最大!!!!\n";
    }
    else if((b>a)&&(b>c))
    {
         cout<<"b= "<<b<<"最大!!!!\n";
    }
    else if((b==a)&&(b==c))
    {
         cout<<"一樣大!!!!\n";
    }
    else
    {
         cout<<"c= "<<c<<"最大!!!!\n";
    }
    
    system("PAUSE");
    return 0;
    
}
