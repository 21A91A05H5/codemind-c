#include<stdio.h>
void search(int *arr,int n,int m)
{
	int j,c=0;
	for(j=0;j<n;j++)
    {
    	if(arr[j]==m)
    	{
    		c++;
    	//	return j;//
    	//	return 1; element found return 1
		}
	}
	if(c>0)
     	printf("%d",c);
	if(c==0)
	  printf("0");
}
int main()
{
	int n,arr[100],b[100],i,j,m,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&m);
    search(arr,n,m);
	
}