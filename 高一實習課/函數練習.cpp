#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
void fun1();
void fun2();
void tristar1(int);
void tristar2(int);
int main()    
{
    tristar1(3);
    cout<<"�����s�ڶR��o\n";
    fun1();
    cout<<"��o�R�^�ӤF...\n\n";
    
    cout<<"�����s�ڥ��x�y\n";
    fun2();
    cout<<"�x�y�����F...\n";
    tristar2(3);
    
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
void tristar1(int n)
{
     int i,j;
     for(i=0;i<n;i++)
   {
      for (j=3-i;j>0;j--) 
         cout<<"  ";
      for (j=0;j<=i*2;j++)
         cout<<"��";
      cout<<"\n";
   } 
}
void tristar2(int n)
{
    int i,j;
     for(i=0;i<n;i++)
   {
      for (j=2+i;j>1;j--) 
         cout<<"  ";
      for (j=5;j>=i*2+1;j--)
         cout<<"��";
      cout<<"\n";
   } 
}
