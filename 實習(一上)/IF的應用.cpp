#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
    cout<<"================�Ĥ@��===============//\n";
    int i=100, j=200;
    cout<<"i= "<<i<<"j= "<<j<<"\n";
    if(i == j)
    {
         cout<<"i �M j �O�۵�\n";
    }
    else
    {
         cout<<"i �M j �O���۵�\n";
    }
    
    cout<<"================�ĤG��===============//\n";
    int score;
    cout<<"�п�J�z�����Z:";
    cin>>score;
    if(score >= 60)
    {
         cout<<"�z�����Z�O"<<score<<"���A���ߩp�q�L�F�I�I�I\n";
    }
    else
    {
         cout<<"�z�����Z�O"<<score<<"���A��p�z�Q��F�I�I�I\n";
    }
    
    cout<<"================�ĤT��===============//\n";
    cout<<"�п�J�z�����Z:";
    cin>>score;
    if(score >= 60)
    {
         score += 10;
    }
    else
    {
         score += 5;
    }
    cout<<"�z�����Z�O"<<score<<"\n";
        
    cout<<"================�ĤT��===============//\n";
    cout<<"�п�J�z�����Z:";
    cin>>score;
    if(score >= 60)
    {
         score += 10;
    }
    cout<<"�z�����Z�O"<<score<<"\n";
        
    cout<<"================�ĥ|��===============//\n";
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
    ads = (number >= 0) ?number :-number;
    cout<<number<<"������ȬO:"<<ads<<"\n"; 
        
    cout<<"================�B�~===============//\n";
    int a;
    float c,f;
    cout <<"�ؤ�or���(1 or 0):\n";
    scanf("%d",&a);
    if (a==0)
    {
    cout <<"�п�J���:\n";
    scanf("%f",&c);
    
    f = (9.0/5.0)*c+32.0;
    cout.width(2);
    cout <<"�ؤ�:" <<f <<"\n";
    }
    else if (a==1)
    {
    cout <<"�п�J�ؤ�:\n";
    scanf("%f",&f);
    c = (f-32.0)*(5.0/9.0);
    cout <<"���= "<<c <<"\n";
    }
    else
    cout <<"Error!!\n";
    system("PAUSE");
    return 0;
}
