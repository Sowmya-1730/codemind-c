#include<stdio.h>
int main()
{
    int N,M,K,t;
  scanf("%d%d%d",&N,&M,&K);
  t=M*K;
  if(t>=N)
  {
      printf("YES");
  }
  else
  {
      printf("NO");
  }
}