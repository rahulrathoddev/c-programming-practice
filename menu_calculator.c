#include <stdio.h>

int main() {
    float a, b, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n--- Arithmetic Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Addition = %f", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction = %f", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication = %f", result);
            break;

        case 4:
            if (b != 0) {
                result = a / b;
                printf("Division = %f", result);
            } else {
                printf("Cannot divide by zero!");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
