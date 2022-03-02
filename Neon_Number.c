#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,res,d,sq;
    scanf("%d",&n);
    sq=pow(n,2);
    while(sq)
    {
        d=sq%10;
        sum=sum+d;
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