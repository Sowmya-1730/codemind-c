#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    float result;
    result=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%.4f",result);
}