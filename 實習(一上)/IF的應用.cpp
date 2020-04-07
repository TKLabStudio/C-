#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    cout<<"================第一個===============//\n";
    int i=100, j=200;
    cout<<"i= "<<i<<"j= "<<j<<"\n";
    if(i == j)
    {
         cout<<"i 和 j 是相等\n";
    }
    else
    {
         cout<<"i 和 j 是不相等\n";
    }
    
    cout<<"================第二個===============//\n";
    int score;
    cout<<"請輸入您的成績:";
    cin>>score;
    if(score >= 60)
    {
         cout<<"您的成績是"<<score<<"分，恭喜妳通過了！！！\n";
    }
    else
    {
         cout<<"您的成績是"<<score<<"分，抱歉您被當了！！！\n";
    }
    
    cout<<"================第三個===============//\n";
    cout<<"請輸入您的成績:";
    cin>>score;
    if(score >= 60)
    {
         score += 10;
    }
    else
    {
         score += 5;
    }
    cout<<"您的成績是"<<score<<"\n";
        
    cout<<"================第三個===============//\n";
    cout<<"請輸入您的成績:";
    cin>>score;
    if(score >= 60)
    {
         score += 10;
    }
    cout<<"您的成績是"<<score<<"\n";
        
    cout<<"================第四個===============//\n";
    float number,ads;
    cout<<"請輸入一數字:";
    cin>>number;
    if(number >= 0 )
    {
        ads = number;
    }
    else
    {
        ads = -number;
    }
    cout<<number<<"的絕對值是:"<<ads<<"\n";
    ads = (number >= 0) ?number :-number;
    cout<<number<<"的絕對值是:"<<ads<<"\n"; 
        
    cout<<"================額外===============//\n";
    int a;
    float c,f;
    cout <<"華氏or攝氏(1 or 0):\n";
    scanf("%d",&a);
    if (a==0)
    {
    cout <<"請輸入攝氏:\n";
    scanf("%f",&c);
    
    f = (9.0/5.0)*c+32.0;
    cout.width(2);
    cout <<"華氏:" <<f <<"\n";
    }
    else if (a==1)
    {
    cout <<"請輸入華氏:\n";
    scanf("%f",&f);
    c = (f-32.0)*(5.0/9.0);
    cout <<"攝氏= "<<c <<"\n";
    }
    else
    cout <<"Error!!\n";
    system("PAUSE");
    return 0;
}
