#include <stdio.h>
double calculateExponentialSeries(double x, int n) 
{
    double result = 1.0; 
    double term = 1.0; 
    int i;
    for (i = 1; i <= n; i++) 
	{
        term *= (-x / i); 
        result += term; 
    }
    return result;
}
int main() 
{
    double x;
    int n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    double result = calculateExponentialSeries(x, n);
    printf("Result: %lf\n", result);
    return 0;
}

