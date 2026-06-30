// Write a program to Create mini employee management system. 

// Approach Used - Store employee details (ID, name, department, salary) in an array of structures,and provide menu options to add, display, update, and search employee records.
// Difficulty Level - Tough
// Concept Used - Use of structures, functions, loops, if-else conditions, arrays, and switch-case

#include <stdio.h>
#include <string.h>

struct Employee 
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

void addEmployee(struct Employee employees[], int *count);       // Function Declaration
void displayEmployees(struct Employee employees[], int count);       // Function Declaration
void updateEmployee(struct Employee employees[], int count, int id);       // Function Declaration
void searchEmployee(struct Employee employees[], int count, int id);       // Function Declaration

int main() 
{
    struct Employee employees[100];             // Array of employee records
    int count = 0;                    // Number of employees
    int choice, id;

    do {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Update Employee\n");
        printf("4. Search Employee by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addEmployee(employees, &count);                  // Calling function
                break;
            case 2:
                displayEmployees(employees, count);                  // Calling function
                break;
            case 3:
                printf("Enter employee ID to update: ");
                scanf("%d", &id);
                updateEmployee(employees, count, id);                  // Calling function
                break;
            case 4:
                printf("Enter employee ID to search: ");
                scanf("%d", &id);
                searchEmployee(employees, count, id);                  // Calling function
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);

    return 0;
}

void addEmployee(struct Employee employees[], int *count)                 // Function Definition
{
    printf("Enter employee ID: ");
    scanf("%d", &employees[*count].id);
    printf("Enter name: ");
    scanf("%s", employees[*count].name);
    printf("Enter department: ");
    scanf("%s", employees[*count].department);
    printf("Enter salary: ");
    scanf("%f", &employees[*count].salary);

    (*count)++;
    printf("Employee added successfully!\n");
}

void displayEmployees(struct Employee employees[], int count)                 // Function Definition
{
    int i;
    if (count == 0) 
    {
        printf("No employees found.\n");
        return;
    }
    printf("\n--- Employee Records ---\n");
    for (i = 0; i < count; i++) 
    {
        printf("ID: %d, Name: %s, Department: %s, Salary: %.2f\n", 
               employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

void updateEmployee(struct Employee employees[], int count, int id)                 // Function Definition
{
    int i, found = 0;
    float newSalary;
    char newDept[50];
    for (i = 0; i < count; i++) 
    {
        if (employees[i].id == id) 
        {
            printf("Enter new department for %s: ", employees[i].name);
            scanf("%s", newDept);
            printf("Enter new salary for %s: ", employees[i].name);
            scanf("%f", &newSalary);
            strcpy(employees[i].department, newDept);
            employees[i].salary = newSalary;
            printf("Employee updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No employee found with ID %d.\n", id);
    }
}

void searchEmployee(struct Employee employees[], int count, int id)                 // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (employees[i].id == id) 
        {
            printf("Employee Found: ID: %d, Name: %s, Department: %s, Salary: %.2f\n", 
                   employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No employee found with ID %d.\n", id);
    }
}
