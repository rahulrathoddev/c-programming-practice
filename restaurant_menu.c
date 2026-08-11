
#include <stdio.h>

int main()
{
    int choice;

    printf("===== Restaurant Menu =====\n");
    printf("1. Pizza\n");
    printf("2. Burger\n");
    printf("3. Sandwich\n");
    printf("4. Pasta\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("You selected Pizza.");
            break;

        case 2:
            printf("You selected Burger.");
            break;

        case 3:
            printf("You selected Sandwich.");
            break;

        case 4:
            printf("You selected Pasta.");
            break;

        case 5:
            printf("Thank you!");
            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}
