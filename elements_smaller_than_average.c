#include<stdio.h>
int main()
{
	int n,arr[100],c=0,i,sum=0;
	int avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum=sum+arr[i];
	}
	avg=sum/n;
	for(i=0;i<n;i++)
	{
	    if(arr[i]<=avg)
	    {
	        c++;
	    }
	   
	}
    printf("%d",c);
}