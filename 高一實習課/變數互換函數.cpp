#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
void change(int *,int *);
int main()    
{
    int i=1,j=2;
    cout<<"�쥻 i="<<i<<" j="<<j<<"\n";
    change(&i,&j);
    cout<<"�ܴ��� i="<<i<<" j="<<j<<"\n";
    system ("PAUSE");
    return 0;
}


void change(int *x,int *y)
{
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
}

