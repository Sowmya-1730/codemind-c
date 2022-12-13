#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    float ci;
    scanf("%d%d%d",&p,&r,&t);
    ci=p*(pow((1+(r/100.0)),t)-1);
    printf("%.2f",ci);
}