#include <conio.h>
  #include <stdlib.h>
  #include <stdio.h>
  #include <iostream>
  using namespace std;
  #define ROW 2
  #define COL 3
  
  int main ()
  {
      char w='y';
      while(w=='y'||w=='Y')
  {
      int a[ROW][COL],i=0,j=0;
      for(i=0;i<ROW;i++)
      {
      for(j=0;j<COL;j++)
      {
      cout<<"input a["<<i<<"]["<<j<<"]=";
      cin>>a[i][j];
      }
      }

      for(i=0;i<ROW;i++)
      {
      for(j=0;j<COL;j++)
      {
      cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<"  ";
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
