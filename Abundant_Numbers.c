#include<stdio.h>
int main()
{
    int n,i,d,sum=0,temp[100],k;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            temp[k]=i;
            // printf("%d",temp[k]);
            sum=sum+temp[k];
        }
    }
  //  printf("%d",sum);
  if(sum>n)
  {
      printf("True");
  }
  else
  {
      printf("False");
  }
   
}
