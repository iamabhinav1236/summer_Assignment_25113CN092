// Write a program to Find largest prime factor. 

// Approach Used- The largest prime factor of a number is the largest prime number that divides the number without leaving a remainder and it shoul be prime.
// Difficulty Level- Tough (Lenghty only)
// Concept Used- Using the concept of loops , functions and if-elseconditions.


#include <stdio.h>
int Prime(int n);          // Function declaration

int main() 
{
    int num;    
    printf("Enter a number: ");
    scanf("%d", &num);

    int largestPrimeFactor = -1;          // Variable to keep track of the largest prime factor found
                                            // here we are using -1 to indicate that no prime factor has been found yet
    for (int i = 2; i <= num; i++)          // Loop from 2 to num to find factors
    {
        if (num % i == 0)               // Checking i is a factor of num or not
        {
            if (Prime(i))              // Checking factor is a prime number or not
            {
                largestPrimeFactor = i;   // Update largest prime factor if it is greater than the current largest
            }
        }
    }
    
    if (largestPrimeFactor != -1) 
    {
        printf("The largest prime factor of %d is: %d\n", num, largestPrimeFactor);
    } 
    else 
    {
        printf("%d has no prime factors.\n", num);
    }
    
    return 0;
}

int Prime(int n)              // Function definition
{
    if (n <= 1) 
    {
        return 0;                   // 0 and 1 are not prime numbers
    }
    
    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            return 0;               // If n is divisible by any number other than 1 and itself, it is not a prime number
        }
    }
    
    return 1;                       // return true if n is not divisible by any number other than 1 and itself, it is prime number 
}