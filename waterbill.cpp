#include <stdio.h>

double calculateWaterBill(int cubicFeet) {
    double bill = 0.0;

    if (cubicFeet <= 1000) {
        bill = 15.00;
    } else if (cubicFeet <= 2000) {
        bill = 15.00 + 0.0175 * (cubicFeet - 1000);
    } else if (cubicFeet <= 3000) {
        bill = 15.00 + 0.0175 * 1000 + 0.02 * (cubicFeet - 2000);
    } else {
        bill = 15.00 + 0.0175 * 1000 + 0.02 * 1000 + 70.00;
    }

    return bill;
}

int main() {
    int cubicFeet;

    printf("Enter the cubic feet of water used: ");
    scanf("%d", &cubicFeet);

    double waterBill = calculateWaterBill(cubicFeet);
    printf("Water Bill: $%.2f\n", waterBill);

    return 0;
}

