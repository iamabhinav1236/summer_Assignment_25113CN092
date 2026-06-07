// Write a program to Recursive factorial. 

// Approach Used- The functions that calls itself with reduced values of n when we call for the recursive function. 
// Difficulty Level- Easy
// Concept Used- Using the concept of recursion and large data types and functions.

#include <stdio.h>
long long Factorial(int n);          // Function declaration

int main() 
{
    int num;    
    printf("Enter a number: ");
    scanf("%d", &num);

    long long result = Factorial(num);           // Function call
    printf("Factorial of %d is: %lld\n", num, result);
    
    return 0;
}

long long Factorial(int n)           // Function definition
{
    if (n < 0) 
    {
        printf("Factorial does not exist for negative numbers.\n");
        return -1;                  // Return -1 for negative input
    } 
    else if (n == 0 || n == 1) 
    {
        return 1;                   // Factorial of 0 and 1 is 1
    } 
    else 
    {
        return n * Factorial(n - 1);                   // Recursive call 
    }
}




