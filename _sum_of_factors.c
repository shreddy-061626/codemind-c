#include<stdio.h>
int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
       if(n%i==0)
       {
           t=t+i;
       }
    }
    printf("%d",t);
}