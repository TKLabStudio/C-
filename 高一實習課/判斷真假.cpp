#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int sc,ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,a;
    cout<<"請輸入sc:\n";
    cin>>sc;
    ans1 = (sc>70)&&(sc<80);
    cout<<"("<<sc<<">70)&&("<<sc<<"<80) 結果(真=1 假=0) ans1="<<ans1<<"\n";
    cout<<"請輸入sc:\n";
    cin>>sc;
    ans2 = (sc>=90)&&(sc<=100);
    cout<<"("<<sc<<">=90)&&("<<sc<<"<=100) 結果(真=1 假=0) ans2="<<ans2<<"\n";
    cout<<"請輸入sc:\n";
    cin>>sc;
    ans3 = (sc<0)||(sc>80);
    cout<<"("<<sc<<"<0)||("<<sc<<">80) 結果(真=1 假=0) ans3="<<ans3<<"\n";
    cout<<"請輸入sc:\n";
    cin>>sc;
    ans4 = (sc<0)&&(sc>100);
    cout<<"("<<sc<<"<0)&&("<<sc<<">100) 結果(真=1 假=0) ans4="<<ans4<<"\n";
    cout<<"請輸入a:\n";
    cin>>a;
    ans5 = (a%2 == 0);
    cout<<"("<<a<<"%2)==0 結果(真=1 假=0) ans5="<<ans5<<"\n";
    cout<<"請輸入a:\n";
    cin>>a;
    ans6 = (a%2 != 1);
    cout<<"("<<a<<"%2)!=0 結果(真=1 假=0) ans6="<<ans6<<"\n";
    cout<<"請輸入sc:\n";
    cin>>sc;
    ans7 = (sc>=90)&&(sc<=100);
    cout<<"("<<sc<<">=90)&&("<<sc<<"<=100) 結果(真=1 假=0) ans7="<<ans7<<"\n";
    cout<<"請輸入sc:\n";
    cin>>sc;
    ans8 = (sc>=80)&&(sc<=90);
    cout<<"("<<sc<<">=80)&&("<<sc<<"<=90) 結果(真=1 假=0) ans8="<<ans8<<"\n";
    cout<<"請輸入sc:\n";
    cin>>sc;
    ans9 = (sc>=100)||(sc<0);
    cout<<"("<<sc<<">=100)||("<<sc<<"<0) 結果(真=1 假=0) ans9="<<ans9<<"\n";
    system("PAUSE");
    return 0;
}
    
