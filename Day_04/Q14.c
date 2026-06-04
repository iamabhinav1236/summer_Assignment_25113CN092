// Write a program to Find nth Fibonacci term. 

// Approach Used- The Fibonacci series is a series of numbers where each number is the sum of the two preceding one.
// Difficulty Level- Easy
// Concept Used- Using the concept of loops to find the nth term in the Fibonacci series.

#include <stdio.h>
long long fib(int n);           // Function declaration for finding nth Fibonacci term

int main() 
{
    int n;
    printf("Enter the term number to find of Fibonacci series: ");
    scanf("%d", &n);
    printf("The %dth term in the Fibonacci series is: %lld", n, fib(n));  // Calling the function and printing the result
    return 0;
}

long long fib(int n)         // Function definition to find nth Fibonacci term
{
    long long first = 0, second = 1, next;
    if (n == 0) 
    {
        return first;          // Return the 0th term which is 0
    }
    else if (n == 1) 
    {
        return second;         // Return the 1st term which is 1
    }
    for (int i = 2; i <= n; i++)             // Loop to calculate Fibonacci terms up to n
    {
        next = first + second;              // Next term is the sum of the previous two terms
        first = second;                     // Update first to second
        second = next;                      // Update second to next
    }
    return next;                           // Return the nth term in the Fibonacci series as per 0-based indexing
}