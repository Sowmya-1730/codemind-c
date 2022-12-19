#include<stdio.h>
int main()
{    
    int uc;
     float cpu,bl,sc,ta;
     scanf("%d",&uc);
     if(uc<200)
     {
         cpu=1.20;
     }
     else if(uc>=200&&uc<400)
     {
       cpu=1.50;  
     }
     else if(uc>=400&&uc<600)
     {
         cpu=1.80;
     }
     else 
     {
         cpu=2.00;
     }
     bl=uc*cpu;
     if(bl>400)
     {
         sc=bl*0.15;
     }
     else
     {
         sc=100;
     }
     ta=bl+sc;
     printf("%.2f",ta);
     
}

