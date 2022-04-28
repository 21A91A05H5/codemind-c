#include<stdio.h>
#include<math.h>
int main()
{
	int n,arr[100],i,c=0,j,d=0;
	int sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	 for(i=0;i<n/2;i++)
	 {
	     c=c+arr[i];
	 }
	 for(i=n/2;i<n;i++)
	 {
	     d=d+arr[i];
	 }
	 sum=c+d;
	 printf("%d
%d",c,d);
	
}