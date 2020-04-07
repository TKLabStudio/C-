  # include<conio.h>
 # include<stdlib.h>
 # include<stdio.h>
 # include<iostream>
 using namespace std;
 
 int main (void)
  
 {         
     int i,j,k;
     int a[3][2]={1,4,
                  2,5,                
                  3,6};
     int b[2][3]={7,8,9,  
                  10,11,12};
     int c[3][3];
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {            
            c[i][j]=0;
            for(k=0;k<2;k++)
            {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }           
         }   
     }             
     for(i=0;i<3;i++)
     {     
           for(j=0;j<3;j++)
         {
          
          cout.width(3);
          cout<<c[i][j];
          
         }
           cout<<"\n";
     }
     
   
   
   system("pause");
   return 0;
     
 }           
