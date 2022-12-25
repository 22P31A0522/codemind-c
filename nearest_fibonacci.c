#include<stdio.h>
int main()
{
    int f=0,sec=1,n,next=0;
    scanf("%d",&n);
    while(n>next)
    {
        next=f+sec;
        f=sec;
        sec=next;
    }
    if(n-f<sec-n)
    {
        printf("%d",f);
    }
    else if(n-f==sec-n)
    {
        printf("%d %d",f,sec);
    }
    else
    {
        printf("%d",sec);
    }
}