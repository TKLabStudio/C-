#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()    
{
    int a[5]={10,20,30,40,50}; 
    int i,*p;
    
    cout<<"\na[i]��ܭ�\n";
    for(i=0;i<5;i++)
    {
    cout<<"a["<<i+1<<"]="<<a[i]<<"\n";
    }
    //-------------------------
    cout<<"\n&a[i]��ܦa�}\n";
    for(i=0;i<5;i++)
    {
    cout<<"a["<<i+1<<"]="<<&a[i]<<"\n";
    }
    //-------------------------
    cout<<"\np+i��ܦa�}\n";
    for(i=0;i<5;i++) 
    {
    p=a;
    cout<<"a["<<i+1<<"]="<<p+i<<"\n";
    }
    //-------------------------
    cout<<"\n*(p+i)��ܭ�\n";
    for(i=0;i<5;i++) 
    {
    cout<<"a["<<i+1<<"]="<<*(p+i)<<"\n";
    }
    //-------------------------
    system ("PAUSE");
    return 0;
}
