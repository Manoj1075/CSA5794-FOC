#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	double sum=0;
	for (i=1;i<=n;i++)
    {
	  sum=sum+pow(i,i); 
    }
    printf("sum of the first %d powers of n is %1f",n,sum);
    return 0;
}    
