// Write a program to Create bank account system. 

// Approach Used - Store account details (account number, name, balance) in a structure, and provide menu options to add account, deposit, withdraw, display, and search.
// Difficulty Level - Tough
// Concept Used - Use of structures, functions, loops, if-else conditions, arrays, and basic input/output

#include <stdio.h>
#include <string.h>

struct Account 
{
    int accNo;
    char name[50];
    float balance;
};

void addAccount(struct Account accounts[], int *count);                 // Function Declaration
void displayAccounts(struct Account accounts[], int count);                 // Function Declaration
void depositMoney(struct Account accounts[], int count, int accNo);                 // Function Declaration
void withdrawMoney(struct Account accounts[], int count, int accNo);                 // Function Declaration
void searchAccount(struct Account accounts[], int count, int accNo);                 // Function Declaration

int main() 
{
    struct Account accounts[100];                   // Array of account records
    int count = 0;                  // Number of accounts
    int choice, accNo;

    do 
    {
        printf("\n--- Bank Account System ---\n");
        printf("1. Add Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Search Account by Number\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                addAccount(accounts, &count);                      // Calling Function
                break;
            case 2:
                displayAccounts(accounts, count);                      // Calling Function
                break;
            case 3:
                printf("Enter account number to deposit: ");
                scanf("%d", &accNo);
                depositMoney(accounts, count, accNo);                      // Calling Function
                break;
            case 4:
                printf("Enter account number to withdraw: ");
                scanf("%d", &accNo);
                withdrawMoney(accounts, count, accNo);                      // Calling Function
                break;
            case 5:
                printf("Enter account number to search: ");
                scanf("%d", &accNo);
                searchAccount(accounts, count, accNo);                      // Calling Function
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 6);

    return 0;
}

void addAccount(struct Account accounts[], int *count)              // Function Definition
{
    printf("Enter account number: ");
    scanf("%d", &accounts[*count].accNo);
    printf("Enter name: ");
    scanf("%s", accounts[*count].name);
    printf("Enter initial balance: ");
    scanf("%f", &accounts[*count].balance);

    (*count)++;
    printf("Account added successfully!\n");
}

void displayAccounts(struct Account accounts[], int count)              // Function Definition
{
    int i;
    if (count == 0) 
    {
        printf("No accounts found.\n");
        return;
    }
    printf("\n--- Account Records ---\n");
    for (i = 0; i < count; i++) 
    {
        printf("Account No: %d, Name: %s, Balance: %.2f\n", accounts[i].accNo, accounts[i].name, accounts[i].balance);
    }
}

void depositMoney(struct Account accounts[], int count, int accNo)              // Function Definition
{
    int i, found = 0;
    float amount;
    for (i = 0; i < count; i++) 
    {
        if (accounts[i].accNo == accNo) 
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Deposit successful! New balance: %.2f\n", accounts[i].balance);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No account found with number %d.\n", accNo);
    }
}

void withdrawMoney(struct Account accounts[], int count, int accNo)
{
    int i, found = 0;
    float amount;
    for (i = 0; i < count; i++) 
    {
        if (accounts[i].accNo == accNo) 
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= accounts[i].balance) 
            {
                accounts[i].balance -= amount;
                printf("Withdrawal successful! New balance: %.2f\n", accounts[i].balance);
            } 
            else 
            {
                printf("Insufficient balance!\n");
            }
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No account found with number %d.\n", accNo);
    }
}

void searchAccount(struct Account accounts[], int count, int accNo)
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (accounts[i].accNo == accNo) 
        {
            printf("Account Found: Account No: %d, Name: %s, Balance: %.2f\n", accounts[i].accNo, accounts[i].name, accounts[i].balance);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No account found with number %d.\n", accNo);
    }
}
