#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int j=18,i=27;
void ans();
int main()    
{
    int j,i,c=1;
    i=18;
    j=27;
    while(c!=0)
    {          
    c=i%j;
    i=j;
    j=c;
    }
    ans();
    ;cout<<i<<"\n";
    system ("PAUSE");
    return 0;
}
void ans()
{
    cout<<i<<"和"<<j<<"的最大公因數=";
}

