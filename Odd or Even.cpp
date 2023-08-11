#include<stdio.h>
int main()
{
	int a,i,j,n=0;
	printf("Enter the size of array: ");
	scanf("%d",&a);
	int b[a];
	
	for (i=0;i<a;i++)
	{
		printf("Enter element at b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	for (j=0;j<a;j++)
	{
		if(b[j]==21)
		{
			n=n+1;
		}
	}printf("%d",n);

	return 0;
}
