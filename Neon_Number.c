#include<stdio.h>
int main()
{
    int n,s,r,sum=0;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        r=s%10;
        sum+=r;
        s/=10;
    }
    if(sum==n)
    printf("Neon Number",n);
    else
    printf("Not Neon Number",n);
}