#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
int main()    
{
    int i=100,*ptr;
    ptr=&i;
    cout<<"i�ܼƦb�O���骺��}�O�G"<<&i<<"\n";

    cout<<"i�ܼƪ����e�O�G"<<i<<"\n";

    cout<<"ptr�ܼƦb�O���骺��}�O�G"<<&ptr<<"\n";

    cout<<"ptr�ܼƪ����e�O�G"<<ptr<<"\n";

    cout<<"�g��*ptr�o�쪺���e�O�G"<<*ptr<<"\n";
    system ("PAUSE");
    return 0;
}
