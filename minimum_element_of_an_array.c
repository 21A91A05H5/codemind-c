#include<stdio.h>
int main()
{
    int n,arr[200],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[0]>arr[i])
        {
            arr[0]=arr[i];
        }
        
    }
    printf("%d",arr[0]);
}