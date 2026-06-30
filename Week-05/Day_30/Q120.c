// Write a program to Develop complete mini project using arrays, strings and functions.

// Approach Used - Store student details (roll number, name, marks) in parallel arrays, and provide menu options to add, display, search, update, and delete records.
// Difficulty Level - Medium to Advanced
// Concept Used - Arrays, strings, functions, loops, if-else conditions, and switch-case

#include <stdio.h>
#include <string.h>

#define MAX 100

void addStudent(int roll[], char names[][50], float marks[], int *count);       // Function Declaration
void displayStudents(int roll[], char names[][50], float marks[], int count);       // Function Declaration
void searchStudent(int roll[], char names[][50], float marks[], int count, int searchRoll);       // Function Declaration
void updateStudent(int roll[], char names[][50], float marks[], int count, int searchRoll);       // Function Declaration
void deleteStudent(int roll[], char names[][50], float marks[], int *count, int searchRoll);       // Function Declaration

int main() 
{
    int roll[MAX];
    char names[MAX][50];
    float marks[MAX];
    int count = 0;
    int choice, searchRoll;

    do 
    {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Update Student Record\n");
        printf("5. Delete Student Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                addStudent(roll, names, marks, &count);                 // Calling function
                break;
            case 2:
                displayStudents(roll, names, marks, count);                 // Calling function
                break;
            case 3:
                printf("Enter roll number to search: ");
                scanf("%d", &searchRoll);
                searchStudent(roll, names, marks, count, searchRoll);                 // Calling function
                break;
            case 4:
                printf("Enter roll number to update: ");
                scanf("%d", &searchRoll);
                updateStudent(roll, names, marks, count, searchRoll);                 // Calling function
                break;
            case 5:
                printf("Enter roll number to delete: ");
                scanf("%d", &searchRoll);
                deleteStudent(roll, names, marks, &count, searchRoll);                 // Calling function
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

void addStudent(int roll[], char names[][50], float marks[], int *count)               // Function Definition
{
    printf("Enter roll number: ");
    scanf("%d", &roll[*count]);
    printf("Enter name: ");
    scanf("%s", names[*count]);
    printf("Enter marks: ");
    scanf("%f", &marks[*count]);

    (*count)++;
    printf("Student added successfully!\n");
}

void displayStudents(int roll[], char names[][50], float marks[], int count)               // Function Definition
{
    int i;
    if (count == 0) 
    {
        printf("No records found.\n");
        return;
    }
    printf("\n--- Student Records ---\n");
    for (i = 0; i < count; i++) 
    {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", roll[i], names[i], marks[i]);
    }
}

void searchStudent(int roll[], char names[][50], float marks[], int count, int searchRoll)               // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (roll[i] == searchRoll) 
        {
            printf("Record Found: Roll: %d, Name: %s, Marks: %.2f\n", roll[i], names[i], marks[i]);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No student found with roll number %d.\n", searchRoll);
    }
}

void updateStudent(int roll[], char names[][50], float marks[], int count, int searchRoll)               // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (roll[i] == searchRoll) 
        {
            printf("Enter new name: ");
            scanf("%s", names[i]);
            printf("Enter new marks: ");
            scanf("%f", &marks[i]);
            printf("Record updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No student found with roll number %d.\n", searchRoll);
    }
}

void deleteStudent(int roll[], char names[][50], float marks[], int *count, int searchRoll)               // Function Definition
{
    int i, j, found = 0;
    for (i = 0; i < *count; i++) 
    {
        if (roll[i] == searchRoll) 
        {
            for (j = i; j < *count - 1; j++) 
            {
                roll[j] = roll[j + 1];
                strcpy(names[j], names[j + 1]);
                marks[j] = marks[j + 1];
            }
            (*count)--;
            printf("Record deleted successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No student found with roll number %d.\n", searchRoll);
    }
}