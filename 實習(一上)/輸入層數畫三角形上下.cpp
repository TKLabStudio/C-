 # include<conio.h>
 # include<stdlib.h>
 # include<stdio.h>
 # include<iostream>
 # include<time.h>
 
 void topstar(int n);
 void downstar(int n);
 using namespace std;
 
 int main (void)
 
 {
     int n;
     cout<<"½Ð¿é¤J¼h¼Æ: ";
     cin>>n;
      
     topstar(n);         
     cout<<"\n";
     downstar(n);
     system("PAUSE"); 
    return 0;  
 }
 
  void topstar(int n)
  {
       int i,j,k;
       for (i=1;i<=n;i++)
      {
          
          for(j=1;j<=35-i*2;j++)
          cout<<" ";
          for(k=1;k<=2*i-1;k++)
          cout<<"¡¯"; 
       cout<<"\n";   
      }
 } 
 void downstar(int n)
  {
       int i,j,k;
       for (i=n;i>=1;i--)
      {
          
          
               for (j=1;j<=35-i*2;j++)
          {
               cout<<" ";
          }
          
          for  (k=1;k<=i*2-1;k++)
          {
               cout<<"¡¯";
          }
       cout<<"\n";   
      }
  }    

