#include<stdio.h>
int main()
{
    int a,b,i,n2,n3;
    scanf("%d%d",&a,&b);
    
    for(i=(a+1);i<b;i++)
    {
        n2=i*i;
        n3=i*i*i;
    printf("%d %d %d
",i,n2,n3);
    }
}