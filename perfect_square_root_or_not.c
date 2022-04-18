#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=sqrt(n);
    if(n-(x*x)==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}