#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int hun (int *p,int n);

int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
    cout<<"輸入第"<<i+1<<"個數："; 
    cin>>a[i];
    }
    
    hun(a,5);
    
    cout<<"a[5]="; 
    for(i=0;i<5;i++)
    {
    cout.width(4);
    cout<<a[i];
    }
    cout<<"\n"; 
    system("PAUSE");
    return 0;
}
int hun (int *p,int n)
{
    int i,t=0;
    for(i=0;i<n;i++)
    {
     *(p+i)=*(p+i)+100;
    }
    return *p;
}
