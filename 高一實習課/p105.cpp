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
    cout<<"�����s�ڶR��o\n";
    fun1();
    cout<<"��o�R�^�ӤF...\n\n";
    
    cout<<"�����s�ڥ��x�y\n";
    fun2();
    cout<<"�x�y�����F...\n";
    printstar(20);
    
    system ("PAUSE");
    return 0;
}

void fun1()
{
     cout<<"�ڲ{���b�R��o...\n";
}
void fun2()
{
     cout<<"�ڲ{���b���x�y...\n";
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
