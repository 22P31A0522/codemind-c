#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a,b;
    for(a=65;a<=(64+n);a++)
    {
        for(b=65;b<=(64+n);b++)
        {
            printf("%c ",a);
        }
        printf("
");
    }
}    