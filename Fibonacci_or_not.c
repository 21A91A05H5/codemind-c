#include<stdio.h>
int main()
{
    int num,a[100],i=1,j;;
    a[0]=0;
    a[1]=1;
    scanf("%d",&num);
    while(a[i]<=num)
    {
        i=i+1;
        a[i]=a[i-1]+a[i-2];
    }
    for(j=0;j<=i;j++)
    {
        a[j];
    }
    if(a[j-2]==num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
        }