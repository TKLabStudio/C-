#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int N = 3;
int main()
{
    int i,j;
    struct  student 
    {   
    char name[20];
    char tel[12];
    int  age;
    }number[N];
    
    for(i=0;i<N;i++)
    {
      cout<<"��J��"<<i+1<<"��P�ǩm�W�G";
      cin>>number[i].name;
      cout<<"�q�ܸ��X�G";
      cin>>number[i].tel;
      cout<<"�~�֡G";
      cin>>number[i].age; 
      cout<<"\n";
    }

        //cout<<"�m�W    ���X        �~��\n";
        //cout<<"========================\n";         
        for(i=0;i<N;i++)
    {
      cout.width(4);
      cout<<number[i].name;
      cout.width(12);
      cout<<number[i].tel;
      cout.width(4);
      cout<<number[i].age;
      cout<<"\n"; 
    }
    
    
    system("PAUSE");
    return 0;
}
