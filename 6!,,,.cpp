#include <stdio.h>
#include <math.h>

int main() {
    double x, cosx, term;
    int i, n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    cosx = 1.0; // First term of the series is always 1

    for (i = 1; i <= n; i++) {
        term = pow(-1, i) * pow(x, 2*i) / tgamma(2*i + 1); // Calculate the ith term of the series
        cosx += term; // Add the ith term to the sum
    }

    printf("cos(%.2lf) = %.4lf", x, cosx);

    return 0;
}
