#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    
    cout<<"================第一個===============//\n";
    int a,b,ans;
    cout<<"請輸入A\n";
    cin>>a;
    cout<<"請輸入B\n";
    cin>>b;
    ans=(a+b)/(a-b);
    cout<<"("<<a<<"+"<<b<<")/("<<a<<"-"<<b<<")="<<ans<<"\n" ;
    
    /*
    cout<<"================第二個===============//\n";
    float a,b,c,ans,ans1,ans2,ans3,ans4;
    cout<<"請輸入A\n";
    cin>>a;
    cout<<"請輸入B\n";
    cin>>b;
    cout<<"請輸入C\n";
    cin>>c;
    ans1=(a+b+c)/(a-b-c);
    cout<<"("<<a<<"+"<<b<<"+"<<c<<")/("<<a<<"-"<<b<<"-"<<c<<")="<<ans1<<"\n" ;
    ans2=(a+b)*c-5/(a-b);
    cout<<"("<<a<<"+"<<b<<")*"<<c<<"-5"<<"/("<<a<<"-"<<b<<")="<<ans2<<"\n" ;
    ans3=(a+b+c)/3;
    cout<<"("<<a<<"+"<<b<<"+"<<c<<")/3="<<ans3<<"\n" ;
    ans4=(a+b+c)/3.0;
    cout<<"("<<a<<"+"<<b<<"+"<<c<<")/3.0="<<ans4<<"\n" ;
    */
    
    /*
    cout<<"================第三個===============//\n";
    int a=5,b=3,ans1,ans2;
    ans1=(a+b)/(a-b)==5;
    ans2=(a+b)/(a-b)==4;
    cout<<"("<<a<<"+"<<b<<")/("<<a<<"-"<<b<<")=5\n" ;
    cout<<"則結果為(1真)(0假):"<<ans1<<"\n"; 
    cout<<"("<<a<<"+"<<b<<")/("<<a<<"-"<<b<<")=4\n" ;
    cout<<"則結果為(1真)(0假):"<<ans2<<"\n"; 
    */
    system("PAUSE");
    return 0;
}
