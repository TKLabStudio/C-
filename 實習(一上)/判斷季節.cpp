#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n; 
    cout<<"�п�J���:";
    cin>>n;
    if ((n>12)||(n<1)) 
    {
    cout<<"���~�I�I\n";
    }
    else
    {
        switch (n)
        {
        case 12: 
        case 2: 
        case 1: 
        cout<<"�V��\n";
        break;
        case 11: 
        case 10: 
        case 9: 
        cout<<"���\n";
        break;
        case 8: 
        case 7: 
        case 6: 
        cout<<"�L��\n";
        break;
        case 5:
        case 4: 
        case 3:
        cout<<"�K��\n";
        break;
        }
    }
    system("PAUSE");
    return 0;
}
