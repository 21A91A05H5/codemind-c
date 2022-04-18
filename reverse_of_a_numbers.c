#include<stdio.h>
int main()
{
    int n,res,d,sum=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        sum=(sum*10)+d;
        n=n/10;
    }
    printf("%d",sum);
}
