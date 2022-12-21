#include<stdio.h>
int main()
{
    int n,i,sq,s=0,s1=0,ad,sq2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sq=i*i;
        s=s+sq;
    }
    s1=n*(n+1)/2;
    sq2=s1*s1;
    ad=sq2-s;
    printf("%d",ad);
    
}