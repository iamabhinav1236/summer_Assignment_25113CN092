// Write a program to Create ATM simulation. 

// Approach Used - Provide a menu with options (Check Balance, Deposit, Withdraw, Exit), and perform actions based on user choice using functions and conditions.
// Difficulty Level - Easy (Learnt how to think about it)
// Concept Used - Use of functions, loops, and if-else conditions

#include <stdio.h>

void atmSimulation();                          // Function Declaration

int main() 
{
    atmSimulation();                           // Calling function
    return 0;
}

void atmSimulation()                           // Function Definition
{
    int choice;
    float balance = 1000.0;                    // Initial balance
    float amount;

    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful! New balance: %.2f\n", balance);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= balance) 
                {
                    balance -= amount;
                    printf("Withdrawal successful! New balance: %.2f\n", balance);
                } 
                else 
                {
                    printf("Insufficient balance!\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);
}
