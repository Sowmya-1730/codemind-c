#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int avg,sum=0,cnt=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            cnt=1;
        }
    }
    if(cnt==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}