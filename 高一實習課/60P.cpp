#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n; 
    cout<<"�п�J�N��(1,2,3):";
    cin>>n;
        switch (n)
        {
        case 1: 
        cout<<"�A�O�j�ǳ����ǥ�\n";
        break;
        case 2: 
        cout<<"�A�O�Ӥh��\n";
        break; 
        case 3: 
        cout<<"�A�O�դh��\n";
        break;
        default:
        cout<<"�A�O�i�׳����ǥ�\n";
        }
    system("PAUSE");
    return 0;
}
