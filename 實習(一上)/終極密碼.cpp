#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <time.h>
int main()
{
    int lwd,rwd,keyin=0,pswd;
    char ans='y';
    
    while(ans=='Y'||ans=='y')
    {
    lwd=1;
    rwd=99;
    srand((unsigned)time(NULL));
    pswd=rand()%99+1;
    cout<<"PW:"<<pswd<<"\n"; 
    while(keyin!=pswd)
    {
    cout<<"input number,"<<lwd<<"~"<<rwd<<":";
    cin>>keyin;
    if (keyin>pswd) 
    rwd=keyin;
    else if (keyin<pswd)
    lwd=keyin;
    else
    cout<<"BIMGO\n";
    }
    cout<<"Contiune ? Y/N";
    ans=getch();
    cout<<"\n";
    }
    system("PAUSE");
    return 0;
}
