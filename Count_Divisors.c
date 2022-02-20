#include<stdio.h>
int main()
{
    int i,l,r,k,c=0,res;
    scanf("%d%d%d",&l,&r,&k);
   
    
        for(i=l;i<=r;i++)
        {
            res=i%k;
            if(res==0)
            {
                c++;
            }
        }
        printf("%d",c);
    
}