#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    cout<<"================�Ĥ@��===============//\n";
    int a,b,c;
    cout<<"�п�J�@�Ʀr:";
    cin>>a;
    b=a%2;
    if(b == 0)
    {
         cout<<"�o�O���ơI�I�I\n";
    }
    else
    {
         cout<<"�o�O�_�ơI�I�I\n";
    }
    cout<<"================�ĤG��===============//\n";
    cout<<"�п�J�@�Ʀr:";
    cin>>a;
    b=a%3;
    c=a%7;
    if((b == 0)||(c == 0))
    {
         cout<<"�o�O7��3�����ơI�I�I\n";
    }
    else
    {
         cout<<"�o���O7��3�����ơI�I�I\n";
    }
    cout<<"================�ĤT��===============//\n";
    cout<<"�п�J�@�Ʀr:";
    cin>>a;
    b=a%13;
    if(b==0)
    {
         cout<<"�o�O13�����ơI�I�I\n";
    }
    else
    {
         cout<<"�o���O13�����ơI�I�I\n";
    }
    cout<<"================�ĥ|��===============//\n";
    cout<<"�п�J�@�Ʀr:";
    cin>>a;
    b=a%3;
    if(b==0)
    {
         cout<<"�o�O3�����ơI�I�I\n";
    }
    else
    {
         cout<<"�o���O3�����ơI�I�I\n";
    }
    cout<<"================�Ĥ���===============//\n";
    cout<<"�п�Ja:";
    cin>>a;
    cout<<"�п�Jb:";
    cin>>b;
    cout<<"�п�Jc:";
    cin>>c;
    if((a>b)&&(a>c))
    {
         cout<<"a�̤j!!!!\n";
    }
    else if((b>a)&&(b>c))
    {
         cout<<"b�̤j!!!!\n";
    }
    else if((b==a)&&(b==c))
    {
         cout<<"�@�ˤj!!!!\n";
    }
    else
    {
         cout<<"c�̤j!!!!\n";
    }

    system("PAUSE");
    return 0;
    
}
