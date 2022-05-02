#include<stdio.h>
int main()
{
    int n,arr[100],i,j,sum=0,a,b,c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            printf("%d ",arr[i]);
            c++;
        }
        
    }
    if(c==0)
    {
        printf("-1");
    }
    // for(i=0;i<c;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // for(i=d+1;i<n;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
   
}