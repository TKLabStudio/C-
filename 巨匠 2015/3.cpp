#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
 
  int a,b;
  printf("請輸入兩個數字\n");
  scanf("%d %d",&a,&b);
  printf("你輸入的兩個數字為 %d 和 %d \n",a,b); 
  
  printf("兩數相加等於%d \n",a+b);
  printf("兩數相減等於%d \n",a-b);
  printf("兩數相乘等於%d \n",a*b);
  printf("兩數相除等於%d \n",a/b);
  
  system("pause");
  
  int c;
  printf("請輸入你要計算的攝氏溫度\n");
  scanf("%d",&c);

  printf("你輸入的攝氏溫度為 %d 度\n",c);
  printf("經轉換後的華氏溫度為 %d F\n",c*9/5+32);
  
  system("pause");
  int x,y;
  printf("假設有一換幣機提供了 1 元、 5 元和 10 元三種硬幣,\n");
  printf("當您輸入要兌換的金額後,程式將會為您算出應支付的最少硬幣值,\n");
 
  scanf("%d",&x);
  y=x/10+(x/10)/5+x%5;
  printf("應支付的最少硬幣值為%d\n",y);
  printf("兌換的金額，10元%d枚，5元%d枚，1元%d枚，\n",x/10,(x%10)/5,x%5);

  system("pause");
  
  int  r,s,t,z,m,n;
  printf("有一個老社區，其中的空地取得非常地困難。隨著社會的進步，人們想要蓋的房子越來越大，但是越大的土地就越難\n取得，因此，越大的土地價格也越高。\n老社區的土地價格便是以土地面積的平方來計算的。\n社區中有一塊三角形的土地，給你那塊土地的邊長，她想請你幫她算算那塊土地價值多少錢？\n");
  printf("請輸入三邊長(單位米)\n");
  scanf("%d %d %d",&r,&s,&t);
  z=(r+s+t)/2;
  m=z*(z-r)*(z-s)*(z-t);
  n=sqrt(m);
  printf("該土地的價值為%d(一坪10萬元計算)",n*100000);
  
  return 0;
}
