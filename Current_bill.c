#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float u,b,t;
    if(a<=199)
    {
        u=1.20;
    }
    else if(a>=200&&a<400)
    {
        u=1.50;
    }
    else if(a>=400&&a<600)
    {
        u=1.80;
    }
    else
    {
        u=2.00;
    }
    b=a*u;
    if(b>400)
    {
        t=b+b*0.15;
    }
    else
    {
        t=b+100;
    }
    printf("%0.2f",t);
}