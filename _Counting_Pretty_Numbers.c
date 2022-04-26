#include<stdio.h>
int main()
{
    int n,i,a[100],b[100],j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=a[i];j<=b[i];j++)
        {
            if(j%10==2 || j%10==3 || j%10==9)
            {
                c++;
            }
        }
        printf("%d
",c);
        
    }
}