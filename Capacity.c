#include<stdio.h>
int main()
{
    int t,s,b,c,tc;
    scanf("%d%d%d",&t,&s,&b);
    c=2*s*t*b*512;
    tc=c/1024;
    printf("%dkb",tc);
    
    
}