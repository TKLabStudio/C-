#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n; 
    cout<<"請輸入代號(1,2,3):";
    cin>>n;
        switch (n)
        {
        case 1: 
        cout<<"你是大學部的學生\n";
        break;
        case 2: 
        cout<<"你是碩士生\n";
        break; 
        case 3: 
        cout<<"你是博士生\n";
        break;
        default:
        cout<<"你是進修部的學生\n";
        }
    system("PAUSE");
    return 0;
}
