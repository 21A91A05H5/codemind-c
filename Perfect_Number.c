#include<stdio.h>
int main()
{
    int n,sum=0,i,j;
    scanf("%d",&n);
   int temp=n;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }

    if(sum==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}