 # include<conio.h>
 # include<stdlib.h>
 # include<stdio.h>
 # include<iostream>
 # include<time.h>
 
 using namespace std;
 
 int main (void)
 
 {
     int r[20],n,i,j,temp;
     char ans='y';
     do
     {
 
     
     srand((unsigned)time(NULL));
     for(n=0;n<=20;n++)
     {
      r[n]=(rand()%1000)+1;
     }
      cout<<"原數列  "; 
      for(n=0;n<=20;n++)
     {
      cout.width(5);
      cout<<r[n];
     }     
       cout<<"\n";
     
     for(n=0;n<=20;n++)
     {
        for(i=0;i<=20;i++)
        {
           if(r[n]>r[i])
           {
             temp=r[n];
             r[n]=r[i];
             r[i]=temp;
            }
        }
     }
      cout<<"新數列  "; 
      for(n=0;n<=20;n++)
     {
      cout.width(5);
      cout<<r[n];
     } 
     cout<<"\n"    ;
     cout<<"是否在執行一次 Y/N?";
     cin>>ans; 
     }while (ans=='y'||ans=='Y');
     
     system("pause");
     return 0;
     
}
     
