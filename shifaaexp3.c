#include <stdio.h>

/*
Name: shifaa khan 
age: 18
Class: comps 01
Division: C
UIN: 251P022
*/


int main() {
    int choice;
    float num1, num2, result;

start:  
    printf("\n===== MENU DRIVEN CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    if (choice == 6) {
        printf("Exiting the program. Goodbye!\n");
        return 0;
    }

    
    if (choice >= 1 && choice <= 5) {
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
    }

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case 4:
            if (num2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;

        case 5:
            
            printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            break;

        default:
            printf("Invalid choice! Please enter a valid option.\n");
            break;
    }

    
    char again;
    printf("\nDo you want to perform another calculation? (y/n): ");
    scanf(" %c", &again);

    if (again == 'y' || again == 'Y')
        goto start; 

    printf("Thank you for using the calculator!\n");
    return 0;
}
