#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n; 
    cout<<"�п�J�N��(1,2,3,4):";
    cin>>n;
        switch (n)
        {
        case 1: 
        cout<<"�A�諸�Կ�H�O���T\n";
        break;
        case 2: 
        cout<<"�A�諸�Կ�H�O����\n";
        break; 
        case 3: 
        cout<<"�A�諸�Կ�H�O���C\n";
        break;
        case 4: 
        cout<<"�A�諸�Կ�H�O���E\n";
        break;
        default:
        cout<<"�o��\n";
    }
    system("PAUSE");
    return 0;
}
