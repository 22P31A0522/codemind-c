#include<stdio.h>
int main()
{
    int n,i,l=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min;
    for(i=0;i<n;i++)
    {
        if(a[i]<min);
        {
            min=a[i];
            l=i+1;
        }
    }
    printf("%d",min);
}