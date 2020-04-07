#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int sum (int *p,int n);

int main()
{
    int a[6]={1,2,3,4,5},i,total;
    total=sum(a,5);
    for(i=0;i<5;i++)
    {
    cout.width(3);
    cout<<a[i];
    }
    cout<<" Á`¼Æ¬O¡G"<<total<<"\n";
    system("PAUSE");
    return 0;
}
int sum (int *p,int n)
{
    int i,t=0;
    for(i=0;i<n;i++)
    {
     t=t+*(p+i);
    }
    return t;
}
