#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n;
    char ans;
    again:
    cout<<"�п�J���Z:";
    cin>>n;
    
    if ((n>100)||(n<1)) 
    {
    cout<<"���~�I�I\n";
    }
    else
    {
        switch ((n-50)/10)
        {
        case 5: 
        case 4: 
        cout<<"�A�����Z�O:"<<n<<"\n�OA����~�����N�n�δ�\n";
        break;
        case 3: 
        cout<<"�A�����Z�O:"<<n<<"\n�OB����~\n";
        break;
        case 2: 
        cout<<"�A�����Z�O:"<<n<<"\n�OC����~\n";
        case 1: 
        cout<<"�A�����Z�O:"<<n<<"\n�OD����~\n";
        break;
        default:
        cout<<"�A�����Z�O:"<<n<<"\n�OE����~�ټKXD\n";
        }
    }
    answer:
    cout<<"�O�_����U��(Y/N)?:\n";
    ans=getch();
    if ((ans=='Y')||(ans=='y'))
    {
        goto again;        
    }
    else if ((ans=='N')||(ans=='n'))
    {
         system("PAUSE");
    }
    else
    {
        cout<<"���~�I�I\n";
        goto answer;
    }
    return 0;
}
