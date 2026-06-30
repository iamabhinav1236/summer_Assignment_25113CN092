// Write a program to Create voting eligibility system. 

// Approach Used - Take age as input, check if it meets eligibility criteria (>=18), then display result
// Difficulty Level - Easy
// Concept Used - Use of functions, loops, and if-else conditions

#include <stdio.h>

void checkEligibility(int age);                  // Function Declaration

int main() 
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    checkEligibility(age);                       // Calling function

    return 0;
}

void checkEligibility(int age)                   // Function Definition
{
    if (age >= 18) 
    {
        printf("You are eligible to vote.\n");
    } 
    else 
    {
        printf("You are not eligible to vote.\n");
        printf("You can vote after %d years.\n", 18 - age);
    }
}
