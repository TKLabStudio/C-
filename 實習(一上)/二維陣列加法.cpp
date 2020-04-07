#include <conio.h>
  #include <stdlib.h>
  #include <stdio.h>
  #include <iostream>
  using namespace std;
  int main ()
  #define ROW 3
  #define COL 4
  
  {
      char w='y';
      while(w=='y'||w=='Y')
  {
      int a[ROW][COL]={11,12,13,14,
                       15,16,17,18,
                       19,20,21,22};
      int b[ROW][COL]={11,12,13,14,
                       15,16,17,18,
                       19,20,21,22};
      int c[ROW][COL],i,j;
      
      for(i=0;i<ROW;i++)
      {
      for(j=0;j<COL;j++)
      {
       c[i][j]=a[i][j]+b[i][j];
      }
      }
      
      for(i=0;i<ROW;i++)
      {
      for(j=0;j<COL;j++)
      {
      c[i][j]=a[i][j]+b[i][j];
      }
      }


      for(i=0;i<ROW;i++)
      {
      for(j=0;j<COL;j++)
      {
      cout<<c[i][j]<<"  ";
      }
      cout<<"\n";
      }

        cout<<"continue=? Y/N";
  w=getch();
  cout<<"\n";
  if(w!='y'||w!='y')
  return 0;  
  }
  }
