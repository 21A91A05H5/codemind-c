#include<stdio.h>
int factorcount(int n)
{
	int i,fc=2;
	if(n==1)
	{
		return 1;
	}
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			fc++;
		}
	}
	return fc;
}
int main()
{
	int n,fc;
	scanf("%d",&n);
	fc=factorcount(n);
	if(fc==2)
	{
		printf("prime");
	}
	else
	{
		printf("not a prime");
	}
}