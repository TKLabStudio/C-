#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{    
    int a,b,c;
    cout<<"�п�Ja:";
    cin>>a;
    cout<<"�п�Jb:";
    cin>>b;
    cout<<"�п�Jc:";
    cin>>c;
    if((a>b)&&(a>c))
    {
         cout<<"a= "<<a<<"�̤j!!!!\n";
    }
    else if((b>a)&&(b>c))
    {
         cout<<"b= "<<b<<"�̤j!!!!\n";
    }
    else if((b==a)&&(b==c))
    {
         cout<<"�@�ˤj!!!!\n";
    }
    else
    {
         cout<<"c= "<<c<<"�̤j!!!!\n";
    }
    
    system("PAUSE");
    return 0;
    
}
