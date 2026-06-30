// Write a program to Create menu-driven calculator. 

// Approach Used - Provide a menu with options (Addition, Subtraction, Multiplication, Division), 
// and perform operations based on user choice using functions and conditions.
// Difficulty Level - Easy
// Concept Used - Use of functions, loops, if-else conditions, and switch-case

#include <stdio.h>

void calculator();                          // Function Declaration

int main() 
{
    calculator();                           // Calling function
    return 0;
}

void calculator()                           // Function Definition
{
    int choice;
    float num1, num2, result;

    do 
    {
        printf("\n--- Menu-Driven Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) 
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        switch(choice) 
        {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) 
                {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } 
                else 
                {
                    printf("Error! Division by zero.\n");
                }
                break;
            case 5:
                printf("Exiting calculator.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);
}
