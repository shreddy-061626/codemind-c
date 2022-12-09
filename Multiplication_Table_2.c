#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d%d",&n,&a);
    for(i=1;i<=a;i++)
    {
        int p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}