#include<stdio.h>
int main()
{
    int w,arr[1000],t,i,c=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&w);
    for(i=0;i<t;i++)
    {
        if(arr[i]>w)
        {
            c+=2;
        }
        else 
        {
           c+=1;
        }
    }
    printf("%d",c);
}