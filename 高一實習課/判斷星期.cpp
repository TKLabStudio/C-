#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n;
    cout<<"�п�J�P��:";
    cin>>n;
    if ((n>7)&&(n<1)) 
    cout<<"���~�I�I";
    else
    {
        switch (n) 
        {
        case 7: 
        cout<<"�P����\n";
        break;
        case 6: 
        cout<<"�P����\n";
        break;
        case 5: 
        cout<<"�P����\n";
        break;
        case 4: 
        cout<<"�P���|\n";
        break;
        case 3: 
        cout<<"�P���T\n";
        break;
        case 2: 
        cout<<"�P���G\n";
        break;
        case 1: 
        cout<<"�P���@\n";
        break;
        }
    }
    system("PAUSE");
    return 0;
}
