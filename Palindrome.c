#include<stdio.h>
int main()
{
  int n,s=0,r,q;
  scanf("%d",&n);
  q=n;
  while(q!=0)
  {
      r=q%10;
      q=q/10;
      s=s*10+r;
  }
  if(s==n)
  {
      printf("Palindrome");
  }
  else
  {
      printf("Not Palindrome");
  }
}
