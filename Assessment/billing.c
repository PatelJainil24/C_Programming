#include <stdio.h>

void FoodList(int totalAmount) {
    int choos, qut;
    int amount = 0;
    char conti;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Pizza  Price = 180rs/pcs\n");
        printf("2. Burger Price = 100rs/pcs\n");
        printf("3. Dosa   Price = 120rs/pcs\n");
        printf("4. Idli   Price = 50rs/pcs\n");

        printf("Please Enter your choice (1-4): ");
        scanf("%d", &choos);

        printf("Enter the quantity: ");
        scanf("%d", &qut);

        switch (choos) {
            case 1:
                printf("You have selected Pizza.\n");
                amount = qut * 180;
                break;
            case 2:
                printf("You have selected Burger.\n");
                amount = qut * 100;
                break;
            case 3:
                printf("You have selected Dosa.\n");
                amount = qut * 120;
                break;
            case 4:
                printf("You have selected Idli.\n");
                amount = qut * 50;
                break;
            default:
                printf("Invalid choice! Please select between 1 to 4.\n");
                continue;
        }

        totalAmount += amount;

        printf("Amount for this order: %d\n", amount);
        printf("Total Amount so far: %d\n", totalAmount);

        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &conti); 

    } while (conti == 'y' || conti == 'Y');

    printf("\nThanks for visiting! Your final bill is: %d rs\n", totalAmount);
}

int main() {
    FoodList(0);
    return 0;
}
