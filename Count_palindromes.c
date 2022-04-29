#include<stdio.h>
int main()
{
    int n,m,arr[100],i,c=0,temp,d,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        temp=arr[i];
        while(temp>0)
        {
            d=temp%10;
            sum=sum*10+d;
            temp/=10;
        }
        if(sum==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}