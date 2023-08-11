#include<stdio.h>
int main()
{
	int n,i,sum=0,sign=1;
	printf("enter a positive integer:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
     sum=sum+sign*i;
     sign=sign*-1;
    }
    printf("the sum is %d",sum);
    return 0;
}
