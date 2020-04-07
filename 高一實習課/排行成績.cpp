 # include<conio.h>
 # include<stdlib.h>
 # include<stdio.h>
 # include<iostream>
 # include<time.h>
 #define ROW 3
 using namespace std;
 
 int main (void)
 {
     int sum[ROW],ch[ROW],en[ROW],ma[ROW],b[ROW],n,i,j,t=0;
     float arange[ROW];
     char w='y';
     while(w=='y'||w=='Y')
     {      
     for(j=0;j<ROW;j++)
        { 
         b[j]=1;
        } 
        for(j=0;j<ROW;j++)
        { 
         cout<<"輸入第"<<j+1<<"個人的國文成績(輸入-99結束)";
         cin>>ch[j];
         if(ch[j]==-99)    
         {
         break;
         } 
         t++;
         }
      
        for(j=0;j<t;j++)
        { 
         cout<<"輸入第"<<j+1<<"個人的英文成績";
         cin>>en[j]; 
        } 
        
        for(j=0;j<t;j++)
        { 
         cout<<"輸入第"<<j+1<<"個人的數學成績";
         cin>>ma[j]; 
        } 
          
       for(i=0;i<t;i++)
        {
        sum[i]=ch[i]+en[i]+ma[i];
        arange[i]=sum[i]/3;
        }
        
      
      for(i=0;i<t;i++)
        {
          for(n=0;n<t;n++)
          {
            if(sum[i]<sum[n])
            {
            b[i]++;
            } 
          }
        }
      
     cout<<" 座號 國文 英文 數學  總分 平均   排名\n"; 
      for(i=0;i<t;i++)
     {
      cout<<"第"<<i+1<<"位";    
      cout.width(4);
      cout<<ch[i];
      cout.width(5);
      cout<<en[i];
      cout.width(5);
      cout<<ma[i];
      cout.width(6);
      cout<<sum[i];
      cout.width(5);
      cout<<arange[i];
      cout<<"  第" ;
      cout.width(4);
      cout<<b[i];
      cout<<" 名\n"; 
     }    
          
      
 
        cout<<"continue=? Y/N";
  w=getch();
  cout<<"\n";
  if(w!='y'||w!='y')
  return 0;  
  }
  }
     
