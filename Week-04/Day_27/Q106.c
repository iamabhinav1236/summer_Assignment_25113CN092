// Write a program to Create employee management system. 

// Approach Used - Store employee details (ID, name, salary) in an array of structures, and provide menu options to add, display, and search records.
// Difficulty Level - Medium
// Concept Used - Use of structures, functions, loops, if-else conditions, and arrays

#include <stdio.h>
#include <string.h>

struct Employee 
{
    int id;
    char name[50];
    float salary;
};

void addEmployee(struct Employee employees[], int *count);                  // Function Declaration
void displayEmployees(struct Employee employees[], int count);                  // Function Declaration
void searchEmployee(struct Employee employees[], int count, int id);                  // Function Declaration

int main() 
{
    struct Employee employees[100];                        // Array of employee records
    int count = 0;                          // Number of employees
    int choice, id;

    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                addEmployee(employees, &count);                       // Calling Function
                break;
            case 2:
                displayEmployees(employees, count);                       // Calling Function
                break;
            case 3:
                printf("Enter employee ID to search: ");
                scanf("%d", &id);
                searchEmployee(employees, count, id);                       // Calling Function
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);

    return 0;
}

void addEmployee(struct Employee employees[], int *count)                     // Function Definition
{
    printf("Enter employee ID: ");
    scanf("%d", &employees[*count].id);
    printf("Enter name: ");
    scanf("%s", employees[*count].name);
    printf("Enter salary: ");
    scanf("%f", &employees[*count].salary);

    (*count)++;
    printf("Employee added successfully!\n");
}

void displayEmployees(struct Employee employees[], int count)                     // Function Definition
{
    int i;
    if (count == 0) 
    {
        printf("No records found.\n");
        return;
    }
    printf("\n--- Employee Records ---\n");
    for (i = 0; i < count; i++) 
    {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
}

void searchEmployee(struct Employee employees[], int count, int id)                     // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (employees[i].id == id) 
        {
            printf("Record Found: ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No employee found with ID %d.\n", id);
    }
}
