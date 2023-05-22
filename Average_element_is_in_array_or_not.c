#include<stdio.h>
int linear_search(int *a,int n,int se)
{
	int i,count=0;
for(i=0;i<n;i++)
{
	if(se==a[i])
	return i;
}
return -1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se,c1=0;
	for(i=0;i<n;i++)
    {
        c1=c1+a[i];
    }
    se=c1/n;
	int res=linear_search(a,n,se);
	if(res==-1)
	{
	printf("False");
    }
	else
	{
	printf("True");
    }
}