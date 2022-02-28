#include<stdio.h>
int main ()
{
	int num,d, max= 0;
	scanf ("%d", &num);

	while (num > 0)
    {
		d = num % 10;
		if (max < d)
 		{	
       		max = d;
 		}
		num = num / 10;
    }
    printf("%d",max);
	return 0;
}