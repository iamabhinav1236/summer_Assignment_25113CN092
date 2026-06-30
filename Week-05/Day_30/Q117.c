// Write a program to Create student record system using arrays and strings. 

// Approach Used - Store student details (roll number, name, marks) in parallel arrays, and provide menu options to add, display, and search records.
// Difficulty Level - Tough
// Concept Used - Use of arrays, strings, functions, loops, if-else conditions, and switch-case

#include <stdio.h>
#include <string.h>

void addStudent(int roll[], char names[][50], float marks[], int *count);                // Function Declaration
void displayStudents(int roll[], char names[][50], float marks[], int count);                // Function Declaration
void searchStudent(int roll[], char names[][50], float marks[], int count, int searchRoll);                // Function Declaration

int main() 
{
    int roll[100];                // Array for roll numbers
    char names[100][50];          // Array for names
    float marks[100];             // Array for marks
    int count = 0;                // Number of students
    int choice, searchRoll;

    do 
    {
        printf("\n--- Student Record System (Arrays & Strings) ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                addStudent(roll, names, marks, &count);                  // Calling function
                break;
            case 2:
                displayStudents(roll, names, marks, count);                  // Calling function
                break;
            case 3:
                printf("Enter roll number to search: ");
                scanf("%d", &searchRoll);
                searchStudent(roll, names, marks, count, searchRoll);                  // Calling function
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

void addStudent(int roll[], char names[][50], float marks[], int *count)                  // Function Definition
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

void displayStudents(int roll[], char names[][50], float marks[], int count)                  // Function Definition
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

void searchStudent(int roll[], char names[][50], float marks[], int count, int searchRoll)                  // Function Definition
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