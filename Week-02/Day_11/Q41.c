// Write a program to Write function to find sum of two numbers. 

// Approach Used : Function
// Difficulty : Easy
// Concept Used : Function

#include <stdio.h>
int sum(int a, int b);             // Function Declaration

int main() 
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);            // Input from the user
            
    int result = sum(num1, num2);            // Calling function 

    printf("The sum of %d and %d is: %d\n", num1, num2, result);            // Print result
    return 0;
}

int sum(int a, int b)             // Function Definition
{
    return a + b;              // Return the sum of a and b
}