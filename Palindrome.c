#include<stdio.h>
int main()
{
    int n,re,r=0,o;
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
      re=n%10;
      r=r*10+re;
      n/=10;
    }
    if(o==r)
    printf("True",o);
    else
    printf("False",o);
}