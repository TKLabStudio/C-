#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n;
    cout<<"請輸入成績:";
    cin>>n;
    if ((n>100)||(n<1)) 
    {
    cout<<"錯誤！！\n";
    }
    else if ((n>=90)&&(n<=100)) 
    {
    cout<<"你的成績是:"<<n<<"\n是A等喔~阿不就好棒棒\n";
    }
    else if (n>=80)
    {
    cout<<"你的成績是:"<<n<<"\n是B等喔\n";
    }
    else if (n>=70)
    {
    cout<<"你的成績是:"<<n<<"\n是C等喔\n";
    }
    else if (n>=60) 
    {
    cout<<"你的成績是:"<<n<<"\n是D等喔\n";
    }
    else
    {
    cout<<"你的成績是:"<<n<<"\n是E等喔~欸嘿XD\n";
    }
    system("PAUSE");
    return 0;
}
