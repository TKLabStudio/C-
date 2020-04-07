#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n;
    char ans;
    again:
    cout<<"請輸入成績:";
    cin>>n;
    
    if ((n>100)||(n<1)) 
    {
    cout<<"錯誤！！\n";
    }
    else
    {
        switch ((n-50)/10)
        {
        case 5: 
        case 4: 
        cout<<"你的成績是:"<<n<<"\n是A等喔~阿不就好棒棒\n";
        break;
        case 3: 
        cout<<"你的成績是:"<<n<<"\n是B等喔~\n";
        break;
        case 2: 
        cout<<"你的成績是:"<<n<<"\n是C等喔~\n";
        case 1: 
        cout<<"你的成績是:"<<n<<"\n是D等喔~\n";
        break;
        default:
        cout<<"你的成績是:"<<n<<"\n是E等喔~欸嘿XD\n";
        }
    }
    answer:
    cout<<"是否執行下次(Y/N)?:\n";
    ans=getch();
    if ((ans=='Y')||(ans=='y'))
    {
        goto again;        
    }
    else if ((ans=='N')||(ans=='n'))
    {
         system("PAUSE");
    }
    else
    {
        cout<<"錯誤！！\n";
        goto answer;
    }
    return 0;
}
