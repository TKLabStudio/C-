#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>
int main()
{
    char ch;
    cout<<"�п�J�@����:";
    cin>>ch;
    if((ch>='A')&&(ch<='Z'))
    {
         cout<<"�o�O�^��u"<<ch<<"�v�j�g\n";
    }
    else if((ch>='a')&&(ch<='z'))
    {
         cout<<"�o�O�^��u"<<ch<<"�v�p�g\n";
    }
    else if((ch>='0')&&(ch<='9'))
    {
         cout<<"�o�O�Ʀr�u"<<ch<<"�v\n";
    }
    else
    {
         cout<<"�o�O��L�u"<<ch<<"�v\n";
    }

    system("PAUSE");
    return 0;
}
