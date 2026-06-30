// Write a program to Create marksheet generation system. 

// Approach Used - Store student details (roll number, name, marks in subjects) in a structure, calculate total and percentage, and display the marksheet.
// Difficulty Level - Tough
// Concept Used - Use of structures, functions, loops, if-else conditions, and arrays

#include <stdio.h>
#include <string.h>

struct Student 
{
    int roll;
    char name[50];
    float marks[5];   // Marks in 5 subjects
    float total;
    float percentage;
};

void generateMarksheet(struct Student *s);          // Function Declaration

int main() 
{
    struct Student s;
    int i;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks in 5 subjects:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Subject %d: ", i+1);
        scanf("%f", &s.marks[i]);
    }

    generateMarksheet(&s);                          // Calling function

    printf("\n--- Marksheet ---\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    for (i = 0; i < 5; i++) 
    {
        printf("Subject %d Marks: %.2f\n", i+1, s.marks[i]);
    }
    printf("Total Marks: %.2f\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);

    if (s.percentage >= 60) 
    {
        printf("Result: First Division\n");
    } 
    else if (s.percentage >= 45) 
    {
        printf("Result: Second Division\n");
    } 
    else if (s.percentage >= 33) 
    {
        printf("Result: Third Division\n");
    } 
    else 
    {
        printf("Result: Fail\n");
    }

    return 0;
}

void generateMarksheet(struct Student *s)           // Function Definition
{
    int i;
    s->total = 0;
    for (i = 0; i < 5; i++) 
    {
        s->total += s->marks[i];
    }
    s->percentage = s->total / 5;
}
