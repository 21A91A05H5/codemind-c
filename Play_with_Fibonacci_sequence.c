#include<stdio.h>
int main()
{
    int n,f=0,l=1,i,sum;
    scanf("%d",&n);
    sum=f+l;
    printf("%d %d ",f,l);
    for(i=3;i<=n;i++)
    {
        printf("%d ",sum);
        f=l;
        l=sum;
        sum=f+l;
    }
}