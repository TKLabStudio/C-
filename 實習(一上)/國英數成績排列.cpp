#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()    
{
   float chin,math,eng,a,b;
   cout<<"�п�J��妨�Z:";
   cin>>chin;
   cout<<"�п�J�ƾǦ��Z:";
   cin>>math;
   cout<<"�п�J�^�妨�Z:";
   cin>>eng;
   a=chin+math+eng;
   b=a/3;
   cout<<"\n";
   cout.width(8);
   cout<<"���";
   cout.width(8);
   cout<<"�^��";
   cout.width(8);
   cout<<"�ƾ�";
   cout.width(8);
   cout<<"�`��";
   cout.width(8);
   cout<<"����\n";
   cout.width(8);
   cout<<chin;
   cout.width(8);
   cout<<math;
   cout.width(8);
   cout<<eng;
   cout.width(8);
   cout<<a;
   cout.width(8);
   cout<<b<<"\n\n\n";
   system ("PAUSE");
    return 0;
}
