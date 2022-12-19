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
        cpu=1.40;
    }
    else if(uc>=400&&uc<600)
    {
        cpu=1.60;
    }
    else if(uc>=600&&uc<800)
    {
        cpu=1.80;
    }
    else
    {
        cpu=2.00;
    }
    bl=uc*cpu;
    if(bl>=400)
    {
        sc=bl*0.15;
    }
    else
    {
        sc=0.00;
    }
    ta=bl+sc;
    printf("Units Consumed: %d
",uc);
    printf("Cost per Unit: %.2f
",cpu);
    printf("Bill: %.2f
",bl);
    printf("Surcharge: %.2f
",sc);
    printf("Total Amount: %.2f
",ta);
}