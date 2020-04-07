#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()    
{
    char str[20],*q;
    int i=0,j,m;
    
    cout<<"Please input word:";
    cin>>str;
    q=str; 
        
    cout<<"Output word:";
    while(*(q+i)!='\0')
    {
    cout.width(3);
     cout<<*(q+i);
     i++;
    for(j=1;j<20000;j++)
      for(m=0;m<5000;m++);
    }
    cout<<"\n";
    system("PAUSE");
    return 0; 
}
