#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
void printstar(int);
int sum(int,int);
int main()    
{
    int j,i,total;
    printstar(20);
    cout<<"input i:";
    cin>>i;
    cout<<"input j:";
    cin>>j;
    total=sum(i,j);
    cout<<"total:"<<total<<"\n";
    printstar(20);
    
    system ("PAUSE");
    return 0;
}

int sum(int x,int y)
{
     int tot;
     tot=x+y;
     return tot;
}
void printstar(int n)
{
     int i;
     for(i=1;i<=n;i++)
     {
     cout<<"*";
     }
     cout<<"\n";
}
