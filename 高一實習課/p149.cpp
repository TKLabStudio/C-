#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()    
{
    int i=100,*ptr=&i;
    cout<<"i="<<i<<"\n";
    cout<<"*ptr="<<*ptr<<"\n\n";
    
    *ptr=*ptr+1;
    cout<<"i="<<i<<"\n";
    cout<<"*ptr="<<*ptr<<"\n\n";

    i=i+1;
    cout<<"i="<<i<<"\n";
    cout<<"*ptr="<<*ptr<<"\n\n";

    system ("PAUSE");
    return 0;
}
