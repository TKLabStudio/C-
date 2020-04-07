  #include <conio.h>
  #include <stdlib.h>
  #include <stdio.h>
  #include <iostream>
  using namespace std;
  int main ()
  {
  char w='y';
  while(w=='y'||w=='Y')
  {
  char a[50];
  float middle,d;                     
  int i=0,tot=0,ture=0,q,w;
  cout<<"請輸入一字串";
  cin>>a;
  while(a[i]!='\0')
  {
  tot++;
  i++;
  }
  middle=(tot-1)/2.0;
  for(d=0;d<=middle;d++)
  {
  q=middle+0.5+d;
  w=middle-d;
  //cout<<d<<"\n\n"<<middle<<"\n\n"<<q<<"\n\n"<<w<<"\n\n";
  if(a[q]==a[w])
  ture++;
  }
  if(ture==d)
  cout<<"對稱";   
  else
  cout<<"不對稱";       
  cout<<"continue=? Y/N";
  w=getch();
  cout<<"\n";
  if(w!='y'||w!='y')
  return 0;  
  }
  }
