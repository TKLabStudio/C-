#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()    
{
    int x,n,m;
    cin>>x;
    for(n=1;4*n<x;n++)
{
    m=(x-(4*n))/2 ;
    cout<<"¨ß¤l:"<<n<<"\n"<<"Âû:"<<m<<"\n";
}
    system ("PAUSE");
    return 0;
}

