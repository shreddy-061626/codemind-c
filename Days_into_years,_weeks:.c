#include<stdio.h>
int main()
{
    int n,w,y;
 scanf("%d",&n);
  w=(n%365)/7;
  y=n/365;
  printf("%d
%d",y,w);
}