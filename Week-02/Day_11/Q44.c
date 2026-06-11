// Write a program to Write function to find factorial. 

// Approach Used : Function and knowledge of factorials.
// Difficulty : Easy
// Concept Used : Use of function, if-else conditions, and for loops.

#include <stdio.h>
int factorial(int n);             // Function Declaration

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);            // Input from the user
            
    int result = factorial(num);            // Calling function 

    printf("The factorial of %d is: %d\n", num, result);            // Print result
    return 0;
}

int factorial(int n)             // Function Definition
{
    if (n < 0)                  // Check if n is negative
    {
        return -1;              // factorial is not defined for negative numbers, return -1 
    }
    else if (n == 0 || n == 1)         // Check if n is 0 or 1
    {
        return 1;               // Return 1 for factorial of 0 and 1
    }
    else 
    {
        int fact = 1;           // Initialize factorial variable
        for (int i = 2; i <= n; i++)        // Loop from 2 to n to calculate factorial
        {
            fact *= i;          // Multiplying fact by i in each iteration
        }
        return fact;           // Return the calculated factorial
    }
}