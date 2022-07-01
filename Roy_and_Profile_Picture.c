#include<stdio.h>
int main()
{
    int i,j,n,m,a,b;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&a,&b);
        if(a<n || b<n)
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            if(a==b)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}