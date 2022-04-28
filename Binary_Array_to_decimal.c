#include<stdio.h>
#include<math.h>
int main()
{
	int n,arr[100],i,sum=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	j=0;
	for(i=n-1;i>=0;i--)
	{
		sum=sum+(pow(2,j)*arr[i]);
		j++;
	}
	printf("%d ",sum);
}