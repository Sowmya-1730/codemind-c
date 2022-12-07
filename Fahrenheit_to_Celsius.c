#include<stdio.h>
int main()
{
    int fah;
    scanf("%d",&fah);
    float cel;
    cel=(5*(fah-32))/9.0;
    printf("%.2f",cel);
}