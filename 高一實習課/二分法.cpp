#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <time.h>
int main()
{
    int lwd,rwd,pswd,ans1=0;
    char ans='y';
    
    while(ans=='Y'||ans=='y')
    {
    lwd=1;
    rwd=99;
    srand((unsigned)time(NULL));
    pswd=rand()%99+1;
    cout<<"PW code:"<<pswd<<"\n";
    while(ans1!=pswd)
    {
    ans1=(lwd+rwd+1)/2;
    
    cout.width(1);
    cout<<"lwd";
    cout.width(10);
    cout<<"rwd";
    cout.width(10);
    cout<<"ans";
    cout.width(10);
    cout<<"\n";
    
    cout.width(1);
    cout<<lwd;
    cout.width(10);
    cout<<rwd;
    cout.width(10);
    cout<<ans1;
    cout.width(10);
    cout<<"\n";
    
    if (ans1>pswd) 
    rwd=ans1;
    else if (ans1<pswd)
    lwd=ans1;
    else
    cout<<"Guest PW:"<<ans1<<"\n";
    
    }
    
    cout<<"Contiune ? Y/N";
    ans=getch();
    cout<<"\n";
    }
    system("PAUSE");
    return 0;
}
