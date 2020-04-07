 # include<conio.h>
 # include<stdlib.h>
 # include<stdio.h>
 # include<iostream>
 # include<time.h>
 
 using namespace std;
 
 int main (void)
 
 {
     int a[5]={48,52,68,54,36},c[5]={1,1,1,1,1},n,i,j,temp;
     char ans='y';
     do
     {
        for(i=0;i<5;i++)
        {
          for(n=0;n<5;n++)
          {
            if(a[i]<a[n])
            {
            c[i]++;
            } 
            
          } 
        }    
         
          
      for(i=0;i<5;i++)
     {
      cout<<a[i]<<"   第"<<c[i]<<"名\n";    
     }    
          
      
 
     cout<<"是否在執行一次 Y/N?";
     cin>>ans; 
     }while (ans=='y'||ans=='Y');
     
     system("pause");
     return 0;
     
}
     
