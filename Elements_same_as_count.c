#include<stdio.h>
int main()
{
    int n,arr[100],i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
       int c=0;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                sum++;
            }
        }
        if(sum==arr[i])
        {
            printf("%d ",arr[i]);
            arr[i]=0;
            //printf("%d",c);
        }
        else
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("-1");
    }
}