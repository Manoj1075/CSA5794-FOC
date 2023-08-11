#include<stdio.h>
int main()
{
	int n,i;
	float sum=0,num,avg;
	printf("enter the the number of elements:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("enter the number %d:",i);
	scanf("%f",&num);
	sum=sum+num;
    }
    avg=sum/n;
    printf("the sum of numbers is %.2f\n",sum);
    printf("the average of the numbers is %.2f\n",avg);
    return 0;
}
