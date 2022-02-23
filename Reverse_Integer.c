#include<stdio.h>
int main()
{
    short int n,res,d,sum=0;
    scanf("%hd",&n);
    while(n)
    {
        d=n%10;
        sum=(sum*10)+d;
        n=n/10;
    }
    printf("%hd",sum);
}