#include<stdio.h>
int main()
{
    int n,i,v;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        v=n*i;
        printf("%d x %d = %d
",n,i,v);
    }
}