#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int i,sum=0,t=0,n=0,;
    cout<<"--------�Ĥ@�D-----------\n"; 
    for(i=0;i<=100;i++)
    {
     sum=sum+1;
     cout<<"sum="<<sum<<" "<<"i="<<i<<"\n";
    } 
    cout<<"--------�ĤG�D-----------\n";
    sum=0; 
    for(i=50;i>=0;i=i-2)
    {
     sum=sum+1;
     cout<<"sum="<<sum<<" "<<"i="<<i<<"\n";
    } 
    cout<<"--------�ĤT�D-----------\n";
    sum=0; 
    for(i=1;i<=10;i++)
    {
     sum+=i;
     cout<<"sum="<<sum<<" "<<"i="<<i<<"\n";
    } 
    cout<<"--------�ĥ|�D-----------\n";
    sum=0; 
    for(i=2;i<=92;i=i+10)
    {
     if(i!=22)
     {
      sum=sum+i;
      }
      cout<<"sum="<<sum<<" "<<"i="<<i<<"\n";
    }
    cout<<"--------�Ĥ��D-----------\n";
    sum=0; 
    for(i=3;sum<=60;i=i+3)
    {
      sum=sum+i;
      cout<<"sum="<<sum<<" "<<"i="<<i<<"\n";
      t=t+1;
    }
    cout<<"�`�@���F"<<t<<"��\n";
    cout<<"--------�Ĥ��D-----------\n"; 
    for(i=1;i<=5;i++)
    {
     cout<<"|||�R�s�R";
    } 
    cout<<"\n\n";
    cout<<"--------�ĤC�D-----------\n"; 
    for(i=1;i<=5;i++)
    {
     cout<<"�D�s�D\n";
    } 
    cout<<"--------�ĤK�D-----------\n"; 
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
