#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
using namespace std;

int main (void)

{
    int a,b,c;
    cout<<"�п�Ja:";
    cin>>a;
    cout<<"�п�Jb:";
    cin>>b;
    c=a;
    a=b; 
    b=c;
    cout<<a<<"��a�A"<<b<<"��b\n";
    system("PAUSE"); 
    return 0;
} 
