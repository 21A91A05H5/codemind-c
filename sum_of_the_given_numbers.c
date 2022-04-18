#include<stdio.h>
int main()
{
    int n,i,b[100],a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]+b[i]);
        printf("
");
    }
}