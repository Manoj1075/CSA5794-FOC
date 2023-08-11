#include <stdio.h>

int main() {
    float loanAmount = 3000;
    float monthlyPayment = 85; 
    float interestRate = 0.01; 

    float balance = loanAmount; 
    int numMonths = 0; 
    float totalInterest = 0; 
    printf("Month\tPrincipal\tInterest\tBalance\n");
    while (balance > 0) {
        float interest = balance * interestRate; 
        float principal = monthlyPayment - interest; 
        if (balance < monthlyPayment) {
            monthlyPayment = balance + interest; 
        }
        balance -= principal;
        totalInterest += interest; 

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", numMonths + 1, principal, interest, balance);
        numMonths++; 
    }
    int numYears = numMonths / 12; 
    int numExtraMonths = numMonths % 12; 
    printf("\nIt will take %d years and %d months to pay off the loan.\n", numYears, numExtraMonths);
    printf("Total interest paid: $%.2f\n", totalInterest);

    return 0;
}
