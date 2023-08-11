#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter a positive integer:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("the summ of series 1+2+.......+%d=%d\n",n,sum);
	return 0;
}
