// Write a program to Recursive Fibonacci.

// Approach Used- The functions that calls itself with reduced values of n when we call for the recursive function.
// Difficulty Level- Easy
// Concept Used- Using recursion and functions.

#include<stdio.h>
long long Fibonacci(int n);                // Function declaration

int main() 
{
    int num;    
    printf("Enter a number: ");
    scanf("%d", &num);

    long long result = Fibonacci(num);                     // Function call
    printf("Fibonacci of %d is: %lld\n", num, result);
    
    return 0;
}

long long Fibonacci(int n)          // Function definition
{
    if (n < 0) 
    {
        printf("Fibonacci does not exist for negative numbers.\n");
        return -1;                  // Return -1 for negative input
    } 
    else if (n == 0) 
    {
        return 0;                   // Fibonacci of 0 is 0
    } 
    else if (n == 1) 
    {
        return 1;                   // Fibonacci of 1 is 1
    } 
    else 
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);              // Recursive call
    }
}