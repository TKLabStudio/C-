#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    ch = getchar();             //輸入字元ch 
    printf("the char is ");
    putchar(ch);                //列印字元ch 
    putchar(10);                //列印換行符號 
    
    system("PAUSE");
    return 0;    
}
