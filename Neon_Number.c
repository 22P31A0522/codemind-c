#include<stdio.h>
int main()
{
    int n,s,rem,sum=0;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        rem=s%10;
        sum+=rem;
        s/=10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}