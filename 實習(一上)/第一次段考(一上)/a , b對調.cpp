#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
using namespace std;

int main (void)

{
    int a,b,c;
    cout<<"請輸入a:";
    cin>>a;
    cout<<"請輸入b:";
    cin>>b;
    c=a;
    a=b; 
    b=c;
    cout<<a<<"為a，"<<b<<"為b\n";
    system("PAUSE"); 
    return 0;
} 
