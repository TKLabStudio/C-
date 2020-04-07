#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()    
{
    float sum,diff,a,b;
    cout <<"請輸入a+b:";
    cin >>sum;
    cout <<"請輸入a-b:";
    cin >>diff;
    a=(sum+diff)/2;
    b=sum-a;
    cout <<"a="<<a<<"\nb="<<b<<"\n";
    system ("PAUSE");
    return 0;
}
