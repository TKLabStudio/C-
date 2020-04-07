#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>
int main()
{
    float a,b,c,t,ab,cc;
    cout<<"請輸入a:";
    cin>>a;
    cout<<"請輸入b:";
    cin>>b;
    cout<<"請輸入c:";
    cin>>c;
    if(a>b)
    {
         t=a;
         a=b;
         b=t;
    }
    if(b>c)
    {
         t=b;
         b=c;
         c=t;
    }
    if(a>b)
    {
         t=a;
         a=b;
         b=t;
    }

    
    cout<<a<<"<"<<b<<"<"<<c<<"\n";
    ab=pow(a,2)+pow(b,2);
    cc=pow(c,2);
    
    if(ab==cc)
    {
    cout<<"直角三角形！！\n";
    }
    else if(ab>cc)
    {
    cout<<"銳角三角形！！\n";
    }
    else 
    {
    cout<<"鈍角三角形！！\n";
    }
    system("PAUSE");
    return 0;
}
