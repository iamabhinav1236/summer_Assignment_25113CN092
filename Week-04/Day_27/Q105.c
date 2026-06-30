// Write a program to Create student record management system. 

// Approach Used - Store student details (roll number, name, marks) in an array of structures, and providing menu options to add, display, and search records.
// Difficulty Level - Tough (Learning to implement the concepts of structure)
// Concept Used - Use of structures, functions, loops, if-else conditions, and arrays

#include <stdio.h>
#include <string.h>

struct Student 
{
    int roll;
    char name[50];
    float marks;
};

void addStudent(struct Student students[], int *count);                // Function Declaration
void displayStudents(struct Student students[], int count);                   // Function Declaration
void searchStudent(struct Student students[], int count, int roll);                   // Function Declaration

int main() 
{
    struct Student students[100];   // Array of student records
    int count = 0;                  // Number of students
    int choice, roll;

    do 
    {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                addStudent(students, &count);                       // Calling Function
                break;
            case 2:
                displayStudents(students, count);                       // Calling Function
                break;
            case 3:
                printf("Enter roll number to search: ");
                scanf("%d", &roll);
                searchStudent(students, count, roll);                       // Calling Function
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

void addStudent(struct Student students[], int *count)        // Function Definition
{
    printf("Enter roll number: ");
    scanf("%d", &students[*count].roll);
    printf("Enter name: ");
    scanf("%s", students[*count].name);
    printf("Enter marks: ");
    scanf("%f", &students[*count].marks);

    (*count)++;
    printf("Student added successfully!\n");
}

void displayStudents(struct Student students[], int count)        // Function Definition
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
        printf("Roll: %d, Name: %s, Marks: %.2f\n", students[i].roll, students[i].name, students[i].marks);
    }
}

void searchStudent(struct Student students[], int count, int roll)        // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (students[i].roll == roll) 
        {
            printf("Record Found: Roll: %d, Name: %s, Marks: %.2f\n", students[i].roll, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No student found with roll number %d.\n", roll);
    }
}
