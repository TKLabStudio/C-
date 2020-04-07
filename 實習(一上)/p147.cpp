#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()    
{
    int i=100,*ptr;
    ptr=&i;
    cout<<"i變數在記憶體的位址是："<<&i<<"\n";

    cout<<"i變數的內容是："<<i<<"\n";

    cout<<"ptr變數在記憶體的位址是："<<&ptr<<"\n";

    cout<<"ptr變數的內容是："<<ptr<<"\n";

    cout<<"經由*ptr得到的內容是："<<*ptr<<"\n";
    system ("PAUSE");
    return 0;
}
