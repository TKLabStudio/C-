#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int i,j,N;
    struct stupid 
    {
     char name[10]; 
     int chi,math,eng,total,order;
     float avg;
     } socre[N];
     
        for(i=0;i<N;i++)
        { 
         socre[i].order=1;
        }
          
          
      cout<<"�п�J���X��P�ǡG";
      cin>>N;   
    
    for(i=0;i<N;i++)
    {
      cout<<"===========================\n";
      cout<<"��J��"<<i+1<<"��P�ǩm�W�G";
      cin>>socre[i].name;
      cout<<"��妨�Z�G";
      cin>>socre[i].chi;
      cout<<"�ƾǦ��Z�G";
      cin>>socre[i].math;
      cout<<"�^�妨�Z�G";
      cin>>socre[i].eng;
      socre[i].total= socre[i].chi + socre[i].math + socre[i].eng;
      socre[i].avg=socre[i].total/3.0;
      cout<<"\n";
    }
    

          for(i=0;i<N;i++)
        {
          for(j=0;j<N;j++)
            if(socre[i].total<socre[j].total)
            socre[i].order++;
        }

            
        cout<<"  �s��      �m�W  ���  �^��  �ƾ�  �`��      ����  �W��\n";
                       
        for(i=0;i<N;i++)
    {
      cout.width(6);
      cout<<i+1;
      cout.width(10);
      cout<<socre[i].name;
      cout.width(6);
      cout<<socre[i].chi;
      cout.width(6);
      cout<<socre[i].math;
      cout.width(6);
      cout<<socre[i].eng;
      cout.width(6);
      cout<<socre[i].total;
      cout.width(10);
      cout<<socre[i].avg;
      cout.width(6);
      cout<<socre[i].order;
      cout<<"\n"; 
    }
    
    
    system("PAUSE");
    return 0;
}

