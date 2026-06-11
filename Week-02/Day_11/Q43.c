// Write a program to Write function to check prime. 

// Approach Used : Function and knowledge of prime numbers.
// Difficulty : Easy
// Concept Used : Use of function, if-else conditions, and for loops.

#include <stdio.h>
int Prime(int n);             // Function Declaration

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);            // Input from the user
            
    int result = Prime(num);            // Calling function 

    if (result == 1)             // Check if the result is 1 (prime)
    {
        printf("%d is a prime number.\n", num);            // Print if it is prime
    }
    else 
    {
        printf("%d is not a prime number.\n", num);            // Print if it is not prime
    }
    return 0;
}

int Prime(int n)             // Function Definition
{
    if (n <= 1)                 // For numbers less than or equal to 1, return 0 (not prime)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)        // Check for divisibility from 2 up to the square root of n
    {
        if (n % i == 0)                 // If n is divisible by any number from 2 to square root of n, it is not prime
        {
            return 0;
        }
    }
    return 1;                   // Return 1 if n is prime
}