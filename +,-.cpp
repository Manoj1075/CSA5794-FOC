#include<stdio.h>
int main()
{
    int num;
    printf("enter an integer:");
    scanf("%d",&num);
    if(num>0)
    {
    	printf("%d is a positive integer\n",num);
    }
    else if (num<0)
    {
    	printf("%d is a negative integer \n",num);
	}
	else {
		printf("%d is neither positive nor negative.\n",num);
	}
	return 0;
}
