#include<stdio.h>
#include<math.h>
int main()
{
  int n,d;
  scanf("%d",&n);
  d=(int)log10(n)+1;
  int q,r,even=0,odd=0,count=0;
  q=n;
  while(q!=0)
  {
    r=q%10;
    if(r%2==0)
    {
      even++;
    }
    else
    {
      odd++;
    }
    q=q/10;
  }
  if(even<d&&odd<d)
  {
    printf("Mixed");
  }
  else if(even==d)
  {
    printf("Even");
  }
  else
  {
    printf("Odd");
  }
}