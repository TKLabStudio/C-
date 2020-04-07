#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <time.h>
int main()
{
    int l,w,x1,y1,x2,y2;
    char ans='y';
    
    while(ans=='Y'||ans=='y')
    {
    cout<<"x1:";
    cin>>x1;
    cout<<"y1:";
    cin>>y1;
    cout<<"x2:";
    cin>>x2;
    cout<<"y2:";
    cin>>y2;
    l=abs(x1-x2);
    w=abs(y1-y2);
    if((l==0)&&(w==0))
    cout<<"點\n";
    else if((l==0)||(w==0))
    cout<<"線\n";
    else if(l==w)
    cout<<"正方形\n";
    else 
    cout<<"長方形\n";
    cout<<"面積:"<<l*w<<"\n"; 
    cout<<"Contiune ? Y/N";
    ans=getch();
    cout<<"\n";
    }
    system("PAUSE");
    return 0;
}
