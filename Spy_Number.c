// spy number
#include<stdio.h>
int main()
{
    int n,sum=0,product=1,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        product*=rem;
        n=n/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}