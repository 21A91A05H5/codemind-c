#include<stdio.h>
int rec(int *arr,int se,int i,int j)
{
    	int mid;
		mid=(i+j)/2;
		if(i>j)
		{
			return 0;
		}
    	if(arr[mid]==se)
    	{
    	    return 1;
		}
		else if(arr[mid]>se)
		{
			j=mid-1;
		}
		else if(arr[mid]<se)
		{
			i=mid+1;
		}
	 return rec(arr,se,i,j);
	
}
int main()
{
	int n,se,arr[100],i,j,mid;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	i=0;j=n-1;
	if(rec(arr,se,i,j))
	{
		printf("True ");
	}
	else
	{
		printf("False ");
	}
  //  printf("%d",rec(arr,se,i,j));
    
}