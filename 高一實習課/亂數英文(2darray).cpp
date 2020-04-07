#include <conio.h>
  #include <stdlib.h>
  #include <stdio.h>
  #include <iostream>
  using namespace std;
  int main ()
  #define ROW 3
  #define COL 15
  
  {
      char w='y';
      while(w=='y'||w=='Y')
  {
      srand((unsigned)time(NULL));
      char a[ROW][COL];
      int i,j;
      for(i=0;i<ROW;i++)
      {
      for(j=0;j<COL;j++)
      {
      a[i][j]=rand()%26+65;
      cout<<a[i][j]<<"  ";
      }
      a[i][j]='\0';
      cout<<"\n";
      }

      for(i=0;i<ROW;i++)
      {
      for(j=0;j<COL;j++)
      {
      cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<" ";
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
