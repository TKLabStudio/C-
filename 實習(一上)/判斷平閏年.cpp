#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int a,a4,a100,a400;
    cout<<"�п�J�~��:";
    cin>>a;
    a4=a%4;
    a100=a%100;
    a400=a%400;
    
    if(a4!=0)
    {
         cout<<"�o�O���~�I�I\n"; 
    }
    else if(a100!=0)
    {
         cout<<"�o�O�|�~�I�I\n"; 
    }
        
    else if(a400!=0)
    {
         cout<<"�o�O���~�I�I\n"; 
    }   
    else
    {
         cout<<"�o�O�|�~�I�I\n"; 
    }
    system("PAUSE");
    return 0;
}
