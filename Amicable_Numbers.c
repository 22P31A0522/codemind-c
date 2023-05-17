#include<stdio.h>
int main()
{
    int a,b,asum=0,bsum=0,i,m;
    scanf("%d
%d",&a,&b);
    m=(a>b)?a:b;
    for(i=1;i<m;i++)
    {
        if(a%i==0) asum+=i;
        if(b%i==0) bsum+=i;
    }
    if(m==a) bsum-=b;
    else asum-=b;
    if(asum==bsum) printf("Amicable");
    else printf("Not Amicable");
    return 0;
}