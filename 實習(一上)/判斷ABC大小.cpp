#include <stdlib.h>  
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    int a,b,c,t;
    cout<<"�п�Ja:";
    cin>>a;
    cout<<"�п�Jb:";
    cin>>b;
    cout<<"�п�Jc:";
    cin>>c;
    if(a>b)
    {
         if(a>c)
         {
            if(b>c)
            {
                cout<<"a>b>c\n";
            }  
            else
            {
                cout<<"a>c>b\n";
            }
            }
         else
         {
          cout<<"c>a>b\n";
         }
    }
    
    else if(b>c)
    {
        if(a>c)
        {
            cout<<"b>a>c\n";
        }
        else
        {
            cout<<"b>c>a\n";
        }
    }
    else
    {
            cout<<"c>b>a\n";
    } 
    
    system("PAUSE");
    return 0;
}
