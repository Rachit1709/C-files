#include <stdio.h>

int main() {
    int num1, num2;
    
    float result;
char operator;
    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any newline character left in the input buffer
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculation and Output
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2; // Casting to float for correct division result
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}

