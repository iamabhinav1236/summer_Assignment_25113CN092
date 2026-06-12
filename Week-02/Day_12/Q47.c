// Write a program to Write function for Fibonacci. 
// ALREADY DONE (Q.No.-15)

// Generating Fibonacci series.
// Approach Used- The Fibonacci series is a series of numbers where each number is the sum of the two preceding one. 
// Difficulty Level- Easy 
// Concept Used- Using the concept of loops to generate the Fibonacci series.

#include <stdio.h>
void fib(int n);           // Function declaration for generating Fibonacci series 

int main() 
{
    int n;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
    fib(n);                 // Calling the function 
    return 0;
}

void fib(int n)         // Function definition of Fibonacci series
{
    long long first = 0, second = 1, next;
    int i;
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)                 // Loop to generate Fibonacci series up to n terms
    {
        if (i <= 1)
            next = i;
        else 
        {
            next = first + second;          // Next term is the sum of the previous two terms
            first = second;                 // Update first to second
            second = next;                  // Update second to next 
        }
        printf("%lld ", next);              // Print the next term in the series
    }
    printf("\n");                           // Print a new line after the series is printed
}
