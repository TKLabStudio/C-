#include <conio.h>
  #include <stdlib.h>
  #include <stdio.h>
  #include <iostream>
  using namespace std;
  int main ()
  #define ROW 9
  #define COL 9
  
  {
      char w='y';
      while(w=='y'||w=='Y')
  {
      int a[ROW][COL],i,j;
      for(i=0;i<ROW;i++)
      {
      for(j=0;j<COL;j++)
      {
      a[i][j]=(i+1)*(j+1);
      }
      }

      for(i=0;i<ROW;i++)
      {
      for(j=0;j<COL;j++)
      {
      cout.width(2);
      cout<<i+1<<"*";
      cout.width(1);
      cout<<j+1<<"=";
      cout.width(2);
      cout<<a[i][j]<<" ";
      }
      }

        cout<<"continue=? Y/N";
  w=getch();
  cout<<"\n";
  if(w!='y'||w!='y')
  return 0;  
  }
  }
