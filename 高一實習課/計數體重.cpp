 # include<conio.h>
 # include<stdlib.h>
 # include<stdio.h>
 # include<iostream>
 # include<time.h>
  #define ROW 3
 using namespace std;
 
 int main (void)
 
 {
     char w='y';
     while(w=='y'||w=='Y')
     {       
     int a[ROW],c[ROW],n=0,i=0,j=0,t=0;
        for(j=0;j<ROW;j++)
        { 
         c[j]=1;
        }
         
        for(j=0;j<ROW;j++)
        { 
         cout<<"��J��"<<j+1<<"�ӤH���魫(��J-99����)";
         cin>>a[j];
         if(a[j]==-99)    
         {
         break;
         } 
         t++;
         }
      
      for(i=0;i<t;i++)
        {
          for(n=0;n<t;n++)
          {
            if(a[i]<a[n])
            {
            c[i]++;
            } 
          }
        }
      
      
      for(i=0;i<t;i++)
     {
      cout<<"��"<<i+1<<"��  "<<a[i]<<"   ��"<<c[i]<<"��\n";    
     }    
          
      
  cout<<"continue=? Y/N";
  w=getch();
  cout<<"\n";
  if(w!='y'||w!='y')
  
  return 0;  
  }
  }
     
