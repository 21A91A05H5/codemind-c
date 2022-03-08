#include<stdio.h>
int main()
{
    int n,i,c=0,even=0,odd=0,d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(d%2==0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
        c++;
        n=n/10;
    }
    if(c>even && c>odd)
    {
        printf("Mixed");
    }
    else if(c==odd)
    {
        printf("Odd");
    }
    else if(c==even)
    {
        printf("Even");
    }
}