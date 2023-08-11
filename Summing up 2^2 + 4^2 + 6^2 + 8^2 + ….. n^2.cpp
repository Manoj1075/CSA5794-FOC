#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for (i=2;i<=n;i=i+2)
    {
  	
	  sum=sum+i*i; 
    }
    printf("sum of even squares up to %d is %d\n",n,sum);
    return 0;

}    
