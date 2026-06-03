// Write a program to Print prime numbers in a range. 

// Approach Used- A number is prime if it is greater than 1 and has no divisors other than 1 and itself.
//                We can check for divisibility from 2 up to the square root of the number.
//                If the number is divisible by any of these, it is not prime; otherwise, it is prime.
// Difficulty Level- Medium (Lerned the concept of prime numbers and how to check for them using loops and conditions)
// Concept Used- Make a function to check for prime numbers by testing divisibility.

#include <stdio.h>
int isPrime(int n);

int main() 
{
    int begin, end;    
    printf("Enter the range (begin and end): ");
    scanf("%d %d", &begin, &end);

    printf("Prime numbers in the range %d to %d are: ", begin, end);
    for (int i = begin; i <= end; i++)          // Loop for range from begin to end
    {
        if (isPrime(i))             // Check if the number is prime using the isPrime function
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int isPrime(int n)              // Function to check if a number is prime or not
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
    return 1;
}