#include<stdio.h>
int main()
{
    int n,arr[100],i,odd=0,even=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even=even+arr[i];
        }
        else if(arr[i]%2!=0)
        {
            odd=odd+arr[i];
        }
    }
    if(odd>=even)
    {
    printf("%d",odd-even);
    }
    else if(even>=odd)
    {
        printf("%d",even-odd);
    }
}