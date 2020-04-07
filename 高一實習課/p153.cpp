#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
void change();
 int i=100,j=200;
int main()    
{

    cout<<"原本 i="<<i<<" j="<<j<<"\n";
    change();
    cout<<"變換後 i="<<i<<" j="<<j<<"\n";
    system ("PAUSE");
    return 0;
}


void change()
{
     int temp;
     temp=i;
     i=j;
     j=temp;
}

