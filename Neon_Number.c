#include<stdio.h>
int main()
{
    int n,sq,sum=0;
    scanf("%d",&n);
    sq=n*n;//81
    while(sq>0)
    {
        sum=sum+sq%10;//0=0+1=1+8=9
        sq=sq/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
        
    }
    else
    {
        printf("Not Neon Number");
    }
}
