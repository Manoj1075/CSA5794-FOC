#include<stdio.h>
int main()
{
	int n,i;
	double sum=0.0;
printf("enter the number of terms:");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{     
	  sum=sum+i*i*i;      
    }
 printf("sum of cubes of first %d numbers=%.21f\n",n,sum);
    return 0;     
                                                         	     	  
}    	    
