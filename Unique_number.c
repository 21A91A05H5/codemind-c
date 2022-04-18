#include<stdio.h>
int main()
{
    int i=0,n,j,sum=0,k,d,arr[100],c=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        arr[i]=d;
        n=n/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        for(k=0;k<i;k++)
        {
           if(arr[j]==arr[k])
             {c++;}
        }
    }
    if(c==i)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }

    
}
