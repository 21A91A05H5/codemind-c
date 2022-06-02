#include<stdio.h>
int main()
{
    int n,arr[100][100],k,m,i,j,sum=0,max=0,b[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&arr[i][j]);
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
		   sum+=arr[j][i];
		}
        b[k]=sum;
        k++;
    }
    
    for(i=0;i<k;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    printf("%d",max);
}