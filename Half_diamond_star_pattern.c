#include<stdio.h>
int main()
{
 	int i, j, n;
 	scanf("%d", &n);
 	if(n>=3)
 	{
	for(i = 1; i <= n; i++)
	{
        for(j = 1; j <= i; j++)
        {
             printf("*");
        }
        printf("
");
    }

    for(i = n - 1; i > 0; i--)
	{
        for(j = 1; j <= i; j++)
        {
             printf("*");
        }
        printf("
");
    }
 	}
 
 if(n<3)
 {
     printf("The pattern is not possible");
 }
}
