#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n50,n10,n5,n1,n,x,price;
    cout<<"�п�J�ӫ~���B(100���H��):";
    cin>>x;
    n=100-x;
    n50=n/50;
    n10=(n-n50*50)/10;
    n5=(n-n50*50-n10*10)/5;
    n1=(n-n50*50-n10*10-n5*5)/1;
    cout<<"��^50���w��:"<<n50<<"��\n";
    cout<<"��^10���w��:"<<n10<<"��\n";
    cout<<"��^5���w��:"<<n5<<"��\n";
    cout<<"��^1���w��:"<<n1<<"��\n";
    system("PAUSE");
    return 0;
}
    
    
