#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n; 
    cout<<"請輸入代號(1,2,3,4):";
    cin>>n;
        switch (n)
        {
        case 1: 
        cout<<"你選的候選人是阿三\n";
        break;
        case 2: 
        cout<<"你選的候選人是阿六\n";
        break; 
        case 3: 
        cout<<"你選的候選人是阿七\n";
        break;
        case 4: 
        cout<<"你選的候選人是阿九\n";
        break;
        default:
        cout<<"廢票\n";
    }
    system("PAUSE");
    return 0;
}
