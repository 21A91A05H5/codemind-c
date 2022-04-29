#include<stdio.h>
int main()
{
    int n,m,arr[100],i,sum=0,c=0,temp,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        //printf("%d ",arr[i]);
       while(temp>0)
       {
           d=temp%10;
           sum=sum+d;
           temp/=10;
       }
       //sum=sum+arr[i];
    }
   printf("%d",sum);
}