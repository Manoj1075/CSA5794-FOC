#include <stdio.h>

int main() {
    float carPrice = 0;
    int accessoryCount = 0;
    float totalCost = 0;

    printf("Enter the initial price of the car: ");
    scanf("%f", &carPrice);

    printf("Enter the number of accessories: ");
    scanf("%d", &accessoryCount);

    for (int i = 0; i < accessoryCount; i++) {
        float accessoryPrice;
        printf("Enter the price of accessory %d: ", i + 1);
        scanf("%f", &accessoryPrice);
        carPrice += accessoryPrice;
    }

    float salesTaxRate;
    printf("Enter the sales tax rate: ");
    scanf("%f", &salesTaxRate);

    float salesTaxAmount = (carPrice * salesTaxRate) / 100;
    totalCost = carPrice + salesTaxAmount;

    printf("The total cost of the car is: %.2f\n", totalCost);

    return 0;
}
