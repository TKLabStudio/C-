#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()    
{
   float chin,math,eng,a,b;
   cout<<"請輸入國文成績:";
   cin>>chin;
   cout<<"請輸入數學成績:";
   cin>>math;
   cout<<"請輸入英文成績:";
   cin>>eng;
   a=chin+math+eng;
   b=a/3;
   cout<<"\n";
   cout.width(8);
   cout<<"國文";
   cout.width(8);
   cout<<"英文";
   cout.width(8);
   cout<<"數學";
   cout.width(8);
   cout<<"總分";
   cout.width(8);
   cout<<"平均\n";
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
