#include<stdio.h>
int main()
{
    int n,i,arr[100],a=0,b=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        a=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                a++;
            }
        }
        if(a==2)
        {
            b++;
        }
    }
    printf("%d",b);
}