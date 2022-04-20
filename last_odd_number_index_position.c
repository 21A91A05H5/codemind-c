#include<stdio.h>
int main()
{
    int n,arr[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n;i>0;i--)
    {
        if(arr[i]%2!=0)
        {
            printf("%d",i);
            break;
        }
    }
}