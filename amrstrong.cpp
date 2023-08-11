#include<stdio.h>
int main(){
	int sum=0,a,i,z;
	
	printf("enter any num:");
	scanf("%d",&a);
	
	for (z=a;z>0;z/=10){
		i = z%10;
		sum=sum+i*i*i;
		
	
	}
	
	if (sum==a)
	printf("armstrong");
	else
	printf("not");
	return 0;
}
