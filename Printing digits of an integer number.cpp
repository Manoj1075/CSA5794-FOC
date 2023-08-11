#include <stdio.h>

int main() {
    int number, digit;
    printf("Enter a positive integer number: ");
    scanf("%d", &number);
    
    printf("Digits in reverse order: ");
    while (number > 0) {
        digit = number % 10;
        printf("%d ", digit);
        number /= 10;
    }
    printf("\n");
    
    return 0;
}
