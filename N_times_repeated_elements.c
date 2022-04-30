#include<stdio.h>
int main()
{
    int n,i,a[100],j,count=0,b[100],k=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==m)
        {
            b[k]=a[i];
            a[i]=0;
            k++;
        }
    }
    if(k==0)
    printf("-1");
    else
    {
        for(i=0;i<k;i++)
        printf("%d ",b[i]);
        
    }
}