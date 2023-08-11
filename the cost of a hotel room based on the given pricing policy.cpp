#include <stdio.h>
int main() {
    int numPeople, isCompanyBusiness, isOver60;
    float basePrice, discount, finalPrice;
        printf("Enter the number of people staying in the room: ");
    scanf("%d", &numPeople);
        printf("Is it a company business? (1 for Yes, 0 for No): ");
    scanf("%d", &isCompanyBusiness);
        printf("Enter the age of the customer: ");
    scanf("%d", &isOver60);
        if (numPeople == 2) {
        basePrice = 85;
    } else if (numPeople == 3) {
        basePrice = 90;
    } else if (numPeople == 4) {
        basePrice = 95;
    } else {
        basePrice = 95 + (numPeople - 4) * 6;
    }
        if (isCompanyBusiness) {
        discount = 0.2; 
    } else if (isOver60) {
        discount = 0.15; 
    } else {
        discount = 0; 
    }
        finalPrice = basePrice - (basePrice * discount);
        printf("The cost of the room is: $%.2f\n", finalPrice);
    return 0;
}

