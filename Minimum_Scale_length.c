#include<stdio.h>
int main()
{
    int n,i,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    int j=1;
    while(j<n)
    {
        if(a[j]%min==0)
        {
            j++;
        }
        else
        {
            min=a[j]%min;
            i++;
        }
    }
    printf("%d",min);
}