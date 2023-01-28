#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    int sum=0,sum1=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
          sum=sum+a[i];
        }
        else
        {
          sum1=sum1+a[i];
        }
    }
    int abd;
    abd=abs(sum-sum1);
    printf("%d",abd);
    
}