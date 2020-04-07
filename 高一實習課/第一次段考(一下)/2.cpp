#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
void mux99();
using namespace std;
int main()    
{
    mux99();
    system ("PAUSE");
    return 0;
}

void mux99()
{
     int i,j;
    for (i=1;i<=9;i++) 
    {
    for (j=1;j<=9;j++)
    {
        cout<<i<<"*"<<j<<"=";
        cout.width(2);
        cout<<i*j<<" ";
    }
    cout<<"\n";
    }
}
    
    
