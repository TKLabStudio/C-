#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()   
{
    char s1[10],s2[10],s3[20];
    cout<<"�п�Js1�G"; 
    cin>>s1;
    cout<<"�п�Js2�G"; 
    cin>>s2;
    strcpy(s3,s1);
    strcat(s3,s2);
    cout<<"s3="<<s3<<"\n";
    system ("PAUSE");
    return 0;
}
