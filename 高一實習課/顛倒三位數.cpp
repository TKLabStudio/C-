#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int x,ans1,ans2,ans3,ans4;
    cout <<"�п�J�T���:";
    cin >>x;
    ans1=x/100;
    ans2=x/10%10;
    ans3=x%100%10;
    ans4=ans3*100+ans2*10+ans1;
    cout<<x<<"���˼ƬO:"<<ans4<<"\n";
    system ("PAUSE");
    return 0;
}
