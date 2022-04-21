#include<stdio.h>
int main()
{
    int n,i,c=0,r,j;
    scanf("%d%d",&n,&r);
    for(i=n;i<=r;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
              c++;
            }
        }
        if(c==2)
        {
            printf("%d
",i);
        }
    }
}