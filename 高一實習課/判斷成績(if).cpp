#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n;
    cout<<"�п�J���Z:";
    cin>>n;
    if ((n>100)||(n<1)) 
    {
    cout<<"���~�I�I\n";
    }
    else if ((n>=90)&&(n<=100)) 
    {
    cout<<"�A�����Z�O:"<<n<<"\n�OA����~�����N�n�δ�\n";
    }
    else if (n>=80)
    {
    cout<<"�A�����Z�O:"<<n<<"\n�OB����\n";
    }
    else if (n>=70)
    {
    cout<<"�A�����Z�O:"<<n<<"\n�OC����\n";
    }
    else if (n>=60) 
    {
    cout<<"�A�����Z�O:"<<n<<"\n�OD����\n";
    }
    else
    {
    cout<<"�A�����Z�O:"<<n<<"\n�OE����~�ټKXD\n";
    }
    system("PAUSE");
    return 0;
}
