#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()    
{
    int i,j;
    cout<<"=============�Ĥ@�D=============\n";
    for (i=1;i<=5;i++)
    {
    for (j=0;j<=5-i;j++)
    {
        cout<<"�s";
    }
    cout<<"\n";
    }
    cout<<"=============�ĤG�D=============\n";
    for (i=1;i<=5;i++)
    {
    for (j=1;j<=i;j++)
    {
        cout<<"�s";
    }
    cout<<"\n";
    }
    cout<<"=============�ĤT�D=============\n";
    for (i=3;i>=1;i--) 
    {
    for (j=1;j<=2*i-1;j++)
    {
        cout<<"�s";
    }
    cout<<"\n";
    }
    cout<<"=============�ĥ|�D=============\n";
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
    cout<<"=============�Ĥ��D=============\n";
    for (i=1;i<=5;i++)
    {
    for (j=1;j<=i;j++)
    {
        cout<<i;
    }
    cout<<"\n";
    }
    cout<<"=============�Ĥ��D=============\n";
    for (i=1;i<=9;i=i+3) 
    {
    for (j=i;j<=i+2;j=j+1)
    {
        cout<<j<<"*"<<j<<"=";
        cout.width(2);
        cout<<j*j<<" ";
    }
    cout<<"\n";
    }
    cout<<"=============�ĤC�D=============\n";
    char a;
    for (a=65;a<=68;a++)
    {
    for (i=65;i<=a;i++)
    {
        cout<<a;
    }
    cout<<"\n";
    }
    
    system ("PAUSE");
    return 0;
}
