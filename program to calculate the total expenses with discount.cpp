//While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
// If quantity and price per item are input through the keyboard, write a program to calculate the total expenses
#include <stdio.h>

int main() {
    int quantity;
    float price_per_item;
    
    printf("Enter the quantity: ");
    scanf("%d", &quantity);
    
    printf("Enter the price per item: ");
    scanf("%f", &price_per_item);
    
    float total_expenses;
    
    if (quantity > 1000) {
        float discount = 0.10; // 10% discount
        total_expenses = quantity * price_per_item * (1 - discount);
    } else {
        total_expenses = quantity * price_per_item;
    }
    
    printf("Total expenses: %.2f\n", total_expenses);
    
    return 0;
}

