#include<stdio.h>
int main()
{
    int n,a[200][200],j,i,b[100][100],c[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
              scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
            c[i][j]=a[i][j]+b[i][j];
         }
     }
     for(i=0;i<n;i++)
     {
         for(j=0;j<n-1;j++)
         {
            printf("%d ",c[i][j]);
         }
         printf("%d",c[i][j]);
         printf("
");
     }
}