#include <stdio.h>
int main() 
{

    int n;
    scanf("%d", &n);
    for(int i=1;i<2*n;i++)
    {
        int a=n;
        for(int j=1;j<2*n;j++)
        {
            printf("%d ",a);
            if (j<i)
                a-=1;
            if (j>(2*n-1-i))
                a+=1;
        }
        printf("
");
    }
    return 0;
}