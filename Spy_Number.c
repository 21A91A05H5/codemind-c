#include<stdio.h>
int main()
{
    int n,sum=0,pr=1,d;
    scanf("%d",&n);//n=1124
    while(n>0)
    {
        d=n%10;//d=1
        sum=sum+d;//0=0+4=4+2=6+1=7+1=8
        pr=pr*d;//1=1*4=4*2=8*1=8*1=8
        n=n/10;//1124=112=11=1=0
        
    }
    if(sum==pr)
    {
        printf("Spy Number");
    }
    else
       printf("Not Spy Number");
}
