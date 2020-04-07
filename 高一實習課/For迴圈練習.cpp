#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int i,sum=0,t=0,n=0,;
    cout<<"--------第一題-----------\n"; 
    for(i=0;i<=100;i++)
    {
     sum=sum+1;
     cout<<"sum="<<sum<<" "<<"i="<<i<<"\n";
    } 
    cout<<"--------第二題-----------\n";
    sum=0; 
    for(i=50;i>=0;i=i-2)
    {
     sum=sum+1;
     cout<<"sum="<<sum<<" "<<"i="<<i<<"\n";
    } 
    cout<<"--------第三題-----------\n";
    sum=0; 
    for(i=1;i<=10;i++)
    {
     sum+=i;
     cout<<"sum="<<sum<<" "<<"i="<<i<<"\n";
    } 
    cout<<"--------第四題-----------\n";
    sum=0; 
    for(i=2;i<=92;i=i+10)
    {
     if(i!=22)
     {
      sum=sum+i;
      }
      cout<<"sum="<<sum<<" "<<"i="<<i<<"\n";
    }
    cout<<"--------第五題-----------\n";
    sum=0; 
    for(i=3;sum<=60;i=i+3)
    {
      sum=sum+i;
      cout<<"sum="<<sum<<" "<<"i="<<i<<"\n";
      t=t+1;
    }
    cout<<"總共做了"<<t<<"次\n";
    cout<<"--------第六題-----------\n"; 
    for(i=1;i<=5;i++)
    {
     cout<<"|||ΟωΟ";
    } 
    cout<<"\n\n";
    cout<<"--------第七題-----------\n"; 
    for(i=1;i<=5;i++)
    {
     cout<<"￥ω￥\n";
    } 
    cout<<"--------第八題-----------\n"; 
    for(i=1;i<=12;i++)
    {
    switch(i)
    {
    case 1:
    case 2:
    case 3:
    cout<<"^";
    break;
    
    case 4:
    case 5:
    case 6:
    cout<<"*";
    break;
    
    case 7:
    case 8:
    case 9:    
    cout<<"$";
    break;
    
    default:
    cout<<"%";
    break;
    } 
    }
    cout<<"\n";
    system("PAUSE");
    return 0;
}
