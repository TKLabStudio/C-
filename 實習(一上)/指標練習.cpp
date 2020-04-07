#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()    
{
    int a[5]={10,20,30,40,50}; 
    int i,*p;
    cout<<"起始位址："<<a<<"\n";
    //-------------------------
    cout<<"\na[i]表示法(值)\n";
    for(i=0;i<5;i++)
    {
    cout<<"a["<<i+1<<"]="<<a[i]<<"\n";
    }
    //-------------------------
    cout<<"\na[i]表示法(地址)\n";
    for(i=0;i<5;i++)
    {
    cout<<"a["<<i+1<<"]="<<&a[i]<<"\n";
    }
    //-------------------------
    cout<<"\na+i表示法\n";
    for(i=0;i<5;i++)
    {
    cout<<"a["<<i+1<<"]="<<a+i<<"\n";
    }
    //-------------------------
    cout<<"\n*p表示地址\n";
    for(i=0;i<5;i++) 
    {
    p=a;
    cout<<"a["<<i+1<<"]="<<p+i<<"\n";
    }
    //-------------------------
    cout<<"\n*p表示值\n";
    for(i=0;i<5;i++) 
    {
    cout<<"a["<<i+1<<"]="<<*(p+i)<<"\n";
    }
    //-------------------------
    system ("PAUSE");
    return 0;
}
