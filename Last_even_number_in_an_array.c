#include<stdio.h>
int main()
{
    int n,num,i,arr[200],j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       if(arr[i]%2==0)
       {
           num=arr[i];
       }
    }
    printf("%d",num);
}