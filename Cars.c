#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int c;
	c=(n/4)+1;
	if(n<=4)
	{
		printf("1");
	}	
	else if(n%2==0&&n%4==0)
	{
		printf("%d",n/4);
	}
	else if(n%2==0&&n%4!=0)
	{
		printf("%d",c);
	}
	else
	{
		printf("%d",c);
	}
}