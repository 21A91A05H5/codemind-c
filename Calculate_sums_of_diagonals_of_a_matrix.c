#include<stdio.h>
int main()
{
    int arr[1000][1000],i,j,n,m,sum=0,sum1=0,res=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
            if(i+j==n-1)
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",sum);
    printf("Secondary Diagonal:%d",sum1);
}