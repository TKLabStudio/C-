#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
void addone (int p[],int n);

int main()
{
    int a[6]={8,20,34,11,55,778},i;
    addone(a,6);
    
    for(i=0;i<6;i++)
    {
    cout.width(4);
    cout<<a[i];
    }
    system("PAUSE");
    return 0;
}
void addone (int p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
     p[i]=p[i]+100;
    }
}
