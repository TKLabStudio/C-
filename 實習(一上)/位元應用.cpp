#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    cout<<"================第一個===============//\n";
    int i=100,j=200,k=300;
    cout <<"i="<<i;
    cout <<"j="<<j;
    cout <<"k="<<k;
    
    cout<<"\n================第二個===============//\n";
    cout <<"i="<<i<<"\n";
    cout <<"j="<<j<<"\n";
    cout <<"k="<<k<<"\n"; 
    
    cout<<"================第三個===============//\n";
    cout <<"i="<<i<<"\n\n";
    cout <<"j="<<j<<"\n\n";
    cout <<"k="<<k<<"\n\n";
    
    cout<<"================第四個===============//\n";
    cout <<"i="<<i<<"\n"<<"j="<<j<<"\n"<<"k="<<k<<"\n";
    cout<<"over\n";
    
    cout<<"================第五個===============//\n";
    cout <<"請輸入整數i:";
    cin >>i;
    cout <<"請輸入整數j:";
    cin >>j;
    cout <<"請輸入整數k:";
    cin >>k;
    cout <<"i="<<i<<", "<<"j="<<j<<", "<<"k="<<k<<"\n";
    
    cout<<"================第七個===============//\n";
    double x,y,z;
    cout <<"請輸入浮點數x:";
    cin >>x;
    cout <<"請輸入浮點數y:";
    cin >>y;
    cout <<"請輸入浮點數z:";
    cin >>z;
    cout <<"x="<<x<<", "<<"y="<<y<<", "<<"z="<<z<<"\n";
    
    cout<<"================第八個===============//\n";
    cout <<"請輸入浮點數x:";
    cin >>x;
    cout <<"請輸入浮點數y:";
    cin >>y;
    cout <<"請輸入浮點數z:";
    cin >>z;
    cout <<"x=";
    cout.width(8.1);
    cout <<x<<", ";
    cout <<"y=";
    cout.width(8.1);
    cout <<y<<", ";
    cout <<"z=";
    cout.width(8.1);
    cout <<z<<"\n";
                            
    system ("PAUSE");
    return 0;
}
