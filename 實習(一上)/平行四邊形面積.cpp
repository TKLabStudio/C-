#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()    
{
    float top,down,height,area;
    cout <<"請輸入上底:\n";
    scanf("%f",&top);
    cout <<"請輸入下底:\n";
    scanf("%f",&down);
    cout <<"請輸入高:\n";
    scanf("%f",&height);
    area = ((top+down)*height)/2;
    cout <<"面積= "<<area <<"\n";
    system("PAUSE");
    return 0;
    
}
        
//TKmaker
