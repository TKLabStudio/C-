#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
void fun1();
void fun2();
void printstar(int);
using namespace std;
int main()    
{
    printstar(20);
    cout<<"媽媽叫我買醬油\n";
    fun1();
    cout<<"醬油買回來了...\n\n";
    
    cout<<"哥哥叫我打籃球\n";
    fun2();
    cout<<"籃球打完了...\n";
    printstar(20);
    
    system ("PAUSE");
    return 0;
}

void fun1()
{
     cout<<"我現正在買醬油...\n";
}
void fun2()
{
     cout<<"我現正在打籃球...\n";
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
