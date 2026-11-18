#include <stdio.h>

enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int choice;
    float num1, num2, result;

    printf("----- MENU -----\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice)
    {
        case ADD:
            result = num1 + num2;
            printf("Addition = %.2f", result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("Subtraction = %.2f", result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("Multiplication = %.2f", result);
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}