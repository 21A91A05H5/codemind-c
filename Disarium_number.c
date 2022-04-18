#include<stdio.h>
#include<math.h>
int main()
{
    // int n,i,
    // scan n
    // tem n
    // d c++
    // whil
    // sum=sum+pow(d,c)
    // n=n/10,c--
    // sum==temp
    int i,n,d,sum=0,temp,c=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        c++;
        n=n/10;
    }
    n=temp;
    while(n>0)
    {
        d=n%10;
        sum=sum+pow(d,c);
        n=n/10;
        c--;
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