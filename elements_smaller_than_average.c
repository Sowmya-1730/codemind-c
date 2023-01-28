#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0,avg;
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    int count=0;
    for(i=0;i<n;i++)
    {
      if(a[i]<=avg)
      {
          count++;
      }
    }
    printf("%d",count);
}