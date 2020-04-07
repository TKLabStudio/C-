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
         cout<<"輸入第"<<i+1<<"數：";
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
        cout<<"總和為："<<sum<<" 平均："<<arange<<" 共有"<<t<<"個數小於平均值\n";
        
    system ("PAUSE");
    return 0;
}
     
