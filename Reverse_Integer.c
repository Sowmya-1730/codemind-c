#include<stdio.h>
int main()
{
    int n,r,q,sum=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        sum=sum*10+r;
    }
    printf("%d",sum);
}