#include<stdio.h>
int main()
{
    int i,j,n,c=1;
    scanf("%d",&n);
    if(n>2 && n<101)
{
    for(i=1;i<2*n;i++)
    {
        for(j=1;j<=c;j++)
        {
        	printf("*");
        }
        	if(i<n)
        	   c++;
        	else
			  c--;   
        
        printf("
");
    }
}
    else
    {
        printf("The pattern is not possible");
    }
}