#include<stdio.h>
int fun(int k)
{
    if(k<0)
    {
        return 0;
    }
    else if(k==0)
    {
        return 1;
    }
    return fun(k-1)+fun(k-2)+fun(k-3);
}
int main()
{
    int k,i;
    scanf("%d",&k);
    i=fun(k);
    printf("%d",i);
}