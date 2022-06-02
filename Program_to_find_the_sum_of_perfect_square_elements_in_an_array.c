#include<stdio.h>
#include<math.h>
int main()
{
	int n,j,arr[100],sum=0,i;
	float res;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	for(j=0;j<n;j++)
	{
		res=sqrt(arr[j]);
		i=res;
		if(i==res)
		{
			sum=sum+arr[j];
		}
		else
		{
			continue;
		}
		
	}
	printf("%d ",sum);
}