#include<stdio.h>
int main()
{
    int a,b,c,r,s=0;
    scanf("%d",&a);
    c=a;
    b=a*a;
    while(c!=0)
    {
        r=c%10;
        s=s*10+r;
        c=c/10;
    }
    int d=s*s;
    int q,p=0;
    while(d!=0)
    {
        q=d%10;
        p=p*10+q;
        d=d/10;
    }
    if(p==b)
    printf("True");
    else
    printf("False");
}