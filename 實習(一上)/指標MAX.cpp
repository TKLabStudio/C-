#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int max (int *p,int n);

int main()
{
    int a[6]={8,20,34,11,55,77},i;
    for(i=0;i<6;i++)
    {
    cout.width(3);
    cout<<a[i];
    }
    cout<<" max¡G"<<max(a,6)<<"\n";
    system("PAUSE");
    return 0;
}
int max (int *p,int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
     if(*(p+i)<*(p+j))
     {
        temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
     }
    }
    return *p;
}
}
