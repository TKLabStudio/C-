#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>
int main()
{
    float a,b,c,t,ab,cc;
    cout<<"�п�Ja:";
    cin>>a;
    cout<<"�п�Jb:";
    cin>>b;
    cout<<"�п�Jc:";
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
    cout<<"�����T���ΡI�I\n";
    }
    else if(ab>cc)
    {
    cout<<"�U���T���ΡI�I\n";
    }
    else 
    {
    cout<<"�w���T���ΡI�I\n";
    }
    system("PAUSE");
    return 0;
}
