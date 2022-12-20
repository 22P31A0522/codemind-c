#include<stdio.h>
int main()
{
    int n,rem,s=0,i;
    scanf("%d",&n);
    for(i=1;i<=(n - 1);i++)
    {
        rem=n%i;
        if(rem==0)
        {
            s=s+i;
        }
    }
    if(s==n)
    printf("True");
    else
    printf("False");
    
}