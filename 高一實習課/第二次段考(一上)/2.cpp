#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    float number,ads;
    cout<<"�п�J�@�Ʀr:";
    cin>>number;
    if(number >= 0 )
    {
        ads = number;
    }
    else
    {
        ads = -number;
    }
    cout<<number<<"������ȬO:"<<ads<<"\n"; 
    
    system("PAUSE");
    return 0;
}
