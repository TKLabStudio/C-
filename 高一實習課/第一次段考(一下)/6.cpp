 # include<conio.h>
 # include<stdlib.h>
 # include<stdio.h>
 # include<iostream>
 # include<time.h>
 using namespace std;
 
 int main (void)
 {
     int sum=0,a[5],i,t=0;
     float arange;

        for(i=0;i<5;i++)
        { 
         cout<<"��J��"<<i+1<<"�ơG";
         cin>>a[i];
         }
      
          
       for(i=0;i<5;i++)
        {
        sum=a[i]+sum;
        }
        arange=sum/5;
        

      for(i=0;i<5;i++)
        {
            if(a[i]<arange)
            {
            t++;
            } 
        }
        cout<<"�`�M���G"<<sum<<" �����G"<<arange<<" �@��"<<t<<"�ӼƤp�󥭧���\n";
        
    system ("PAUSE");
    return 0;
}
     
