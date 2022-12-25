#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,t,rev=0,r;
        scanf("%d",&n);
        t=n;
        while(n)
        {
            r=n%10;
            rev=rev*10+r;
            n/=10;
        }
        if(t==rev)
        printf("True
");
        else
        printf("False
");
    }
}