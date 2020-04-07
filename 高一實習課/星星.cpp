#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    
    int i,j,n,m;
    
    for(n=0;n<200;n++)
    { 
    for(i=1;i<8;i++)
    {
      cout<<"\n\n\n\n";
      cout<<"      ";
      for(j=1;j<8-i;j++)
      cout<<"¡¸";
      cout<<"¡¹";
      for(j=1;j<=i;j++)
      cout<<"¡¸";
      
      for(j=1;j<i;j++)
      cout<<"¡¸";
      cout<<"¡¹";
      for(j=1;j<=8-i;j++)
      cout<<"¡¸";
      for(j=1;j<20000;j++)
      for(m=0;m<8000;m++);
      system("CLS");
      } 
       
       
       for(i=1;i<8;i++)
    {
      cout<<"\n\n\n\n";
      cout<<"      ";
      for(j=1;j<i;j++)
      cout<<"¡¸";
      cout<<"¡¹";
      for(j=1;j<=8-i;j++)
      cout<<"¡¸";
      
      for(j=1;j<8-i;j++)
      cout<<"¡¸";
      cout<<"¡¹";
      for(j=1;j<=i;j++)
      cout<<"¡¸";
      for(j=1;j<20000;j++)
      for(m=0;m<8000;m++);
      system("CLS");
    }    
    
    for(i=1;i<16;i++)
    {
      cout<<"\n\n\n\n";
      cout<<"      ";
      for(j=1;j<i;j++)
      cout<<"¡¸";
      cout<<"¡¹";
      for(j=1;j<=16-i;j++)
      cout<<"¡¸";
      
      for(j=1;j<20000;j++)
      for(m=0;m<8000;m++);
      system("CLS");
    }    
    
        for(i=1;i<16;i++)
    {
      cout<<"\n\n\n\n";
      cout<<"      ";
      for(j=1;j<16-i;j++)
      cout<<"¡¸";
      cout<<"¡¹";
      for(j=1;j<=i;j++)
      cout<<"¡¸";
      
      for(j=1;j<20000;j++)
      for(m=0;m<8000;m++);
      system("CLS");
    }    
    
}
} 

