#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int n50,n10,n5,n1,n,x,price;
    cout<<"請輸入商品金額(100元以內):";
    cin>>x;
    n=100-x;
    n50=n/50;
    n10=(n-n50*50)/10;
    n5=(n-n50*50-n10*10)/5;
    n1=(n-n50*50-n10*10-n5*5)/1;
    cout<<"找回50元硬幣:"<<n50<<"個\n";
    cout<<"找回10元硬幣:"<<n10<<"個\n";
    cout<<"找回5元硬幣:"<<n5<<"個\n";
    cout<<"找回1元硬幣:"<<n1<<"個\n";
    system("PAUSE");
    return 0;
}
    
    
