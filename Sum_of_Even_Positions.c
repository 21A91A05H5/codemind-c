#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],i,j,c=0,sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum1=sum1+arr[i];
        }
        // if(i%2!=0)
        // {
        //     sum2=sum2+arr[i];
        // }
    }
   // c=sum2-sum1;
    printf("%d",sum1);
}