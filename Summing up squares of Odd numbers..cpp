#include<stdio.h>
int main()
{
	int limit,i,sum=0;
	printf("enter the limit:");
	scanf("%d",&limit);
	for (i=1;i<=limit;i=i+2)
    {
	  sum=sum+i*i; 
    }
    printf("sum of the squares of odd numbers from 1 to %d is %d\n",limit,sum);
    return 0;
}    
