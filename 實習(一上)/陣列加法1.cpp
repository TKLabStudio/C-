 # include<conio.h>
 # include<stdlib.h>
 # include<stdio.h>
 # include<iostream>
 # include<time.h>
 
 using namespace std;
 
 int main (void)
 
 {
    int a[3][2];
    int b[2][3];
    int c[3][3]; 
        
                 
    int i,j,l,k;
    
    cout<<"輸入一個三列二行的數列\n";
    
    for(i=0;i<3;i++)
     {
        for(j=0;j<2;j++)
         {
           cout<<"a["<<i<<"]["<<j<<"]= ";
           cin>>a[i][j];
         } 
     }
    
    cout<<"輸入一個二列三行的數列\n";
    
    for(i=0;i<2;i++)
     {
        for(j=0;j<3;j++)
         {
           cout<<"b["<<i<<"]["<<j<<"]= ";
           cin>>b[i][j];
         } 
     }
    
    
    for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
         {
            c[i][j]=0;
            for(l=0;l<2;l++)
            {
             c[i][j]=c[i][j]+a[i][l]*b[l][j];
            }
         }
     }
     
     for(i=0;i<3;i++)
     {
       
       cout<<"|";
       for(j=0;j<2;j++)
        {
          
          cout.width(3);
          cout<<a[i][j];
          
         } 
         cout<<" |";
         
       if(i==1)
       {
       cout<<" + ";
       }
       else
       {
       cout<<"   ";
       }
       
       if(i<2)
       {
       cout<<"|";
       for(j=0;j<3;j++)
         {
          
          cout.width(3);
          cout<<b[i][j];
          
         }
       cout<<" |";
       }
        else
        {
        cout<<"            ";
        }
        if(i==1)
       {
       cout<<" = ";
       }
       else
       {
       cout<<"   ";
       }
        
        cout<<"|";
        for(j=0;j<3;j++)
         {
          
          cout.width(3);
          cout<<c[i][j];
          
         }
     cout<<" |";
     cout<<"\n";
     }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     system("pause");
     return 0;
     
}
     
