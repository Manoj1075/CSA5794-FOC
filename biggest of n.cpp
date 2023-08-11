#include <stdio.h>
int main() 
{
    int i,n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }
    printf("The largest integer is %d\n", max);
    return 0;
}
