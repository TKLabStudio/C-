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
      cout<<"輸入第"<<i+1<<"位同學姓名：";
      cin>>number[i].name;
      cout<<"電話號碼：";
      cin>>number[i].tel;
      cout<<"年齡：";
      cin>>number[i].age; 
      cout<<"\n";
    }

        //cout<<"姓名    號碼        年齡\n";
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
