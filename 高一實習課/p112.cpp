#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
void printstar(int);
void input();
void process();
void output();
int i,j,total;
int main()    
{
    int j,i,total;
    printstar(20);
    input();
    process();
    output();
    printstar(20);
    
    system ("PAUSE");
    return 0;
}

void input()
{
     cout<<"input i:";
     cin>>i;
     cout<<"input j:";
     cin>>j;
}
void process()
{
     total=i+j;
}
void output()
{
     cout<<"total:"<<total<<"\n";
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
